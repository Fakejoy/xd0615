int i=0,x=0;
int bpin=8;
int astate=0,bstate=0;
void setup()
{
  for(i=7;i>=0;i--){
  	pinMode(i, OUTPUT);
  }
  pinMode(bpin, INPUT);
}

void loop()
{
  bstate=digitalRead(bpin);
  if(bstate != astate){
    if(bstate == HIGH){
      x++;
      if(x==3){
      	x=0;
      }
    }
    delay(50);
  }
  astate=bstate;
  if(x==1){
    for(i=7;i>=4;i--){
      digitalWrite(i, HIGH);
      delay(10); // Wait for 1000 millisecond(s)
      digitalWrite(i, LOW);
      delay(10); // Wait for 1000 millisecond(s)
    }
  }
  if(x==2){
    for(i=3;i>=0;i--){
        digitalWrite(i, HIGH);
        delay(10); // Wait for 1000 millisecond(s)
        digitalWrite(i, LOW);
        delay(10); // Wait for 1000 millisecond(s)
    }
  }
}
