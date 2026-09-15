  int ind=0;
  int pro=1;
  int cont=0;
  int panterior=0;
  int banterior=0;
  int pinos[]={3,5,6,9,10,11};

  void luz();
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
  //--------------------------------------------------
    while(bri>=0)
    {
    
    analogWrite(pinos[ind],bri);
    analogWrite(pinos[ind-1],banterior);
    panterior=ind;
    banterior=bri;
      bri=bri+sum;
      if(bri>=250)
        sum=-sum;
      cont++;
        if(cont>5)
        {
          delay(1);
        cont=0;
        }

      
    }
    
    //--------------------------------------------------
    ind=ind+pro;// incrementando o indice
    if(ind<=0||ind>=5)//precisa encontrar o ultimo número , se nao vai lixo (achokj)
      pro=-pro;
    

  }
  void luz()
  {
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
  }