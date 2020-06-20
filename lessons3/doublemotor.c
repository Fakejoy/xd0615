char ch=' ';
void setup()
{
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop()
{
    if(Serial.available()>0){
      ch = Serial.read();
      if (ch == 'd'){
        digitalWrite(6,HIGH);
        digitalWrite(7,LOW);
        digitalWrite(8,HIGH);
        digitalWrite(9,LOW);
      }
      if (ch == 'a'){
      	digitalWrite(6,LOW);
        digitalWrite(7,HIGH);
        digitalWrite(8,LOW);
        digitalWrite(9,HIGH);
      }
      if (ch == 's'){
      	digitalWrite(6,LOW);
        digitalWrite(7,LOW);
        digitalWrite(8,LOW);
        digitalWrite(9,LOW);
      }
      if (ch == 'w'){
      	digitalWrite(6,LOW);
        digitalWrite(7,HIGH);
        digitalWrite(8,HIGH);
        digitalWrite(9,LOW);
      }
    }
}
