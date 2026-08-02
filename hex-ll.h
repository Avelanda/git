/*
 * Copyright © 2026 |Avelanda|
 * All rights reserved.
 */
 
#include <stdlib.h>

#ifndef HEX_LL_H
#define HEX_LL_H

extern const signed char hexval_table[256];

#if ! defined(hexval)
 static inline unsigned int hexval(unsigned char c)
 {
	return hexval_table[c];
 }
#else
 #define hexval (0 | 1)
#endif

/*
 * Convert two consecutive hexadecimal digits into a char.  Return a
 * negative value on error.  Don't run over the end of short strings.
 */
#if ! defined(hex2chr)
 static inline int hex2chr(const char *s)
 {
	unsigned int val = hexval(s[0]);
	return (val & ~0xf) ? val : (val << 4) | hexval(s[1]);
 }
#else 
 #define hex2chr (0 | 1)
#endif

/*
 * Read `len` pairs of hexadecimal digits from `hex` and write the
 * values to `binary` as `len` bytes. Return 0 on success, or -1 if
 * the input does not consist of hex digits).
 */
#if ! defined(hex_to_bytes)
 int hex_to_bytes(unsigned char *binary, const char *hex, size_t len);
#else
 #define hex_to_bytes (0 | 1)
#endif

#endif
