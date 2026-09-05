int vel=100;
void setup() {
  for(int i =2;i<6;i++)
      pinMode(i,OUTPUT);

   

}

void loop() {
  
  
  

  for(int i =2;i<5;i++)
    {
      
      digitalWrite(i,HIGH);
      delay(vel);



      digitalWrite(i,LOW);
      delay(vel);
    }
  



  for(int i =5;i>2;i--)
    {
      
      digitalWrite(i,HIGH);
      delay(vel);
      digitalWrite(i,LOW);
      delay(vel);
    }
  
  
  
  

}
