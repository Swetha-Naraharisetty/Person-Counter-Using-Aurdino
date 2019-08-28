#include <LiquidCrystal.h>
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 byte thumb1[8] =
{
  0b00100,
  0b00011,
  0b00100,
  0b00011,
  0b00100,
  0b00011,
  0b00010,
  0b00001
  };
 byte thumb2[8] =
{
  0b00000,0b00000,0b00000,0b00000,0b00000,0b00000,0b00000,0b00011};
 byte thumb3[8] =
{0b00000,0b00000,0b00000,0b00000,0b00000,0b00000,0b00001,0b11110};
 byte thumb4[8] =
{0b00000,0b01100,0b10010,0b10010,0b10001,0b01000,0b11110,0b00000};
 byte thumb5[8] =
{0b00010,0b00010,0b00010,0b00010,0b00010,0b01110,0b10000,0b00000};
 byte thumb6[8] =
{0b00000,0b00000,0b00000,0b00000,0b00000,0b10000,0b01000,0b00110};
 byte smile1[8] =
{0b00000,0b00000,0b01010,0b00000,0b10001,0b01110,0b00000,0b00000};
 byte smile2[8] =
{0b00000,0b00000,0b01010,0b01010,0b00000,0b00000,0b01110,0b10001};
 byte thumb7[8] =
{0b00001,0b00010,0b00011,0b00100,0b00011,0b00100,0b00011,0b00100};
 byte thumb8[8] =
{0b00011,0b00000,0b00000,0b00000,0b00000,0b00000,0b00000,0b00000};
 byte thumb9[8] =
{0b11110,0b00001,0b00000,0b00000,0b00000,0b00000,0b00000,B00000};
 byte thumb10[8] =
{0b00000,0b11110,0b01000,0b10001,0b10010,0b10010,0b01100,0b00000};
 byte thumb11[8] =
{0b00000,0b10000,0b01110,0b00010,0b00010,0b00010,0b00010,0b00010};
 byte thumb12[8] =
{0b00110,0b01000,0b10000,0b00000,0b00000,0b00000,0b00000,0b00000};
void setup() {
  // put your setup code here, to run once:
   lcd.begin(16, 2);

  // create a new character
  lcd.createChar(6, thumb1);
  lcd.createChar(1, thumb2);
  lcd.createChar(2, thumb3);
  lcd.createChar(3, thumb4);
  lcd.createChar(4, thumb5);
  lcd.createChar(5, thumb6);
  lcd.createChar(7, smile1);
  lcd.createChar(8, smile2);
  // create a new character
  lcd.createChar(9, thumb7);
  lcd.createChar(10, thumb8);
  lcd.createChar(11, thumb9);
  lcd.createChar(12, thumb10);
  lcd.createChar(13, thumb11);
  lcd.createChar(14, thumb12);

  //pinMode(irsensor,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int x = digitalRead(8);

if(x == 0){
 lcd.setCursor(4,1);
  lcd.write(6);
 lcd.setCursor(4,0);
 lcd.write(1);
 lcd.setCursor(5,1);
 lcd.write(2);
 lcd.setCursor(5,0);
 lcd.write(3);
 lcd.setCursor(6,1);
 lcd.write(4);
 lcd.setCursor(6,0);
 lcd.write(5);
 lcd.setCursor(3,1);
 lcd.write(7);
 } else{
  lcd.setCursor(4,1);
 lcd.write(9);
 lcd.setCursor(4,0);
 lcd.write(10);
 lcd.setCursor(5,1);
 lcd.write(11);
 lcd.setCursor(5,0);
 lcd.write(12);
 lcd.setCursor(6,1);
 lcd.write(13);
 lcd.setCursor(6,0);
 lcd.write(14);
 lcd.setCursor(3,1);
 lcd.write(8);
 }
}
