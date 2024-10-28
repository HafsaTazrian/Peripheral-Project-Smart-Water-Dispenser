int ir1 = 7;
int ir2 = 8;
int ir3 = 9;
int ir4 = 10;
int ir5 = 11;
int ir6 = 12;

int watersens = A0;
int sensvalue = 0;

int pump1 = 4;
int pump2 = 5;

int ir1state = 0;
int ir2state = 0;
int ir3state = 0;
int ir4state = 0;
int ir5state = 0;
int ir6state = 0;

void setup() {

Serial.begin(9600);
 
digitalWrite(pump2, HIGH);
digitalWrite(pump1, HIGH);
  Serial.println("Working!");

  
  pinMode(ir1 , INPUT_PULLUP);
  pinMode(ir2 , INPUT_PULLUP);
  pinMode(ir3 , INPUT_PULLUP);
  pinMode(ir4 , INPUT_PULLUP);
  pinMode(ir5 , INPUT_PULLUP);
  pinMode(ir6 , INPUT_PULLUP);

  pinMode(pump1 , OUTPUT);
  pinMode(pump2 , OUTPUT);
  
}

void loop() {
 

sensvalue = analogRead(watersens);

Serial.println(sensvalue);
delay(500);


 if (sensvalue >= 600){

    digitalWrite(pump2, HIGH);
  } 
  
 if (sensvalue <= 550){

    digitalWrite(pump2, LOW);
  } 
   
 

if (ir1state == LOW && ir2state == LOW && ir3state == HIGH && ir4state == HIGH && ir5state == HIGH && ir6state == HIGH  ) {

  
    digitalWrite(pump1, LOW);
    delay(4000);
    digitalWrite(pump1, HIGH);
    delay(5000);
    
  } else {
  
    digitalWrite(pump1, HIGH);
   
  }


if (ir1state == LOW && ir2state == LOW && ir3state == LOW && ir4state == HIGH && ir5state == HIGH && ir6state == HIGH  ) {

    digitalWrite(pump1, LOW);
    delay(6000);
    digitalWrite(pump1, HIGH);
    delay(5000);
  } else {
  
    digitalWrite(pump1, HIGH);
  
  }


if (ir1state == LOW && ir2state == LOW && ir3state == LOW && ir4state == LOW && ir5state == HIGH && ir6state == HIGH  ) {

    digitalWrite(pump1, LOW);
    delay(8000);
    digitalWrite(pump1, HIGH);
    delay(5000);
  } else {
  
    digitalWrite(pump1, HIGH);
    
  }


if (ir1state == LOW && ir2state == LOW && ir3state == LOW && ir4state == LOW && ir5state == LOW && ir6state == HIGH  ) {

    digitalWrite(pump1, LOW);
    delay(10000);
    digitalWrite(pump1, HIGH);
    delay(5000);
  } else {
  
    digitalWrite(pump1, HIGH);
  }


 
  }
