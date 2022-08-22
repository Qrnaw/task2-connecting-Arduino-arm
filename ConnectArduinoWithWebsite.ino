
void setup() {
 Serial.begin(9600);
 pinMode(13,OUTPUT);

}

void loop() {
  // We can see the result in website consloe
  
  String data=Serial.readString();
  if (data.indexOf("Abdullah")> -1)
  {
    digitalWrite(13,HIGH);
    delay(1000);
     digitalWrite(13,LOW);
     delay(1000);
     Serial.println("1");
  }else if (data.indexOf("Alqarni")> -1){
     digitalWrite(13,HIGH);
     Serial.println("2");
  }else{
    digitalWrite(13,LOW);
     Serial.println("0")
  }

}
