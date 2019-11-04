void setup()
{
  pinMode(4,INPUT);//Pin number is used to read the switch.
  pinMode(7,OUTPUT);//Pin number 7 is used to give instruction to buzzer.
}

void loop()
{
  int a=digitalRead(4);//Declearing variable a which is used for reading digital pin 4
  
  if(a==HIGH)
  {
    digitalWrite(7, HIGH);//Apply voltage to pin 7
    delay(1000);//Delay of 1000 milliseconds after releasing the button.
  }
  else
  {
    digitalWrite(7, LOW);//Stop voltage Supply to pin number 7
  }
}
