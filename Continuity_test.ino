int val = 0;
int indi = 0;
int j = 5;


void setup(){
  for(int l = 0; l < 6; l++)
  {
      pinMode(1, OUTPUT);
  }
  
  pinMode(7, OUTPUT);
}


void loop(){
  
  for(int i = 0; i < 6; i++)
  {
      val = analogRead(i); 
      if( val > 6 )
      {
           digitalWrite(j,HIGH); // Red light indicator
           indi = 1;
           j--;
      }
      else
      {
        continue;
      }
      
  }
  
  
  if (indi == 0)
  {
       digitalWrite(7, HIGH); // Green light indicator: 
  }
  
}
