byte LEDs[10]={  //ע�����õ��ǹ�������ܣ����� 

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

	 DDRD=B11111111;//�����������

}

void loop() {

	PORTD=B11111111;//�������������0����1��

	for(int i=0;i<10;i++){

	PORTD=LEDs[i];

	delay(1000);

	}

}

���ߣ��ֲ�����
���ӣ�https://www.jianshu.com/p/cb6ae7bbb1a8
��Դ������
����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������