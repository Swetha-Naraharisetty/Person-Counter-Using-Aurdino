#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
char c;
int a;
int b;
int d;
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  Serial.begin(9600);
  
}
void loop(){
 
  //lcd.setCursor(1, 1);
 while(Serial.available() == 0);{
     a = Serial.parseInt();
      Serial.print(" value of a = ");
      Serial.println(a);
     
  }
   while(Serial.available() == 0);{
    b = Serial.parseInt();
    Serial.print(" value of b = ");
    Serial.println(b);
    
}
   Serial.println("enter the operator");
    while(Serial.available() == 0);{
      c = Serial.read();
      Serial.print("operator = ");
      Serial.println(c);
      
      switch(c) {
          case '+' :  d = int( a + b);
                      Serial.print("Result = ");
                      Serial.println(d);
                      lcd.print(a);
                       lcd.print(c);
                      lcd.print(b);
                      lcd.print("=");
                      lcd.print(d);
                      break;
          case '-' :  d = int( a - b);
                      Serial.print("Result = ");
                      Serial.println(d);
                       lcd.print(a);
                      lcd.print(c);
                      lcd.print(b);
                      lcd.print("=");
                      lcd.print(d);
                      break;
          case '*' :  d = int( a * b);
                      Serial.print("Result = ");
                      Serial.println(d);
                       lcd.print(a);
                     lcd.print(c);
                      lcd.print(b);
                      lcd.print("=");
                      lcd.print(d);
                      break;
          case '/' :  d = float( a / b);
                      Serial.print("Result = ");
                      Serial.println(d);
                       lcd.print(a);
                      lcd.print(c);
                      lcd.print(b);
                      lcd.print("=");
                      lcd.print(d);
                      break;
          case '%' :  d = int( a % b);
                      Serial.print("Result = ");
                      Serial.println(d);
                       lcd.print(a);
                     lcd.print(c);
                      lcd.print(b);
                      lcd.print("=");
                      lcd.print(d);
                      break;
           default :  Serial.println("INVALID OPERATOR");
                      lcd.print(c);
                      lcd.print(" is an INVALID OPERATOR");
                      break;
        }

  }
   }
