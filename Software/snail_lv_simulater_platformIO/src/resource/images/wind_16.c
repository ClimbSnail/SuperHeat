#if __has_include("lvgl.h")
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_WIND_16
#define LV_ATTRIBUTE_IMG_WIND_16
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_WIND_16 uint8_t wind_16_map[] = {
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 0*/
  0xcf, 0x7f, 0x0f, 0x10, 	/*Color of index 1*/
  0xcf, 0x8f, 0x0f, 0x20, 	/*Color of index 2*/
  0xd9, 0x94, 0x0f, 0x30, 	/*Color of index 3*/
  0xd7, 0x8f, 0x0f, 0x40, 	/*Color of index 4*/
  0xd8, 0x95, 0x0f, 0x50, 	/*Color of index 5*/
  0xda, 0x93, 0x0f, 0x70, 	/*Color of index 6*/
  0xd7, 0x93, 0x11, 0x80, 	/*Color of index 7*/
  0xd9, 0x95, 0x11, 0x8f, 	/*Color of index 8*/
  0xdb, 0x96, 0x11, 0x9f, 	/*Color of index 9*/
  0xda, 0x94, 0x10, 0xaf, 	/*Color of index 10*/
  0xda, 0x95, 0x10, 0xbf, 	/*Color of index 11*/
  0xda, 0x95, 0x11, 0xcf, 	/*Color of index 12*/
  0xdb, 0x95, 0x11, 0xdf, 	/*Color of index 13*/
  0xda, 0x95, 0x11, 0xef, 	/*Color of index 14*/
  0xdb, 0x96, 0x12, 0xff, 	/*Color of index 15*/

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0xcd, 0x92, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xd6, 0x32, 0x6e, 0x20, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x70, 0x00, 0x06, 0x90, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x20, 0x00, 0x01, 0xe0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x01, 0xe0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0xa0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x6d, 0x30, 0x00, 
  0x00, 0x00, 0x0d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xb2, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x80, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0xb8, 
  0x00, 0x0d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x10, 0x30, 0x00, 0x2e, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xb0, 0xd2, 0x00, 0x3e, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0, 0x02, 0xf0, 0x8b, 0x24, 0x98, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x17, 0xb0, 0x08, 0xfe, 0x91, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0xeb, 0x20, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t wind_16 = {
  .header.cf = LV_IMG_CF_INDEXED_4BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 24,
  .header.h = 16,
  .data_size = 256,
  .data = wind_16_map,
};