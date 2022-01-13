
float x, y, z;

void setup() {
  Serial.begin(9600);
}

void loop() {
  x = ((analogRead(A1)*2.0)/1024.0)-1;  
  y = ((analogRead(A2)*2.0)/1024.0)-1;
  z = ((analogRead(A3)*2.0)/1024.0)-1; 
  
  Serial.print("gX = ");
  Serial.println(x);
  
  Serial.print("gY = ");
  Serial.println(y);
  
  
  Serial.print("gZ = ");
  Serial.println(z);
  Serial.println("");
  delay(1000);
  

}
