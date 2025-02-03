// Ponte-H - Defenir Pinos
#define D1_PIN 8 //D de direction
#define D2_PIN 9
#define SPEED_PIN 10

// Interface - Defenir Pinos
#define POT_PIN A0
#define BUTTON_DIR_PIN 6
#define BUTTON_STOP_PIN 5

bool  dir = false;

void setup()
{
  pinMode(D1_PIN, OUTPUT);
  pinMode(D2_PIN, OUTPUT);
  pinMode(SPEED_PIN, OUTPUT);
  
  pinMode(BUTTON_DIR_PIN, INPUT_PULLUP);
  pinMode(BUTTON_STOP_PIN, INPUT_PULLUP);
  
  // controlo de velocidade do motor
  digitalWrite(D1_PIN, LOW);
  digitalWrite(D2_PIN, HIGH);
  /*
  digitalWrite(SPEED_PIN, HIGH);
  analogWrite(SPEED_PIN,128);
  */
}

void loop()
{
	
  analogWrite(SPEED_PIN,map(analogRead(POT_PIN),0,1023,0,255));
  
  	if(digitalRead(BUTTON_DIR_PIN)==LOW){
      dir= !dir;
      while(digitalRead(BUTTON_DIR_PIN)==LOW);      
    }
    	if(digitalRead(BUTTON_STOP_PIN)==LOW){
      dir= !dir;
      while(digitalRead(BUTTON_STOP_PIN)==LOW);
  if (dir == false){
  	  digitalWrite(D1_PIN,HIGH);
  digitalWrite(D2_PIN, LOW); 
    }
  else{
     digitalWrite(D1_PIN, LOW);
     digitalWrite(D2_PIN, HIGH);
  }  else{
     digitalWrite(D1_PIN, HIGH);
     digitalWrite(D2_PIN, HIGH);
  }