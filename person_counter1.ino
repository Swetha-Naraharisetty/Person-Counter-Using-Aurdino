int a = 2, b = 3, c = 4, d = 5, e = 6, f= 7, g = 8;
int ir1 = 9, ir2 = 10;
int x, y;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(a, OUTPUT);
 pinMode(b, OUTPUT);
 pinMode(c, OUTPUT);
 pinMode(d, OUTPUT);
 pinMode(e, OUTPUT);
 pinMode(f, OUTPUT);
 pinMode(g, OUTPUT);
 pinMode(ir1, INPUT);
 pinMode(ir2, INPUT);

 digitalWrite(a, LOW);
 digitalWrite(b, LOW);
 digitalWrite(c, LOW);
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, HIGH);
 

}

void loop() {
  // put your main code here, to run repeatedly:
  int count  = 0;
  while(count <= 9){
    x = digitalRead(ir1);
    Serial.print("x = ");
    Serial.println(x);
    y = digitalRead(ir2);
    Serial.print("y = ");
    Serial.println(y);
    if(x == 0 and y == 1){
      
      count += 1;
      switch (count){        
      
        case 1: while(x == 0){
                digitalWrite(a, HIGH);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, HIGH);
                digitalWrite(e,HIGH);
                digitalWrite(f, HIGH);
                digitalWrite(g, HIGH);
                x = digitalRead(ir1);
                }
                //count += 1;
                break;
              
        case 2: while(x == 0){
                digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, HIGH);
                digitalWrite(d, LOW);
                digitalWrite(e,LOW);
                digitalWrite(f, HIGH);
                digitalWrite(g, LOW);
                delay(1000);
                x = digitalRead(ir1);
                }
                //count += 1;
                break;
              
        case 3: while(x == 0){
                digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, LOW);
                digitalWrite(e, HIGH);
                digitalWrite(f, HIGH);
                digitalWrite(g, LOW);
                //delay(1000);
                x = digitalRead(ir1);
                }
                //count += 1;
                break;
              
        case 4: while(x == 0){
                digitalWrite(a, HIGH);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, HIGH);
                digitalWrite(e, HIGH);
                digitalWrite(f, LOW);
                digitalWrite(g, LOW);
                //delay(1000);
                x = digitalRead(ir1);
                }
                //count += 1;
                break;
              
        case 5: while(x == 0){
                digitalWrite(a, LOW);
                digitalWrite(b, HIGH);
                digitalWrite(c, LOW);
                digitalWrite(d, LOW);
                digitalWrite(e, HIGH);
                digitalWrite(f, LOW);
                digitalWrite(g, LOW);
                //delay(1000);
                x = digitalRead(ir1);
                }
                //count += 1;
                break;
              
        case 6: while(x == 0){
                digitalWrite(a, LOW);
                digitalWrite(b, HIGH);
                digitalWrite(c, LOW);
                digitalWrite(d, LOW);
                digitalWrite(e, LOW);
                digitalWrite(f, LOW);
                digitalWrite(g, LOW);
                //delay(1000);
                x = digitalRead(ir1);
                }
                //count += 1;
                break;
              
        case 7: while(x == 0){
                digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, HIGH);
                digitalWrite(e, HIGH);
                digitalWrite(f, HIGH);
                digitalWrite(g, HIGH);
                
                x = digitalRead(ir1);
                }
                //count += 1;
                delay(500);
                break;
              
        case 8: while(x == 0){
                digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, LOW);
                digitalWrite(e, LOW);
                digitalWrite(f, LOW);
                digitalWrite(g, LOW);
                //delay(1000);
                x = digitalRead(ir1);
                }
                //count += 1;
                break;
              
        case 9:while(x == 0){ 
               digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, HIGH);
                digitalWrite(e, HIGH);
                digitalWrite(f, LOW);
                digitalWrite(g, LOW);
                //delay(1000);
                x = digitalRead(ir1);
                }
                //count += 1;
                break;

        default:while(x == 0){ 
                digitalWrite(a,LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, LOW);
                digitalWrite(e, LOW);
                digitalWrite(f, LOW);
                digitalWrite(g, HIGH);
                //delay(1000);
                x = digitalRead(ir1);
                }
                break;
        
              
      }
    
    } else if( y == 0 and x == 1){
          count -= 1;
      switch (count){        
      
        case 1: while(y == 0){
                digitalWrite(a, HIGH);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, HIGH);
                digitalWrite(e,HIGH);
                digitalWrite(f, HIGH);
                digitalWrite(g, HIGH);
                y = digitalRead(ir2);
                }
                //count += 1;
                break;
              
        case 2: while(y == 0){
                digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, HIGH);
                digitalWrite(d, LOW);
                digitalWrite(e,LOW);
                digitalWrite(f, HIGH);
                digitalWrite(g, LOW);
                delay(1000);
                y = digitalRead(ir2);
                }
                //count += 1;
                break;
              
        case 3: while(y == 0){
                digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, LOW);
                digitalWrite(e, HIGH);
                digitalWrite(f, HIGH);
                digitalWrite(g, LOW);
                //delay(1000);
                x = digitalRead(ir2);
                }
                //count += 1;
                break;
              
        case 4: while(y == 0){
                digitalWrite(a, HIGH);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, HIGH);
                digitalWrite(e, HIGH);
                digitalWrite(f, LOW);
                digitalWrite(g, LOW);
                //delay(1000);
                y = digitalRead(ir2);
                }
                //count += 1;
                break;
              
        case 5: while(y == 0){
                digitalWrite(a, LOW);
                digitalWrite(b, HIGH);
                digitalWrite(c, LOW);
                digitalWrite(d, LOW);
                digitalWrite(e, HIGH);
                digitalWrite(f, LOW);
                digitalWrite(g, LOW);
                //delay(1000);
                y = digitalRead(ir2);
                }
                //count += 1;
                break;
              
        case 6: while(y == 0){
                digitalWrite(a, LOW);
                digitalWrite(b, HIGH);
                digitalWrite(c, LOW);
                digitalWrite(d, LOW);
                digitalWrite(e, LOW);
                digitalWrite(f, LOW);
                digitalWrite(g, LOW);
                //delay(1000);
                y = digitalRead(ir2);
                }
                //count += 1;
                break;
              
        case 7: while(y == 0){
                digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, HIGH);
                digitalWrite(e, HIGH);
                digitalWrite(f, HIGH);
                digitalWrite(g, HIGH);
                //delay(1000);
                y = digitalRead(ir2);
                }
                //count += 1;
                break;
              
        case 8: while(y == 0){
                digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, LOW);
                digitalWrite(e, LOW);
                digitalWrite(f, LOW);
                digitalWrite(g, LOW);
                //delay(1000);
                y = digitalRead(ir2);
                }
                //count += 1;
                break;
              
        case 9:while(y == 0){ 
               digitalWrite(a, LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, HIGH);
                digitalWrite(e, HIGH);
                digitalWrite(f, LOW);
                digitalWrite(g, LOW);
                //delay(1000);
                y = digitalRead(ir2);
                }
                //count += 1;
                break;

        default:while(y == 0){ 
                digitalWrite(a,LOW);
                digitalWrite(b, LOW);
                digitalWrite(c, LOW);
                digitalWrite(d, LOW);
                digitalWrite(e, LOW);
                digitalWrite(f, LOW);
                digitalWrite(g, HIGH);
                //delay(1000);
                y = digitalRead(ir2);
                }
                break;
        
              
      }
    
      
      }
    
  }
}
