
int i,j = 0,k;
int d1 = 600;
int d2 = 1;
int dfc = 50;
void setup() {                
  // initialize the digital pin as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);  
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  


  for(i=1;i<dfc;i++)
  {
  led(5,1);
  delay(d2);
  led(5,6);
  delay(d2);
  led(5,11);
  delay(d2);
  led(5,16);
  delay(d2);
  }
  
  for(i=1;i<dfc;i++)
  {
  led(5,2);
  delay(d2);
  led(5,6);
  delay(d2);
  led(5,10);
  delay(d2);
  led(5,14);
  delay(d2);
  }
  



  for(i=1;i<dfc;i++)
  {
  led(5,9);
  delay(d2);
  led(5,6);
  delay(d2);
  led(5,3);
  delay(d2);
  }
  
  
  
  for(i=1;i<dfc;i++)
  {
  led(5,5);
  delay(d2);
  led(5,6);
  delay(d2);
  led(5,7);
  delay(d2);
  led(5,8);
  delay(d2);
  }


}

int led(int layer,int num)
{
  
// SWITCHING LED
switch(num)
{
case 1:
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);  
break;

case 2:
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);  
break;

case 3:
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, LOW);  
break;

case 4:
digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, LOW);  
break;

case 5:
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);  
break;

case 6:
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);  
break;

case 7:
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);  
break;

case 8:
digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);  
break;

case 9:
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);  
break;

case 10:
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);  
break;

case 11:
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);  
break;

case 12:
digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);  
break;

case 13:
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);  
break;

case 14:
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);  
break;

case 15:
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);  
break;

case 16:
digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);  
break;
}

switch(layer)
{
case 0:
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);  
break;

case 1:
digitalWrite(2, HIGH);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);  
break;

case 2:
digitalWrite(2, LOW);
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
digitalWrite(5, LOW);  
break;

case 3:
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, HIGH);
digitalWrite(5, LOW);  
break;

case 4:
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, HIGH);  
break;

case 5:
digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);
}

}
