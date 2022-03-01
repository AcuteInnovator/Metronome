
char data = 0;

void setup()
{
    Serial1.begin(9600);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
}
void loop()
{
   if(Serial1.available() > 0)
   {
     
      data = Serial1.read();
      while(true){
      while (data == '1')
      {
        
            Serial.println("30");
            digitalWrite(2, HIGH);
            delay(250);
            digitalWrite(2, LOW);
            delay(1750);
            if ( Serial1.available()> 0)
              {
                data = Serial1.read();
                break; 
              }
            digitalWrite(3, HIGH);
            delay(250);
            
            digitalWrite(3, LOW);
            delay(1750); 
            if ( Serial1.available()> 0)
              {
                data = Serial1.read();
                break; 
              }          
            digitalWrite(4, HIGH);
            delay(250);
            
            digitalWrite(4, LOW);
            delay(1750);
            if ( Serial1.available()> 0)
              {
                data = Serial1.read();
                break; 
              }
            digitalWrite(5, HIGH);
            delay(250);
            
            digitalWrite(5, LOW);
            delay(1750);
              if ( Serial1.available()> 0)
              {
                data = Serial1.read();
                break; 
              }
      }
      
      while (data == '3')
      {
       
            Serial.println("60");
            digitalWrite(2, HIGH);
            delay(250);
            
            digitalWrite(2, LOW);
            delay(750);
            if ( Serial1.available()> 0)
              {
                data = Serial1.read();
                break; 
              }
            digitalWrite(3, HIGH);
            delay(250);
            
            digitalWrite(3, LOW);
            delay(750);
            if ( Serial1.available()> 0)
              {
                data = Serial1.read();
                break; 
              }            
            digitalWrite(4, HIGH);
            delay(250);
            
            digitalWrite(4, LOW);
            delay(750);
            if ( Serial1.available()> 0)
              {
                data = Serial1.read();
                break; 
              }
            digitalWrite(5, HIGH);
            delay(250);
            
            digitalWrite(5, LOW);
            delay(750); 
            
              
              if (Serial1.available()> 0)
              {
                data = Serial1.read();
                break; 
              }
      }
      while (data == '2')
      {
       
            Serial.println("90");
            digitalWrite(2, HIGH);
            delay(250);
            
            digitalWrite(2, LOW);
            delay(417);
            if ( Serial1.available()> 0)
              {
                data = Serial1.read();
                break; 
              }
            digitalWrite(3, HIGH);
            delay(250);
            
            digitalWrite(3, LOW);
            delay(417);
            if ( Serial1.available()> 0)
              {
                data = Serial1.read();
                break; 
              }          
            digitalWrite(4, HIGH);
            delay(250);
            
            digitalWrite(4, LOW);
            delay(417);
            if ( Serial1.available()> 0)
              {
                data = Serial1.read();
                break; 
              }
            digitalWrite(5, HIGH);
            delay(250);
            
            digitalWrite(5, LOW);
            delay(417); 
            
              
              if (Serial1.available()> 0)
              {
                data = Serial1.read();
                break; 
              }
      }
      while (data == '4')
      {
       
            Serial.println("120");
            digitalWrite(2, HIGH);
            delay(250);
           
            digitalWrite(2, LOW);
            delay(250);
            if ( Serial1.available()> 0)
              {
                data = Serial1.read();
                break; 
              }
            digitalWrite(3, HIGH);
            delay(250);
            
            digitalWrite(3, LOW);
            delay(250);  
            if ( Serial1.available()> 0)
              {
                data = Serial1.read();
                break; 
              }          
            digitalWrite(4, HIGH);
            delay(250);
              
            digitalWrite(4, LOW);
            delay(250);
            if ( Serial1.available()> 0)
              {
                data = Serial1.read();
                break; 
              }  
            digitalWrite(5, HIGH);
            delay(250);
              
            digitalWrite(5, LOW);
            delay(250); 
            
              
              if (Serial1.available()> 0)
              {
                data = Serial1.read();
                continue; 
              }
      }
      while (data == '5')
      {
       
            Serial.println("stop");
            digitalWrite(2, LOW);
            delay(250);
            if ( Serial1.available()> 0)
              {
                data = Serial1.read();
                break; 
              }
            digitalWrite(3, LOW);
            delay(250);  
            if ( Serial1.available()> 0)
              {
                data = Serial1.read();
                break; 
              }          
            
            digitalWrite(4, LOW);
            delay(250);
            if ( Serial1.available()> 0)
              {
                data = Serial1.read();
                break; 
              }  
            
            digitalWrite(5, LOW);
            delay(250); 
            
              
              if (Serial1.available()> 0)
              {
                data = Serial1.read();
                continue; 
              }
      }
     }
   }
}
