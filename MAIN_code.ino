#include <LiquidCrystal.h>
int IR1=3;
int IR2=4;
int COUNT=0;
int Read1=0;
int Read2=0;
int LED=5;
int IN=0;
int OUT=0;
LiquidCrystal lcd(8,9,10,11,12,13);


void setup()
{
 lcd.begin(16,2);
 Serial.begin(9600);
 pinMode(IR1,INPUT);
 pinMode(IR2,INPUT);
 pinMode(LED,OUTPUT);
 digitalWrite(LED,LOW);
 Display();
}

void Display()
{
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("No. of people");
 lcd.setCursor(0,1);
 lcd.print("Present : ");
 lcd.setCursor(10,1);
 lcd.print(COUNT,10);
}

void loop()
 {
  lcd.display();
  Read1=digitalRead(IR1);
  if(Read1==HIGH)
  {
   for (int C=0;C<500;C++)
   {
    if(digitalRead(IR2)==HIGH)
    { 
      Read2=HIGH;
      break;
    }
    delay(10);
   }
   if(Read2==HIGH)
   {
    IN=1;
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("VISITOR COUNTER");
    lcd.setCursor(3,1);
    lcd.print("INCREMENTED");
    delay(2000);
   }
  }
  else
  {
   if(Read1==LOW)
   {
    Read2=digitalRead(IR2);
    if(Read2==HIGH)
    {
     for (int C=0;C<500;C++)
     {
      if(digitalRead(IR1)==HIGH)
      { 
        Read1=HIGH;
        break;
      }
      delay(10);
     }
     if(Read1==HIGH)
     {
      OUT=1;
      lcd.clear();  
      lcd.setCursor(0,0);
      lcd.print("VISITOR COUNTER");
      lcd.setCursor(3,1);
      lcd.print("DECREMENTED");
      delay(2000);        
     }    
    }  
   }
  }
  
  
  if(IN==1 && OUT==0)
  {
   COUNT=COUNT+1;
   Display();
  }
  else if(IN==0 && OUT==1)
  {
   COUNT=COUNT-1;
   Display();
  }
  if(COUNT>0)
  {
   digitalWrite(LED,HIGH);
  }
  else
  { 
   digitalWrite(LED,LOW);
  }
  IN=0;
  OUT=0;
 }
