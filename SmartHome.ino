//github.com/mcagriaksoy
int sensorValue;
int sensorValue2;
int sensorValue3;

void setup(){
  pinMode(5, OUTPUT);
  Serial.begin(9600);                           
 }
void loop(){
  sensorValue = analogRead(2);       
  Serial.print("AirQua=");
  Serial.print(sensorValue, DEC);               
  Serial.println(" PPM");
  if(sensorValue > 400 ){
    digitalWrite(5, HIGH);
  }
  else{
    digitalWrite(5, LOW);
    }
    
  sensorValue2 = analogRead(1);       
  Serial.print("Combustible Gas=");
  Serial.print(sensorValue2, DEC);               
  Serial.println(" PPM");
  sensorValue3 = analogRead(0);       
  Serial.print("LPG,Propanol");
  Serial.print(sensorValue3, DEC);               
  Serial.println(" PPM");
  delay(500);                                   
}
