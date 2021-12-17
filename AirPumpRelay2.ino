
int Relay1State = LOW;
int Relay2State = LOW;
int Relay3State = LOW;
long StartTime = 0; 


const long interval = 3000;  

const int RelayPin1 =  3;
const int RelayPin2 =  4;
const int RelayPin3 =  5;

void setup() {
  // put your setup code here, to run once:
pinMode(RelayPin1, OUTPUT);
pinMode(RelayPin2, OUTPUT);
pinMode(RelayPin3, OUTPUT);

}

void loop() {

unsigned long CheckTime = millis();

unsigned long elapsedTime = CheckTime - StartTime;

if(elapsedTime > interval) {

  StartTime = CheckTime;   

  }

if (elapsedTime < 2500){

  Relay1State = HIGH;  
  Relay2State = HIGH; 
  Relay3State = HIGH;               

  }
if (elapsedTime > 2500){

  Relay1State = LOW;
  Relay2State = LOW;
  Relay3State = LOW;
                  

  }

  
digitalWrite(RelayPin1, Relay1State);
digitalWrite(RelayPin2, Relay2State);
digitalWrite(RelayPin3, Relay3State);

}
