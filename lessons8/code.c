const int ledPin =  13;      // LED���ŵı��

// �������壺 
int ledState = LOW;             // ��������LED��LED״̬

//һ����˵�����ڱ���ʱ��ı�����Ӧ��ʹ�á�unsigned long��
//ֵ���ܿ���̫���޷��洢int
unsigned long previousMillis = 0;        //�洢�ϴθ���LED��ʱ��

//��������ı䣺
const long interval = 1000;           //��˸���

void setup() {
  //�����ֹܽ�����Ϊ�����
  pinMode(ledPin, OUTPUT);
}

void loop() {
  /*����Ƿ����LED��˸��Ҳ����˵�����

��ǰʱ����ϴ���˸��ʱ���

LED������Ҫ�ļ����

ʹLED��˸��*/ 
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    //�����ϴ���˸LED��ʱ��
    previousMillis = currentMillis;

    //���LEDϨ������򿪣���֮��Ȼ��
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    //��LED����Ϊ������LED״̬��
    digitalWrite(ledPin, ledState);
  }
}

