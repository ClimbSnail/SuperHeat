#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_SETTING
#define LV_ATTRIBUTE_IMG_SETTING
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SETTING uint8_t setting_map[] = {
  0x00, 0x00, 0x00, 0x7f, 0xf6, 0x00, 0x00, 0x00, 
  0x00, 0x17, 0x00, 0x8f, 0xfa, 0x00, 0x70, 0x00, 
  0x01, 0xaf, 0xc9, 0xef, 0xff, 0x8b, 0xfb, 0x00, 
  0x06, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x70, 
  0x00, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x10, 
  0x00, 0x8f, 0xff, 0xfc, 0xdf, 0xff, 0xfa, 0x00, 
  0x78, 0xef, 0xff, 0x81, 0x07, 0xff, 0xff, 0x88, 
  0xff, 0xff, 0xfc, 0x00, 0x00, 0xdf, 0xff, 0xff, 
  0xff, 0xff, 0xfe, 0x00, 0x00, 0xdf, 0xff, 0xff, 
  0x79, 0xff, 0xff, 0x60, 0x16, 0xff, 0xff, 0xa8, 
  0x00, 0x9f, 0xff, 0xfb, 0xcf, 0xff, 0xfa, 0x00, 
  0x00, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 
  0x01, 0xcf, 0xba, 0xff, 0xff, 0xbc, 0xfc, 0x10, 
  0x00, 0x16, 0x10, 0x8f, 0xf9, 0x00, 0x71, 0x00, 
  0x00, 0x00, 0x00, 0x7f, 0xf8, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t setting = {
  .header.cf = LV_IMG_CF_ALPHA_4BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 16,
  .header.h = 16,
  .data_size = 128,
  .data = setting_map,
};