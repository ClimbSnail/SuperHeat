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

#ifndef LV_ATTRIBUTE_IMG_SIGNAL_SQUARE_SMALL
#define LV_ATTRIBUTE_IMG_SIGNAL_SQUARE_SMALL
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SIGNAL_SQUARE_SMALL uint8_t signal_square_small_map[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x06, 0x90, 0x93, 0x93, 0x56, 0x00, 0x00, 0x89, 0x93, 0x93, 0x77, 0x00, 0x00, 0x00, 0x00, 
  0x01, 0x0e, 0x0e, 0x25, 0x95, 0x00, 0x00, 0xb1, 0x0e, 0x0e, 0xae, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x18, 0x95, 0x00, 0x00, 0xae, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x18, 0x95, 0x00, 0x00, 0xae, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x18, 0x95, 0x00, 0x00, 0xae, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x18, 0x95, 0x00, 0x00, 0xae, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x18, 0x95, 0x00, 0x00, 0xae, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x18, 0x95, 0x00, 0x00, 0xae, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x18, 0x95, 0x00, 0x00, 0xae, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x18, 0x95, 0x00, 0x00, 0xae, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x18, 0x95, 0x00, 0x00, 0xae, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x18, 0x9a, 0x0c, 0x0c, 0xae, 0x00, 0x00, 0xae, 0x0c, 0x0c, 0x0c, 0x00, 
  0x00, 0x00, 0x00, 0x0e, 0x95, 0x94, 0x94, 0x70, 0x00, 0x00, 0x81, 0x94, 0x94, 0x91, 0x06, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t signal_square_small = {
  .header.cf = LV_IMG_CF_ALPHA_8BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 15,
  .header.h = 15,
  .data_size = 225,
  .data = signal_square_small_map,
};