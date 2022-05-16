#include <Servo.h>
int IRSensor = 2;
int LED = 13; 
Servo myservo;

void setup() 
{

  myservo.attach(9);

  pinMode (IRSensor, INPUT); 
  pinMode (LED, OUTPUT); 
}

void loop()
{
  int statusSensor = digitalRead (IRSensor);
  
  if (statusSensor == 1)
    {
    digitalWrite(LED, HIGH); 
    myservo.write(180);  
        delay(1000);  
  }
  
  else
  {
    digitalWrite(LED, LOW);
       //delay(2000);
       
         myservo.write(90);
        delay(2000);
  }
  
}
