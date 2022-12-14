#ifndef MC_LCD_H
#define MC_LCD_H

#include <TFT_eSPI.h>
#include <EEPROM.h>
#include <TJpg_Decoder.h>
#include "../mcwifi/mcwifi.h"

#define LCD_BL_PIN 5 //  LCD背光引脚

class McLcd {
  private:

  public:
    void initLcd();
    void setBrightness(int pwm);
    void initTJpgDec();
};


#endif
