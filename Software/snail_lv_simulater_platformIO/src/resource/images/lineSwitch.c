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

#ifndef LV_ATTRIBUTE_IMG_LINESWITCH
#define LV_ATTRIBUTE_IMG_LINESWITCH
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_LINESWITCH uint8_t lineSwitch_map[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 
  0x00, 0x04, 0xad, 0xff, 0xff, 0x80, 0x00, 0x00, 
  0x00, 0x7f, 0xff, 0xff, 0xff, 0x80, 0x37, 0x00, 
  0x04, 0xff, 0x83, 0x00, 0x08, 0x00, 0xdf, 0x50, 
  0x0a, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x8f, 0xb0, 
  0x0d, 0xf3, 0x00, 0x00, 0x00, 0x00, 0x2f, 0xe0, 
  0x0e, 0xf3, 0x00, 0x00, 0x00, 0x00, 0x2f, 0xe0, 
  0x09, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x8f, 0xc0, 
  0x04, 0xfe, 0x10, 0x70, 0x00, 0x28, 0xef, 0x60, 
  0x00, 0x85, 0x07, 0xff, 0xff, 0xff, 0xf8, 0x00, 
  0x00, 0x00, 0x08, 0xff, 0xff, 0xeb, 0x50, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t lineSwitch = {
  .header.cf = LV_IMG_CF_ALPHA_4BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 16,
  .header.h = 16,
  .data_size = 128,
  .data = lineSwitch_map,
};