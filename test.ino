int val = 0;

void setup(){
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  val = analogRead(A5);
  Serial.println(val);
  delay(2000);
     if (val < 20)
    {
    digitalWrite(13,HIGH);
    }
    else
    {
    digitalWrite(13,LOW);
    }
}
  
  
