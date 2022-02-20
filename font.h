// Based on code from https://jared.geek.nz/2014/jan/custom-fonts-for-microcontrollers
const unsigned char font[96][6] = {
  {0x00,0x00,0x00,0x00,0x00}, //  
  {0x00,0x00,0x5c,0x00,0x00}, // !
  {0x00,0x06,0x00,0x06,0x00}, // "
  {0x28,0x7c,0x28,0x7c,0x28}, // #
  {0x5c,0x54,0xfe,0x54,0x74}, // $
  {0x44,0x20,0x10,0x08,0x44}, // %
  {0x28,0x54,0x54,0x20,0x50}, // &
  {0x06,0x00,0x00,0x00,0x00}, // '
  {0x38,0x44,0x00,0x00,0x00}, // (
  {0x44,0x38,0x00,0x00,0x00}, // )
  {0x02,0x07,0x02,0x00,0x00}, // *
  {0x10,0x10,0x7c,0x10,0x10}, // +
  {0xc0,0x00,0x00,0x00,0x00}, // ,
  {0x10,0x10,0x10,0x10,0x10}, // -
  {0x40,0x00,0x00,0x00,0x00}, // .
  {0x60,0x10,0x0c,0x00,0x00}, // /
  {0x7c,0x64,0x54,0x4c,0x7c}, // 0
  {0x00,0x48,0x7c,0x40,0x00}, // 1
  {0x64,0x54,0x54,0x54,0x48}, // 2
  {0x44,0x54,0x54,0x54,0x6c}, // 3
  {0x3c,0x20,0x70,0x20,0x20}, // 4
  {0x5c,0x54,0x54,0x54,0x24}, // 5
  {0x7c,0x54,0x54,0x54,0x74}, // 6
  {0x04,0x04,0x64,0x14,0x0c}, // 7
  {0x7c,0x54,0x54,0x54,0x7c}, // 8
  {0x5c,0x54,0x54,0x54,0x7c}, // 9
  {0x00,0x00,0x44,0x00,0x00}, // :
  {0x00,0x00,0xc4,0x00,0x00}, // ;
  {0x10,0x28,0x44,0x00,0x00}, // <
  {0x28,0x28,0x28,0x28,0x28}, // =
  {0x44,0x28,0x10,0x00,0x00}, // >
  {0x08,0x04,0x54,0x08,0x00}, // ?
  {0x7c,0x44,0x54,0x54,0x5c}, // @
  {0x7c,0x24,0x24,0x24,0x7c}, // A
  {0x7c,0x54,0x54,0x54,0x6c}, // B
  {0x7c,0x44,0x44,0x44,0x44}, // C
  {0x7c,0x44,0x44,0x44,0x38}, // D
  {0x7c,0x54,0x54,0x54,0x44}, // E
  {0x7c,0x14,0x14,0x14,0x04}, // F
  {0x7c,0x44,0x44,0x54,0x74}, // G
  {0x7c,0x10,0x10,0x10,0x7c}, // H
  {0x44,0x44,0x7c,0x44,0x44}, // I
  {0x60,0x40,0x40,0x44,0x7c}, // J
  {0x7c,0x10,0x10,0x28,0x44}, // K
  {0x7c,0x40,0x40,0x40,0x40}, // L
  {0x7c,0x08,0x10,0x08,0x7c}, // M
  {0x7c,0x08,0x10,0x20,0x7c}, // N
  {0x38,0x44,0x44,0x44,0x38}, // O
  {0x7c,0x14,0x14,0x14,0x08}, // P
  {0x3c,0x24,0x64,0x24,0x3c}, // Q
  {0x7c,0x14,0x14,0x14,0x68}, // R
  {0x5c,0x54,0x54,0x54,0x74}, // S
  {0x04,0x04,0x7c,0x04,0x04}, // T
  {0x7c,0x40,0x40,0x40,0x7c}, // U
  {0x0c,0x30,0x40,0x30,0x0c}, // V
  {0x3c,0x40,0x30,0x40,0x3c}, // W
  {0x44,0x28,0x10,0x28,0x44}, // X
  {0x0c,0x10,0x60,0x10,0x0c}, // Y
  {0x44,0x64,0x54,0x4c,0x44}, // Z
  {0x00,0x7c,0x44,0x00,0x00}, // [
  {0x0c,0x10,0x60,0x00,0x00}, // "\"
  {0x00,0x44,0x7c,0x00,0x00}, // ]
  {0x00,0x01,0x00,0x01,0x00}, // ^
  {0x40,0x40,0x40,0x40,0x40}, // _
  {0x00,0x01,0x00,0x00,0x00}, // `
  {0x7c,0x24,0x24,0x24,0x7c}, // a
  {0x7c,0x54,0x54,0x54,0x6c}, // b
  {0x7c,0x44,0x44,0x44,0x44}, // c
  {0x7c,0x44,0x44,0x44,0x38}, // d
  {0x7c,0x54,0x54,0x54,0x44}, // e
  {0x7c,0x14,0x14,0x14,0x04}, // f
  {0x7c,0x44,0x44,0x54,0x74}, // g
  {0x7c,0x10,0x10,0x10,0x7c}, // h
  {0x44,0x44,0x7c,0x44,0x44}, // i
  {0x60,0x40,0x40,0x44,0x7c}, // j
  {0x7c,0x10,0x10,0x28,0x44}, // k
  {0x7c,0x40,0x40,0x40,0x40}, // l
  {0x7c,0x08,0x10,0x08,0x7c}, // m
  {0x7c,0x08,0x10,0x20,0x7c}, // n
  {0x38,0x44,0x44,0x44,0x38}, // o
  {0x7c,0x14,0x14,0x14,0x08}, // p
  {0x3c,0x24,0x64,0x24,0x3c}, // q
  {0x7c,0x14,0x14,0x14,0x68}, // r
  {0x5c,0x54,0x54,0x54,0x74}, // s
  {0x04,0x04,0x7c,0x04,0x04}, // t
  {0x7c,0x40,0x40,0x40,0x7c}, // u
  {0x0c,0x30,0x40,0x30,0x0c}, // v
  {0x3c,0x40,0x30,0x40,0x3c}, // w
  {0x44,0x28,0x10,0x28,0x44}, // x
  {0x0c,0x10,0x60,0x10,0x0c}, // y
  {0x44,0x64,0x54,0x4c,0x44}, // z
  {0x10,0x7c,0x44,0x00,0x00}, // {
  {0x6c,0x00,0x00,0x00,0x00}, // |
  {0x44,0x7c,0x10,0x00,0x00}, // }
  {0x02,0x01,0x02,0x01,0x00}, // ~
  {0x00,0x00,0x00,0x00,0x00}
};
