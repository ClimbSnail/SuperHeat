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

#ifndef LV_ATTRIBUTE_IMG_IMG_WAKE_TYPE_HIGH
#define LV_ATTRIBUTE_IMG_IMG_WAKE_TYPE_HIGH
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMG_WAKE_TYPE_HIGH uint8_t img_wake_type_high_map[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x01, 0x44, 0x44, 0x44, 0x43, 0x00, 
  0x04, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x01, 0x44, 0x4f, 0x74, 0x43, 0x00, 
  0x00, 0x00, 0x0f, 0x40, 0x00, 0x00, 
  0x00, 0x00, 0x0f, 0x40, 0x00, 0x00, 
  0x02, 0x88, 0x8f, 0xa8, 0x86, 0x00, 
  0x04, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x42, 0x06, 0x88, 0x82, 0x00, 
  0x04, 0xf6, 0x0c, 0xff, 0xf7, 0x00, 
  0x07, 0xf2, 0x0c, 0x80, 0xbb, 0x00, 
  0x08, 0xf2, 0x06, 0x40, 0xbc, 0x00, 
  0x03, 0xf9, 0x00, 0x02, 0xfb, 0x00, 
  0x00, 0xcf, 0xe8, 0xaf, 0xf4, 0x00, 
  0x00, 0x1a, 0xff, 0xff, 0x60, 0x00, 
  0x00, 0x00, 0x04, 0x30, 0x00, 0x00, 
  0x02, 0x88, 0x88, 0x88, 0x86, 0x00, 
  0x04, 0xff, 0xff, 0xff, 0xfb, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x02, 0x88, 0x88, 0x88, 0x85, 0x00, 
  0x04, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x00, 0x0f, 0x40, 0x00, 0x00, 
  0x00, 0x00, 0x0f, 0x40, 0x00, 0x00, 
  0x00, 0x00, 0x0f, 0x40, 0x00, 0x00, 
  0x02, 0x88, 0x8f, 0xa8, 0x86, 0x00, 
  0x04, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t img_wake_type_high = {
  .header.cf = LV_IMG_CF_ALPHA_4BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 11,
  .header.h = 31,
  .data_size = 186,
  .data = img_wake_type_high_map,
};