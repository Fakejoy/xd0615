const int ledPin =  13;      // LED引脚的编号

// 变量定义： 
int ledState = LOW;             // 用于设置LED的LED状态

//一般来说，对于保存时间的变量，应该使用“unsigned long”
//值将很快变得太大，无法存储int
unsigned long previousMillis = 0;        //存储上次更新LED的时间

//常量不会改变：
const long interval = 1000;           //闪烁间隔

void setup() {
  //将数字管脚设置为输出：
  pinMode(ledPin, OUTPUT);
}

void loop() {
  /*检查是否该让LED闪烁；也就是说，如果

当前时间和上次闪烁的时间差

LED比您想要的间隔大

使LED闪烁。*/ 
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    //保存上次闪烁LED的时间
    previousMillis = currentMillis;

    //如果LED熄灭，则将其打开，反之亦然：
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    //将LED设置为变量的LED状态：
    digitalWrite(ledPin, ledState);
  }
}

