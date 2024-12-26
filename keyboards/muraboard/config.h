#define SPLIT_USB_DETECT//これがなかったからダメだったっポイ
#define MASTER_RIGHT
#define MATRIX_ROWS 10
#define MATRIX_COLS 6  // 片側6列×2
//#define SOFT_SERIAL_PIN D0

/* encoders *///https://25keys.com/2021/12/15/rotary_encoder/
#define ENCODERS 1

#define ENCODERS_CCW_KEY { { 0, 4 },{ 2, 4 } }
#define ENCODERS_CW_KEY  { { 1, 4 },{ 3, 4 } }
