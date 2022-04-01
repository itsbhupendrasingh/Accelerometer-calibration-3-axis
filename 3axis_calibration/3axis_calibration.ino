/*
 * Updated on 01/04/2022 
 * By Bhupendra Singh
 * Video tutorials avaialbe at out youtube channel https://www.youtube.com/c/SMEDehradun
 */
const int x=A0, y=A1, z=A2; // Arduino Uno Pins
int xv=0, yv=0, zv=0;

void setup() {

  Serial.begin(9600);
  Serial.println("Serial.begin");
  delay(2000);
}

void loop() {
    adxl();
    delay(1000);
}
void adxl()
{
  xv = analogRead(x);
  yv = analogRead(y);
  zv = analogRead(z);
  Serial.print("x= " );
  Serial.print(xv);
  Serial.print(" y= " );
  Serial.print(yv);
  Serial.print(" z= " );
  Serial.println(zv);
/*****************open it once you done claibration******************
  if((xv<280) || (xv>380) || (yv<280) || (yv>380))
  {
    Serial.println("Accident happen");
  }
  else
  {
    Serial.println("Normal");
  }
*/
}
