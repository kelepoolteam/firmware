// clang-format off
#include "rgbicon.h"

const uint8_t bmp_forbid_data[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x20, 0x43, 0x79, 0xe4, 0xb9, 0x24, 0xe2, 0x03, 0xe2, 0x82, 0xb1, 0xc0, 0x70, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x61, 0xa7, 0xe2, 0x8a, 0xf3, 0xeb, 0xfb, 0x2c, 0xfc, 0xcb, 0xfb, 0x28, 0xf3, 0x45, 0xea, 0x61, 0xc1, 0x80, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x61, 0x49, 0xfb, 0x6d, 0xfc, 0x8a, 0xf3, 0x85, 0xe2, 0xe3, 0xe1, 0x44, 0xea, 0xc7, 0xf2, 0x08, 0xfb, 0x86, 0xf2, 0x81, 0xd9, 0x60, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0x28, 0xe8, 0xe2, 0x8e, 0xfc, 0x08, 0xe3, 0x21, 0xa1, 0xa0, 0x50, 0x00, 0x00, 0x00, 0x00, 0xc4, 0xa1, 0x28, 0xfb, 0x2c, 0xfc, 0x65, 0xf2, 0x20, 0xb9, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x84, 0x81, 0x0c, 0xfc, 0xaa, 0xeb, 0xe0, 0xa0, 0x20, 0x18, 0x00, 0x00, 0x00, 0x00, 0x84, 0x81, 0x28, 0xfb, 0x51, 0xfd, 0x00, 0xc9, 0xe7, 0xfa, 0xc2, 0xe1, 0x80, 0x60, 0x00, 0x00, 0x00, 0x00, 0x87, 0xca, 0xce, 0xfc, 0x44, 0xda, 0x60, 0x48, 0x00, 0x00, 0x00, 0x00, 0x84, 0x81, 0x28, 0xfb, 0x50, 0xfd, 0x00, 0xc9, 0x25, 0xaa, 0x28, 0xfb, 0x44, 0xf2, 0xc0, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x28, 0xfb, 0x51, 0xfd, 0x00, 0xc9, 0x00, 0x00, 0x00, 0x00, 0xa4, 0x81, 0x28, 0xfb, 0x50, 0xfd, 0x00, 0xc9, 0x80, 0x60, 0x00, 0x00, 0x28, 0xfb, 0xa6, 0xfa, 0x00, 0xc9, 0x00, 0x00, 0x00, 0x00, 0x28, 0xfb, 0x50, 0xfd, 0x00, 0xc9, 0x00, 0x00, 0x84, 0x81, 0x28, 0xfb, 0x50, 0xfd, 0x00, 0xc9, 0x80, 0x60, 0x00, 0x00, 0x00, 0x00, 0x28, 0xfb, 0xa6, 0xfa, 0x00, 0xc9, 0x00, 0x00, 0x00, 0x00, 0x86, 0xca, 0xcf, 0xfc, 0x45, 0xda, 0xe0, 0x88, 0x28, 0xfb, 0x51, 0xfd, 0x00, 0xc9, 0x80, 0x60, 0x00, 0x00, 0x00, 0x00, 0x22, 0x59, 0x08, 0xfb, 0x44, 0xf2, 0xe0, 0xa0, 0x00, 0x00, 0x00, 0x00, 0xa4, 0x81, 0x0c, 0xfc, 0xaa, 0xeb, 0x28, 0xfb, 0x50, 0xfd, 0x00, 0xc9, 0x80, 0x60, 0x00, 0x00, 0x00, 0x00, 0x40, 0x20, 0x46, 0xc2, 0xe7, 0xfa, 0xc2, 0xe1, 0x80, 0x68, 0x00, 0x00, 0x00, 0x00, 0x81, 0x28, 0xe8, 0xe2, 0x8e, 0xfc, 0x51, 0xfd, 0x00, 0xc9, 0x21, 0x91, 0x00, 0x00, 0x00, 0x00, 0xe2, 0x58, 0x25, 0xba, 0x07, 0xfb, 0x65, 0xf2, 0x20, 0xb9, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x61, 0x69, 0xfb, 0x6d, 0xfc, 0x8a, 0xf3, 0x85, 0xe2, 0xe3, 0xe1, 0x44, 0xea, 0xc7, 0xf2, 0x08, 0xfb, 0x86, 0xf2, 0x82, 0xd9, 0x60, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x61, 0xa6, 0xe2, 0x89, 0xf3, 0xeb, 0xfb, 0x2c, 0xfc, 0xcb, 0xfb, 0x28, 0xf3, 0x65, 0xea, 0x61, 0xc1, 0x80, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x28, 0x43, 0x79, 0xe4, 0xb9, 0x24, 0xe2, 0x03, 0xe2, 0x82, 0xb1, 0xc1, 0x68, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
const uint8_t bmp_success_data[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x1a, 0xc6, 0x34, 0x85, 0x2c, 0x65, 0x2c, 0x44, 0x24, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x09, 0xc6, 0x34, 0x71, 0x8f, 0x8d, 0x6e, 0x4c, 0x66, 0x03, 0x1c, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x09, 0x85, 0x2c, 0x71, 0x8f, 0x4c, 0x66, 0x2b, 0x5e, 0xe3, 0x13, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x09, 0x65, 0x2c, 0x71, 0x8f, 0x0b, 0x5e, 0xeb, 0x5d, 0xc2, 0x13, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x09, 0x44, 0x24, 0x70, 0x87, 0xeb, 0x5d, 0xca, 0x55, 0xa2, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x09, 0x44, 0x24, 0x71, 0x8f, 0xeb, 0x5d, 0xca, 0x55, 0xa2, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x09, 0x65, 0x2c, 0x71, 0x8f, 0x2b, 0x5e, 0xeb, 0x5d, 0xc2, 0x13, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x09, 0x85, 0x2c, 0x71, 0x8f, 0x4c, 0x66, 0x2b, 0x5e, 0xe3, 0x1b, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x09, 0xc6, 0x34, 0x71, 0x8f, 0x8d, 0x6e, 0x4c, 0x66, 0x03, 0x1c, 0x01, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x09, 0xe7, 0x3c, 0x71, 0x8f, 0xce, 0x76, 0x8d, 0x6e, 0x44, 0x24, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x11, 0x07, 0x3d, 0x70, 0x87, 0xef, 0x7e, 0xce, 0x76, 0x65, 0x2c, 0x01, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0x09, 0x28, 0x45, 0x71, 0x8f, 0x2f, 0x7f, 0xef, 0x7e, 0x85, 0x2c, 0x21, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x11, 0x48, 0x45, 0x71, 0x8f, 0x50, 0x87, 0x2f, 0x7f, 0xc6, 0x34, 0x21, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa4, 0x22, 0x48, 0x45, 0x28, 0x45, 0x07, 0x3d, 0xe7, 0x3c, 0x21, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
const uint8_t bmp_warn_data[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5a, 0xe0, 0xb3, 0xc0, 0xab, 0xe0, 0x51, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x5a, 0x20, 0xb4, 0x41, 0xdd, 0x61, 0xfe, 0xa0, 0xed, 0xe0, 0xab, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x62, 0x60, 0xc4, 0x84, 0xdd, 0xc6, 0xfe, 0x83, 0xfe, 0x61, 0xfe, 0x60, 0xfe, 0x00, 0xbc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x6a, 0xc0, 0xcc, 0xe7, 0xe5, 0x0c, 0xff, 0xe9, 0xfe, 0xc6, 0xfe, 0x83, 0xfe, 0x81, 0xfe, 0x60, 0xfe, 0x60, 0xbc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x6a, 0x00, 0xd5, 0x2a, 0xe6, 0x72, 0xff, 0x4f, 0xff, 0x2c, 0xff, 0xe9, 0xfe, 0xc6, 0xfe, 0x83, 0xfe, 0x61, 0xfe, 0x60, 0xfe, 0xa0, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x40, 0x31, 0x40, 0xdd, 0x8c, 0xee, 0xd8, 0xff, 0xb5, 0xff, 0x72, 0xff, 0x4f, 0xff, 0x0c, 0xff, 0xe9, 0xfe, 0xc6, 0xfe, 0x83, 0xfe, 0x81, 0xfe, 0x60, 0xfe, 0xe0, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x40, 0xdd, 0xfb, 0xff, 0xda, 0xff, 0xd8, 0xff, 0x00, 0x00, 0x04, 0x21, 0x86, 0x31, 0x86, 0x31, 0x28, 0x42, 0xc6, 0xfe, 0x86, 0x31, 0x86, 0x31, 0x60, 0xfe, 0x00, 0xd5, 0x00, 0x00, 0x00, 0x00, 0x40, 0xdd, 0xfb, 0xff, 0xda, 0xff, 0xd8, 0xff, 0x00, 0x00, 0x04, 0x21, 0x86, 0x31, 0x86, 0x31, 0x28, 0x42, 0xc6, 0xfe, 0x86, 0x31, 0x86, 0x31, 0x60, 0xfe, 0x00, 0xd5, 0x00, 0x00, 0x00, 0x00, 0x40, 0x31, 0x40, 0xdd, 0x8c, 0xee, 0xd8, 0xff, 0xb5, 0xff, 0x72, 0xff, 0x4f, 0xff, 0x0c, 0xff, 0xe9, 0xfe, 0xc6, 0xfe, 0x83, 0xfe, 0x81, 0xfe, 0x60, 0xfe, 0xe0, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x6a, 0x00, 0xd5, 0x2a, 0xe6, 0x72, 0xff, 0x4f, 0xff, 0x2c, 0xff, 0xe9, 0xfe, 0xc6, 0xfe, 0x83, 0xfe, 0x61, 0xfe, 0x60, 0xfe, 0xa0, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x6a, 0xc0, 0xcc, 0xe7, 0xe5, 0x0c, 0xff, 0xe9, 0xfe, 0xc6, 0xfe, 0x83, 0xfe, 0x81, 0xfe, 0x60, 0xfe, 0x60, 0xbc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x62, 0x60, 0xc4, 0x84, 0xdd, 0xc6, 0xfe, 0x83, 0xfe, 0x61, 0xfe, 0x60, 0xfe, 0x00, 0xbc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x5a, 0x20, 0xb4, 0x41, 0xdd, 0x61, 0xfe, 0xa0, 0xed, 0xe0, 0xab, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5a, 0xe0, 0xb3, 0xc0, 0xab, 0xe0, 0x51, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
const uint8_t bmp_err_data[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x79, 0xe7, 0xfa, 0xc1, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x30, 0x40, 0xd1, 0x80, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x81, 0x08, 0xfb, 0x50, 0xfd, 0xc7, 0xf2, 0xa1, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x38, 0x61, 0xd1, 0x51, 0xfd, 0x20, 0xc9, 0x80, 0x60, 0x00, 0x00, 0x00, 0x00, 0x28, 0xfb, 0x51, 0xfd, 0x30, 0xfd, 0xef, 0xfc, 0xa6, 0xf2, 0xa1, 0x38, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0xa2, 0xd9, 0x51, 0xfd, 0xc7, 0xfa, 0xa6, 0xfa, 0x00, 0xc9, 0x00, 0x00, 0x00, 0x00, 0xc2, 0x40, 0x08, 0xfb, 0x50, 0xfd, 0x0f, 0xfd, 0xae, 0xfc, 0x65, 0xea, 0x81, 0x38, 0x81, 0x38, 0xc2, 0xd9, 0x51, 0xfd, 0x08, 0xfb, 0xc6, 0xfa, 0x20, 0xc9, 0x40, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc2, 0x38, 0xe7, 0xfa, 0x51, 0xfd, 0xae, 0xfc, 0x6d, 0xfc, 0x24, 0xe2, 0x03, 0xe2, 0x51, 0xfd, 0x48, 0xfb, 0x07, 0xfb, 0x41, 0xd1, 0x40, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc1, 0x38, 0xc7, 0xf2, 0x51, 0xfd, 0x6d, 0xfc, 0x2c, 0xfc, 0x8e, 0xfc, 0x89, 0xfb, 0x48, 0xfb, 0x61, 0xd1, 0x40, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc1, 0x38, 0xa6, 0xf2, 0x50, 0xfd, 0x2c, 0xfc, 0xcb, 0xfb, 0x89, 0xfb, 0x81, 0xd9, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc1, 0x38, 0xa6, 0xf2, 0x50, 0xfd, 0x2c, 0xfc, 0xcb, 0xfb, 0x89, 0xfb, 0x81, 0xd9, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc1, 0x38, 0xc7, 0xf2, 0x51, 0xfd, 0x6d, 0xfc, 0x2c, 0xfc, 0x8e, 0xfc, 0x89, 0xfb, 0x48, 0xfb, 0x61, 0xd1, 0x40, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc2, 0x38, 0xe7, 0xfa, 0x51, 0xfd, 0xae, 0xfc, 0x6d, 0xfc, 0x24, 0xe2, 0x03, 0xe2, 0x51, 0xfd, 0x48, 0xfb, 0x07, 0xfb, 0x41, 0xd1, 0x40, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc2, 0x40, 0x08, 0xfb, 0x50, 0xfd, 0x0f, 0xfd, 0xae, 0xfc, 0x65, 0xea, 0x81, 0x38, 0x81, 0x38, 0xc2, 0xd9, 0x51, 0xfd, 0x08, 0xfb, 0xc6, 0xfa, 0x20, 0xc9, 0x40, 0x30, 0x00, 0x00, 0x00, 0x00, 0x28, 0xfb, 0x51, 0xfd, 0x30, 0xfd, 0xef, 0xfc, 0xa6, 0xf2, 0xa1, 0x38, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0xa2, 0xd9, 0x51, 0xfd, 0xc7, 0xfa, 0xa6, 0xfa, 0x00, 0xc9, 0x00, 0x00, 0x00, 0x00, 0x84, 0x81, 0x08, 0xfb, 0x50, 0xfd, 0xc7, 0xf2, 0xa1, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x38, 0x61, 0xd1, 0x51, 0xfd, 0x20, 0xc9, 0x80, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x79, 0xe7, 0xfa, 0xc1, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x30, 0x40, 0xd1, 0x80, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };

const uint8_t bmp_egg_data[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa2, 0x05, 0xc2, 0x05, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x05, 0xc2, 0x05, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc2, 0x05, 0xc2, 0x05, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x05, 0xc2, 0x05, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05,
0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05,
0xc2, 0x05, 0xc2, 0x05, 0xa2, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05,
0xc2, 0x05, 0xc2, 0x05, 0xa2, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x05,
0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05,
0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x05,
0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xa2, 0x05,
0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc2, 0x05, 0xa2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05,
0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xc2, 0x05, 0xa2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xa2, 0x05, 0xc2, 0x05, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05,
0xc2, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x05,
0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05,
0xc2, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05,
0xc2, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x05,
0xa2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05,
0xc2, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x05,
0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05,
0xc2, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x05,
0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05,
0xc2, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x05,
0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05,
0xc2, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x05,
0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xa2, 0x05, 0xc2, 0x05, 0xc2, 0x05,
0xc2, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xa2, 0x05, 0xc2, 0x05, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xc2, 0x05, 0xa2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05,
0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x05, 0xa2, 0x05, 0xc2, 0x05,
0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc2, 0x05, 0xc2, 0x05, 0xa2, 0x05,
0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05,
0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05,
0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05,
0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xc2, 0x05, 0xc2, 0x05, 0xa2, 0x05, 0xa2, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xa1, 0x05, 0xc2, 0x05,
0xc2, 0x05, 0xa2, 0x05, 0xc2, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa2, 0x05, 0xc2, 0x05, 0xa2, 0x05, 0xc2, 0x05, 0xc2, 0x05,
0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0xc2, 0x05, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x05, 0xc2, 0x05, 0xa2, 0x05, 0xc2, 0x05, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const BITMAP bmp_icon_forbid = {16, 16, bmp_forbid_data};
const BITMAP bmp_icon_success = {16, 16, bmp_success_data};
const BITMAP bmp_icon_warn = {16, 16, bmp_warn_data};
const BITMAP bmp_icon_err = {16, 16, bmp_err_data};
const BITMAP bmp_icon_egg = {32, 32, bmp_egg_data};
