//引入依赖
#include <stdio.h>
#include <LiquidCrystal.h>

String str = "";

// 初始化LCD针脚
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal LCD(rs, en, d4, d5, d6, d7);

void setup() {
  LCD.begin(16, 2); //初始化,设置列行
  Serial.begin(9600);
}

void loop() {
  while (Serial.available() > 0)
  {
    str += char(Serial.read());
    delay(2);
  }

  if (str.length() > 0)
  {
    Serial.println(str);
    LCD.clear();
    LCD.setCursor(0, 0);
    LCD.print(str);
  }
  
  delay(10);
  str = "";
}
