int LED = 9;
int velocitat = 10;
int pwm;

void setup() 
{ 
  pinMode(LED1, OUTPUT); 
}

void loop() 
{
  for(pwm = 0; pwm<256; pwm++)
{
  analogWrite(LED1, pwm);
  delay(velocitat);
}

  for(pwm=255; pwm>-1; pwm--)
{
  analogWrite(LED1,pwm);
  delay(velocitat);
}

}
