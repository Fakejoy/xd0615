byte LEDs[10]={  //注意我用的是共阳数码管！！！ 

	B00011000,

	B11011110,

	B00110100,

	B10010100,

	B11010010,

	B10010001,

	B00010001,

	B11011100,

	B00010000,

    B10010000

    };

void setup() {

	 DDRD=B11111111;//控制输出方向

}

void loop() {

	PORTD=B11111111;//控制输出数据是0或者1；

	for(int i=0;i<10;i++){

	PORTD=LEDs[i];

	delay(1000);

	}

}
