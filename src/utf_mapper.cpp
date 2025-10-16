#include "utf_mapper.h"
#include "U8glib-HAL.h"

extern U8GLIB *u8g_ptr;

#define HARDWARE_CHAR_OUT(C) u8g_ptr->print((char)(C))

#if ENABLED(MAPPER_D0D1)
  char charset_mapper(const char c) {
    static uint8_t utf_hi_char; // UTF-8 high part
    static bool seen_d5 = false;
    uint8_t d = c;
    if (d >= 0x80u) { // UTF-8 handling
      if (d >= 0xD0u && !seen_d5) {
        utf_hi_char = d - 0xD0u;
        seen_d5 = true;
        return 0;
      }
      else if (seen_d5) {
        d &= 0x3Fu;
        HARDWARE_CHAR_OUT(0xA0u + (utf_hi_char << 6) + d);
      }
      else {
        HARDWARE_CHAR_OUT('?');
      }
    }
    else {
      HARDWARE_CHAR_OUT(c);
    }
    seen_d5 = false;
    return 1;
  }
#else
  char charset_mapper(const char c) {
    HARDWARE_CHAR_OUT(c);
    return 1;
  }
#endif // code mappers