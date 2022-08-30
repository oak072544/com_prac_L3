int Pin0 = 10; 
int Pin1 = 11; 
int Pin2 = 12; 
int Pin3 = 13;
 
int _step = 0; 



void setup() 
{ 
    pinMode(Pin0, OUTPUT); 
    pinMode(Pin1, OUTPUT); 
    pinMode(Pin2, OUTPUT); 
    pinMode(Pin3, OUTPUT); 
} 

 void loop() 
{ 
    for (int i = 0; i < 500 ; i++)
    {
      /* code */

      switch(_step=i%4)
      { 
          case 0: 
          digitalWrite(Pin0, HIGH); 
          digitalWrite(Pin1, LOW); 
          digitalWrite(Pin2, LOW); 
          digitalWrite(Pin3, LOW); 
          break; 

          case 1: 
          digitalWrite(Pin0, LOW); 
          digitalWrite(Pin1, HIGH); 
          digitalWrite(Pin2, LOW); 
          digitalWrite(Pin3, LOW); 
          break; 

          case 2: 
          digitalWrite(Pin0, LOW); 
          digitalWrite(Pin1, LOW); 
          digitalWrite(Pin2, HIGH); 
          digitalWrite(Pin3, LOW); 
          break; 
          
          case 3: 
          digitalWrite(Pin0, LOW); 
          digitalWrite(Pin1, LOW); 
          digitalWrite(Pin2, LOW); 
          digitalWrite(Pin3, HIGH); 
          break; 
          
          default: 
          digitalWrite(Pin0, LOW); 
          digitalWrite(Pin1, LOW); 
          digitalWrite(Pin2, LOW); 
          digitalWrite(Pin3, LOW); 
          break; 
      } 

      

      /*
      if(_step>3)
      { 
          _step=0; 
      } 
      if(_step<0)
      { 
          _step=3; 
      }
      */

      delay(2); 

  }

  delay(2000);
}