


int ind=0;
int pro=1;
int pinos[]={3,5,6,9,10,11};
void setup() {
 
 for(int i =0;i<7;i++)
 {
  pinMode(pinos[i],OUTPUT);
  
  }

}

void loop() {
  int sum=2;
  int bri=0;

  if(bri<0)
    bri=0;

  while(bri>=0)
  {
   
  analogWrite(pinos[ind],bri);
    bri=bri+sum;
    if(bri>=250)
      sum=-sum;
      delay(3);

     
  }
  
  ind=ind+pro;
   if(ind<=0||ind>=5)//precisa encontrar o ultimo número , se nao vai lixo (achokj)
    pro=-pro;
  

}
