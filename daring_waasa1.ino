int ledpin=3;
int ledpin1=4;
int ledpin2=5;
void setup() 
{
pinMode(ledpin,OUTPUT);
pinMode(ledpin1,OUTPUT);
pinMode(ledpin2,OUTPUT);
}
void loop() 
{
digitalWrite(ledpin,HIGH);
delay(3000);
digitalWrite(ledpin,LOW);
delay(3000);
digitalWrite(ledpin1,HIGH);
delay(3000);
digitalWrite(ledpin1,LOW);
delay(3000);
digitalWrite(ledpin2,HIGH);
delay(3000);
digitalWrite(ledpin2,LOW);
delay(3000);
}