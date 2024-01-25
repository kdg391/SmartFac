#include <Wire.h>                        // i2C 통신을 위한 라이브러리
#include <LiquidCrystal_I2C.h>        // LCD 1602 I2C용 라이브러리
LiquidCrystal_I2C lcd(0x27,16,2);     // 접근주소: 0x3F or 0x27

void setup() {
  // put your setup code here, to run once:
  lcd.init();

  lcd.backlight();
}

char str[] = "Hello, world!";
int index = 0;

void loop() {
  lcd.print(str[index]);

  index++;

  if (index == strlen(str) + 1) {
    index = 0;
    lcd.clear();
  }

  delay(1000);
}
