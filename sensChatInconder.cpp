/*
descrição:ex de aplicaçao de um sensor chat inconder
*/
#define CHANEL_A_PIN 2
#define CHANEL_B_PIN 3

const int COUNTS_PER_REVOLUTION = 1669;
const int TIME_INTERVAL =1000;

volatile int encoderCounts =0;//numero de pulsos foram gerados 1s

int rpm = 0;

unsigned long previousMillis =0;
unsigned long currentMillis =0;
  //funçao millis da o tempo de excuçao do programa e micro segundos 
  
//volatile int encoderCounts = 0 ;

void setup()
{
	Serial.begin(9600);
	pinMode(CHANEL_A_PIN, INPUT_PULLUP);
	pinMode(CHANEL_B_PIN, INPUT_PULLUP);
  
	attachInterrupt(digitalPinToInterrupt (CHANEL_A_PIN),updateEncoder,RISING);
    
  	previousMillis = millis();
}

void loop()
{
  //...
  currentMillis = millis();
  if(currentMillis - previousMillis > TIME_INTERVAL){
    
  	rpm = (encoderCounts*60.0)/COUNTS_PER_REVOLUTION;
  	previousMillis = currentMillis ;
    
 String s ="Encoder counts: "+String(encoderCounts)+"RPM: "+String(rpm);
    Serial.println(s);
    encoderCounts=0;
  }
  
 
  
  }

void updateEncoder(){
	encoderCounts ++;

}