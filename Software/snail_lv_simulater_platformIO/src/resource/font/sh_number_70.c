/*******************************************************************************
 * Size: 70 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef SH_NUMBER_70
#define SH_NUMBER_70 1
#endif

#if SH_NUMBER_70

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0030 "0" */
    0x0, 0x1f, 0x80, 0x0, 0x7, 0xfe, 0x0, 0x1,
    0xff, 0xf8, 0x0, 0x3f, 0xff, 0xc0, 0x7, 0xff,
    0xfe, 0x0, 0x7f, 0x9f, 0xe0, 0xf, 0xf0, 0xff,
    0x1, 0xff, 0x7, 0xf8, 0x1f, 0xe0, 0x7f, 0x83,
    0xfe, 0x7, 0xfc, 0x3f, 0xc0, 0x3f, 0xc3, 0xfc,
    0x3, 0xfe, 0x7f, 0xc0, 0x3f, 0xe7, 0xfc, 0x3,
    0xfe, 0x7f, 0x80, 0x1f, 0xef, 0xf8, 0x1, 0xff,
    0xff, 0x80, 0x1f, 0xff, 0xf8, 0x1, 0xff, 0xff,
    0x80, 0x1f, 0xff, 0xf8, 0x1, 0xff, 0xff, 0x80,
    0x1f, 0xff, 0xf8, 0x1, 0xff, 0xff, 0x80, 0x1f,
    0xff, 0xf8, 0x1, 0xff, 0xff, 0x80, 0x1f, 0xff,
    0xf8, 0x1, 0xff, 0xff, 0x80, 0x1f, 0xff, 0xf8,
    0x1, 0xfe, 0x7f, 0x80, 0x3f, 0xe7, 0xfc, 0x3,
    0xfe, 0x7f, 0xc0, 0x3f, 0xe7, 0xfc, 0x3, 0xfc,
    0x3f, 0xc0, 0x3f, 0xc3, 0xfe, 0x7, 0xfc, 0x1f,
    0xe0, 0x7f, 0x81, 0xfe, 0x7, 0xf8, 0xf, 0xf0,
    0xff, 0x0, 0xff, 0x9f, 0xe0, 0x7, 0xff, 0xfe,
    0x0, 0x3f, 0xff, 0xc0, 0x1, 0xff, 0xf8, 0x0,
    0x7, 0xfe, 0x0, 0x0, 0x1f, 0x80, 0x0,

    /* U+0031 "1" */
    0x0, 0x2, 0x0, 0x0, 0x7, 0x0, 0x0, 0x1f,
    0x80, 0x0, 0xff, 0xc0, 0x3f, 0xff, 0xc0, 0x3f,
    0xff, 0x80, 0x1f, 0xff, 0x80, 0x7, 0xff, 0x80,
    0x1, 0xff, 0x80, 0x0, 0xff, 0x80, 0x0, 0xff,
    0x80, 0x0, 0xff, 0x80, 0x0, 0xff, 0x80, 0x0,
    0xff, 0x80, 0x0, 0xff, 0x80, 0x0, 0xff, 0x80,
    0x0, 0xff, 0x80, 0x0, 0xff, 0x80, 0x0, 0xff,
    0x80, 0x0, 0xff, 0x80, 0x0, 0xff, 0x80, 0x0,
    0xff, 0x80, 0x0, 0xff, 0x80, 0x0, 0xff, 0x80,
    0x0, 0xff, 0x80, 0x0, 0xff, 0x80, 0x0, 0xff,
    0x80, 0x0, 0xff, 0x80, 0x0, 0xff, 0x80, 0x0,
    0xff, 0x80, 0x0, 0xff, 0x80, 0x0, 0xff, 0x80,
    0x0, 0xff, 0x80, 0x0, 0xff, 0x80, 0x0, 0xff,
    0x80, 0x0, 0xff, 0x80, 0x0, 0xff, 0x80, 0x0,
    0xff, 0xf8, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xfe,
    0x7f, 0xff, 0xfe, 0x3f, 0xff, 0xfe, 0x1f, 0xff,
    0xfe, 0x0, 0x0, 0x0,

    /* U+0032 "2" */
    0x0, 0x7, 0xf0, 0x0, 0x0, 0x3f, 0xfe, 0x0,
    0x0, 0x7f, 0xff, 0x0, 0x1, 0xff, 0xff, 0xc0,
    0x3, 0xff, 0xff, 0xe0, 0x7, 0xf0, 0xff, 0xe0,
    0xf, 0xc0, 0x7f, 0xf0, 0xf, 0x80, 0x3f, 0xf0,
    0x1f, 0x0, 0x1f, 0xf8, 0xe, 0x0, 0x1f, 0xf8,
    0x0, 0x0, 0x1f, 0xf8, 0x0, 0x0, 0x1f, 0xf8,
    0x0, 0x0, 0x1f, 0xf8, 0x0, 0x0, 0x1f, 0xf8,
    0x0, 0x0, 0x1f, 0xf8, 0x0, 0x0, 0x3f, 0xf0,
    0x0, 0x0, 0x3f, 0xf0, 0x0, 0x0, 0x3f, 0xf0,
    0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x7f, 0xe0,
    0x0, 0x0, 0x7f, 0xc0, 0x0, 0x0, 0x7f, 0xc0,
    0x0, 0x0, 0xff, 0x80, 0x0, 0x0, 0xff, 0x80,
    0x0, 0x1, 0xff, 0x0, 0x0, 0x3, 0xfe, 0x0,
    0x0, 0x3, 0xfc, 0x0, 0x0, 0x7, 0xf8, 0x40,
    0x0, 0xf, 0xf0, 0xf0, 0x0, 0x1f, 0xe0, 0xfc,
    0x0, 0x3f, 0xc0, 0x7e, 0x0, 0x7f, 0x80, 0x7f,
    0x0, 0xff, 0x0, 0x7e, 0x1, 0xfe, 0xf, 0xfe,
    0x3, 0xff, 0xff, 0xfe, 0x7, 0xff, 0xff, 0xfe,
    0xf, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfc,
    0x7f, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xfc,
    0x7f, 0xff, 0xff, 0xf8,

    /* U+0033 "3" */
    0x0, 0x1f, 0xf0, 0x0, 0x7, 0xff, 0xc0, 0x1,
    0xff, 0xfe, 0x0, 0x3f, 0xff, 0xf0, 0x7, 0xff,
    0xff, 0x80, 0xfe, 0x1f, 0xf8, 0xf, 0x80, 0xff,
    0x81, 0xf0, 0xf, 0xf8, 0x1e, 0x0, 0x7f, 0x81,
    0xe0, 0x7, 0xf8, 0x0, 0x0, 0xff, 0x80, 0x0,
    0xf, 0xf0, 0x0, 0x1, 0xfe, 0x0, 0x0, 0x3f,
    0xe0, 0x0, 0x7, 0xfc, 0x0, 0x1, 0xff, 0x0,
    0x0, 0x7f, 0xfe, 0x0, 0x1f, 0xff, 0xf0, 0x7,
    0xff, 0xff, 0x80, 0xff, 0xff, 0xfc, 0xf, 0xf3,
    0xff, 0xe0, 0xfc, 0xf, 0xfe, 0x7, 0x0, 0x7f,
    0xf0, 0x0, 0x3, 0xff, 0x0, 0x0, 0x3f, 0xf0,
    0x0, 0x1, 0xff, 0x0, 0x0, 0x1f, 0xf0, 0x0,
    0x1, 0xff, 0x0, 0x0, 0x1f, 0xf0, 0x0, 0x1,
    0xff, 0x0, 0x0, 0x1f, 0xf0, 0x0, 0x1, 0xfe,
    0x0, 0x0, 0x3f, 0xe0, 0x80, 0x3, 0xfe, 0x1e,
    0x0, 0x7f, 0xc3, 0xf0, 0x7, 0xfc, 0x7f, 0x81,
    0xff, 0x87, 0xfc, 0x7f, 0xf0, 0x7f, 0xff, 0xfe,
    0x7, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xf0, 0x1,
    0xff, 0xfc, 0x0, 0x7, 0xfe, 0x0, 0x0,

    /* U+0034 "4" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x80,
    0x0, 0x0, 0xf, 0xe0, 0x0, 0x0, 0x7, 0xe0,
    0x0, 0x0, 0x7, 0xf0, 0x0, 0x0, 0x7, 0xf0,
    0x0, 0x0, 0x3, 0xf0, 0x0, 0x0, 0x3, 0xf8,
    0x0, 0x0, 0x3, 0xf8, 0x0, 0x0, 0x1, 0xf8,
    0x0, 0x0, 0x1, 0xf8, 0x0, 0x0, 0x1, 0xfc,
    0x0, 0x0, 0x0, 0xfc, 0x0, 0x0, 0x0, 0xfc,
    0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0xfe,
    0x30, 0x0, 0x0, 0x7e, 0x7c, 0x0, 0x0, 0x7f,
    0x3f, 0x0, 0x0, 0x7f, 0x3f, 0xc0, 0x0, 0x3f,
    0x1f, 0xf0, 0x0, 0x3f, 0x7, 0xfc, 0x0, 0x3f,
    0x83, 0xfe, 0x0, 0x1f, 0x81, 0xff, 0x0, 0x1f,
    0x80, 0xff, 0x80, 0x1f, 0xc0, 0x7f, 0xc0, 0xf,
    0xc0, 0x3f, 0xe0, 0xf, 0xc0, 0x1f, 0xf0, 0xf,
    0xff, 0xff, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xf7,
    0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xfe,
    0x7f, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x7f, 0xc0,
    0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x1f, 0xf0,
    0x0, 0x0, 0xf, 0xf8, 0x0, 0x0, 0x7, 0xfc,
    0x0, 0x0, 0x3, 0xfe, 0x0, 0x0, 0x1, 0xff,
    0x0, 0x0, 0x0, 0xff, 0x80, 0x0, 0x3f, 0xff,
    0xfc, 0x0, 0x1f, 0xff, 0xff, 0x0, 0xf, 0xff,
    0xff, 0xc0, 0x3, 0xff, 0xff, 0xe0, 0x0, 0xff,
    0x3, 0xf0,

    /* U+0035 "5" */
    0x0, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x78, 0x0,
    0x0, 0x7f, 0x1, 0xff, 0xff, 0xe0, 0xff, 0xff,
    0xfc, 0xf, 0xff, 0xff, 0x81, 0xff, 0xff, 0xe0,
    0x3f, 0xff, 0xfc, 0xf, 0xe0, 0x0, 0x1, 0xf8,
    0x0, 0x0, 0x3f, 0x0, 0x0, 0x7, 0xc0, 0x0,
    0x1, 0xff, 0xc0, 0x0, 0x3f, 0xff, 0x0, 0x7,
    0xff, 0xf8, 0x0, 0xff, 0xff, 0xc0, 0x3f, 0xff,
    0xfe, 0x7, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xfe,
    0x0, 0x7, 0xff, 0xc0, 0x0, 0x3f, 0xfc, 0x0,
    0x3, 0xff, 0x80, 0x0, 0x1f, 0xf0, 0x0, 0x3,
    0xff, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x7, 0xfc,
    0x0, 0x0, 0x7f, 0x80, 0x0, 0xf, 0xf0, 0x0,
    0x1, 0xfe, 0x0, 0x0, 0x3f, 0xc0, 0x0, 0x7,
    0xf0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x1f, 0xc0,
    0x0, 0x7, 0xf0, 0x0, 0x0, 0xfc, 0x0, 0x0,
    0x3f, 0x83, 0x0, 0xf, 0xe0, 0xf8, 0x7, 0xf8,
    0x1f, 0xc3, 0xfe, 0x3, 0xff, 0xff, 0x80, 0xff,
    0xff, 0xe0, 0xf, 0xff, 0xf0, 0x1, 0xff, 0xf8,
    0x0, 0xf, 0xf8, 0x0, 0x0,

    /* U+0036 "6" */
    0x0, 0x0, 0x7, 0xc0, 0x0, 0x1, 0xff, 0x0,
    0x0, 0x3f, 0xfc, 0x0, 0x7, 0xff, 0x80, 0x0,
    0xff, 0xf0, 0x0, 0xf, 0xfe, 0x0, 0x0, 0xff,
    0xc0, 0x0, 0xf, 0xfc, 0x0, 0x0, 0xff, 0xc0,
    0x0, 0xf, 0xfc, 0x0, 0x0, 0xff, 0xc0, 0x0,
    0xf, 0xfc, 0x0, 0x0, 0x7f, 0xc0, 0x0, 0x7,
    0xfe, 0x0, 0x0, 0x7f, 0xe0, 0x0, 0x3, 0xff,
    0x0, 0x0, 0x3f, 0xf0, 0x0, 0x1, 0xff, 0x0,
    0x0, 0xf, 0xf8, 0x0, 0x0, 0xff, 0xc7, 0xf0,
    0x7, 0xfc, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xc3,
    0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xfc, 0xff,
    0xf8, 0x7f, 0xe7, 0xfc, 0x1, 0xff, 0xbf, 0xe0,
    0xf, 0xfd, 0xff, 0x0, 0x3f, 0xff, 0xf8, 0x1,
    0xff, 0xff, 0xc0, 0x7, 0xff, 0xff, 0x0, 0x3f,
    0xff, 0xf8, 0x1, 0xff, 0x7f, 0xc0, 0xf, 0xfb,
    0xff, 0x0, 0x7f, 0xdf, 0xf8, 0x3, 0xfe, 0x7f,
    0xe0, 0x1f, 0xe3, 0xff, 0x81, 0xff, 0xf, 0xfc,
    0xf, 0xf0, 0x3f, 0xf8, 0xff, 0x80, 0xff, 0xff,
    0xf8, 0x3, 0xff, 0xff, 0x80, 0xf, 0xff, 0xf8,
    0x0, 0x1f, 0xff, 0x0, 0x0, 0x3f, 0xc0, 0x0,

    /* U+0037 "7" */
    0x8, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xff,
    0x87, 0xff, 0xff, 0xff, 0xe1, 0xff, 0xff, 0xff,
    0xf1, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff,
    0xf8, 0x7f, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xff,
    0xfc, 0x3f, 0x0, 0x3, 0xfc, 0x3f, 0x80, 0x1,
    0xfe, 0x1f, 0x80, 0x0, 0xfe, 0x7, 0x80, 0x0,
    0xff, 0x1, 0xc0, 0x0, 0x7f, 0x0, 0x0, 0x0,
    0x7f, 0x0, 0x0, 0x0, 0x3f, 0x80, 0x0, 0x0,
    0x3f, 0x80, 0x0, 0x0, 0x1f, 0xc0, 0x0, 0x0,
    0x1f, 0xc0, 0x0, 0x0, 0xf, 0xe0, 0x0, 0x0,
    0xf, 0xe0, 0x0, 0x0, 0x7, 0xf0, 0x0, 0x0,
    0x7, 0xf0, 0x0, 0x0, 0x3, 0xf8, 0x0, 0x0,
    0x3, 0xf8, 0x0, 0x0, 0x1, 0xfc, 0x0, 0x0,
    0x1, 0xfc, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0,
    0x0, 0xfe, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0,
    0x0, 0x7f, 0x0, 0x0, 0x0, 0x7f, 0x80, 0x0,
    0x0, 0x3f, 0x80, 0x0, 0x0, 0x3f, 0xc0, 0x0,
    0x0, 0x1f, 0xc0, 0x0, 0x0, 0x1f, 0xe0, 0x0,
    0x0, 0xf, 0xe0, 0x0, 0x0, 0xf, 0xe0, 0x0,
    0x0, 0xf, 0xf0, 0x0, 0x0, 0xf, 0xf0, 0x0,
    0x0, 0xf, 0xf8, 0x0, 0x0, 0x7, 0xf8, 0x0,
    0x0, 0x1, 0xfc, 0x0, 0x0, 0x0, 0x3c, 0x0,
    0x0, 0x0,

    /* U+0038 "8" */
    0x0, 0x1f, 0xe0, 0x0, 0xf, 0xff, 0x80, 0x3,
    0xff, 0xfe, 0x0, 0x7f, 0xff, 0xf0, 0xf, 0xff,
    0xff, 0x81, 0xff, 0xf, 0xfc, 0x3f, 0xe0, 0x3f,
    0xc3, 0xfc, 0x3, 0xfe, 0x7f, 0xc0, 0x1f, 0xe7,
    0xfc, 0x1, 0xfe, 0x7f, 0xc0, 0x1f, 0xe7, 0xfc,
    0x1, 0xfe, 0x7f, 0xc0, 0x1f, 0xe7, 0xfe, 0x3,
    0xfe, 0x7f, 0xf0, 0x3f, 0xc3, 0xff, 0x83, 0xfc,
    0x3f, 0xfe, 0x7f, 0x81, 0xff, 0xff, 0xf8, 0x1f,
    0xff, 0xff, 0x0, 0xff, 0xff, 0xe0, 0x7, 0xff,
    0xfc, 0x0, 0x3f, 0xff, 0xe0, 0x1, 0xff, 0xff,
    0x0, 0x7f, 0xff, 0xf8, 0xf, 0xff, 0xff, 0x81,
    0xfe, 0x7f, 0xfc, 0x3f, 0xe3, 0xff, 0xe7, 0xfc,
    0x1f, 0xfe, 0x7f, 0xc0, 0x7f, 0xef, 0xf8, 0x3,
    0xff, 0xff, 0x80, 0x3f, 0xff, 0xf8, 0x1, 0xff,
    0xff, 0x80, 0x1f, 0xff, 0xf8, 0x1, 0xff, 0xff,
    0x80, 0x1f, 0xff, 0xfc, 0x1, 0xff, 0x7f, 0xc0,
    0x3f, 0xe7, 0xfe, 0x3, 0xfe, 0x3f, 0xf0, 0xff,
    0xc1, 0xff, 0xff, 0xf8, 0xf, 0xff, 0xff, 0x0,
    0x7f, 0xff, 0xe0, 0x1, 0xff, 0xf8, 0x0, 0x7,
    0xfc, 0x0,

    /* U+0039 "9" */
    0x0, 0xf, 0xf0, 0x0, 0x0, 0x7f, 0xfc, 0x0,
    0x3, 0xff, 0xfc, 0x0, 0xf, 0xff, 0xfe, 0x0,
    0x3f, 0xff, 0xfe, 0x0, 0xff, 0x8f, 0xfc, 0x1,
    0xfe, 0x7, 0xfc, 0x7, 0xfc, 0xf, 0xfc, 0xf,
    0xf0, 0xf, 0xf8, 0x3f, 0xe0, 0xf, 0xf8, 0x7f,
    0xc0, 0x1f, 0xf0, 0xff, 0x80, 0x3f, 0xe1, 0xff,
    0x0, 0x3f, 0xe3, 0xfe, 0x0, 0x7f, 0xc7, 0xfc,
    0x0, 0xff, 0x8f, 0xf8, 0x1, 0xff, 0x1f, 0xf0,
    0x3, 0xfe, 0x3f, 0xf0, 0x7, 0xfc, 0x7f, 0xe0,
    0xf, 0xf8, 0x7f, 0xe0, 0x1f, 0xf0, 0xff, 0xe1,
    0xff, 0xe0, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff,
    0xff, 0x0, 0xff, 0xff, 0xfe, 0x0, 0x7f, 0xff,
    0xf8, 0x0, 0x3f, 0x1f, 0xf0, 0x0, 0x0, 0x7f,
    0xe0, 0x0, 0x0, 0xff, 0x80, 0x0, 0x3, 0xff,
    0x0, 0x0, 0x7, 0xfc, 0x0, 0x0, 0x1f, 0xf8,
    0x0, 0x0, 0x7f, 0xe0, 0x0, 0x1, 0xff, 0x80,
    0x0, 0x7, 0xfe, 0x0, 0x0, 0x1f, 0xf8, 0x0,
    0x0, 0x7f, 0xe0, 0x0, 0x3, 0xff, 0x80, 0x0,
    0x1f, 0xfe, 0x0, 0x0, 0xff, 0xf0, 0x0, 0x1f,
    0xff, 0x80, 0x0, 0xff, 0xfc, 0x0, 0x0, 0xff,
    0xe0, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x0,

    /* U+0058 "X" */
    0x0, 0x0, 0x0, 0x0, 0xf, 0x83, 0xff, 0xff,
    0x7, 0xff, 0xff, 0x1f, 0xff, 0xfc, 0x3f, 0xff,
    0xf8, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xe3, 0xff,
    0xff, 0x87, 0xff, 0xff, 0xf, 0xff, 0xfc, 0x1f,
    0xff, 0xf8, 0x7, 0xfe, 0x0, 0x1f, 0xf0, 0x0,
    0x1f, 0xf8, 0x0, 0xff, 0x0, 0x0, 0xff, 0xe0,
    0xf, 0xf8, 0x0, 0x3, 0xff, 0x0, 0x7f, 0x80,
    0x0, 0xf, 0xfc, 0x7, 0xf8, 0x0, 0x0, 0x7f,
    0xf0, 0x7f, 0x80, 0x0, 0x1, 0xff, 0x83, 0xfc,
    0x0, 0x0, 0x7, 0xfe, 0x3f, 0xc0, 0x0, 0x0,
    0x3f, 0xfb, 0xfc, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x3, 0xff, 0xfe, 0x0, 0x0,
    0x0, 0x1f, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x7f,
    0xfe, 0x0, 0x0, 0x0, 0x1, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0xf, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x3f, 0xf0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xc0,
    0x0, 0x0, 0x0, 0x7, 0xff, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0xf8, 0x0, 0x0, 0x0, 0x7, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0x80, 0x0,
    0x0, 0x7, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0xf0, 0x0, 0x0, 0x3, 0xfd, 0xff, 0xc0,
    0x0, 0x0, 0x3f, 0xe7, 0xfe, 0x0, 0x0, 0x3,
    0xfe, 0x3f, 0xf8, 0x0, 0x0, 0x1f, 0xe0, 0xff,
    0xe0, 0x0, 0x1, 0xfe, 0x3, 0xff, 0x0, 0x0,
    0x1f, 0xe0, 0x1f, 0xfc, 0x0, 0x1, 0xff, 0x0,
    0x7f, 0xf0, 0x0, 0x1f, 0xf0, 0x3, 0xff, 0x80,
    0x1, 0xff, 0x0, 0xf, 0xfe, 0x0, 0x1f, 0xff,
    0x0, 0x3f, 0xff, 0x1f, 0xff, 0xfc, 0xf, 0xff,
    0xfc, 0x7f, 0xff, 0xe0, 0x7f, 0xff, 0xf3, 0xff,
    0xff, 0x81, 0xff, 0xff, 0x8f, 0xff, 0xf8, 0x7,
    0xff, 0xfc
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 571, .box_w = 28, .box_h = 43, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 151, .adv_w = 571, .box_w = 24, .box_h = 44, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 283, .adv_w = 571, .box_w = 32, .box_h = 41, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 447, .adv_w = 571, .box_w = 28, .box_h = 43, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 598, .adv_w = 571, .box_w = 33, .box_h = 45, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 784, .adv_w = 571, .box_w = 27, .box_h = 44, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 933, .adv_w = 571, .box_w = 29, .box_h = 44, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 1093, .adv_w = 571, .box_w = 33, .box_h = 43, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1271, .adv_w = 571, .box_w = 28, .box_h = 44, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 1425, .adv_w = 571, .box_w = 31, .box_h = 43, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1592, .adv_w = 732, .box_w = 45, .box_h = 43, .ofs_x = 0, .ofs_y = -1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 48, .range_length = 10, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 88, .range_length = 1, .glyph_id_start = 11,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t sh_number_70 = {
#else
lv_font_t sh_number_70 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 45,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -7,
    .underline_thickness = 4,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if SH_NUMBER_70*/
