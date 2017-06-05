
int val = 0;
int indi = 0;

void setup(){
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop(){
  
  for(int i = 0; i < 6; i++)
  {
      val = analogRead(i); 
      if( val > 10 )
      {
           digitalWrite(10,HIGH); // Red light indicator
           indi = 1;
      }
      else
      {
        continue;
      }
      
  }
  
  
  if (indi = 0)
  {
       digitalWrite(8, HIGH); // Green light indicator: 
  }
  
}
