int lPin = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(lPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int y=0;y<3;y++)
  {
    digitalWrite(lPin,HIGH);
    delay(150);
    digitalWrite(lPin,LOW);
    delay(100);
    for(int x=0;x<3;x++)
    {
    digitalWrite(lPin,HIGH);
    delay(300);
    digitalWrite(lPin,LOW);
    delay(100);            
    }
    delay(100);
    for(int y=0;y<3;y++)
    {
    digitalWrite(lPin,HIGH);
    delay(150);
    digitalWrite(lPin,LOW);
    delay(100);      
    }
    delay(200);
  }
}
