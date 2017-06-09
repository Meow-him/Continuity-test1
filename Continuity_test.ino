int val = 0;
int j = 5;

boolean indicator = false;


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
           indicator = !indicator;
           j--;
      }
      else
      {
        continue;
      }
      
  }
  
  
  if (indicator == false)
  {
       digitalWrite(7, HIGH); // Green light indicator: 
  }
  
}
