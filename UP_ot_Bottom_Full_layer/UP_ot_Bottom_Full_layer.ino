
int i;
int d1 = 1;
int d2 = 10;

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

digitalWrite(2, HIGH);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
full_layer();

digitalWrite(2, LOW);
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
full_layer();

digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, HIGH);
digitalWrite(5, LOW);
full_layer();

digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, HIGH);
full_layer();

}

int full_layer()
{
for(i=0;i<=30;i++){
digitalWrite(13, LOW); 
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
delay(d1);
digitalWrite(13, HIGH); 
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
delay(d1);;
digitalWrite(13, LOW); 
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
delay(d1);
digitalWrite(13, HIGH); 
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
delay(d1);
digitalWrite(13, LOW); 
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
delay(d1);
digitalWrite(13, HIGH); 
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
delay(d1);
digitalWrite(13, LOW); 
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
delay(d1);
digitalWrite(13, HIGH); 
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
delay(d1);
digitalWrite(13, LOW); 
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
delay(d1);
digitalWrite(13, HIGH); 
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
delay(d1);
digitalWrite(13, LOW); 
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
delay(d1);
digitalWrite(13, HIGH); 
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
delay(d1);
digitalWrite(13, LOW); 
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
delay(d1);
digitalWrite(13, HIGH); 
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
delay(d1);
digitalWrite(13, LOW); 
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
delay(d1);
digitalWrite(13, HIGH); 
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
delay(d1);
}

}
