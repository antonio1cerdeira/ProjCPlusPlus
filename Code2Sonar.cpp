// C++ code
/*

Descriçao:Exercicio com 2 sonares de 3 pinos
*/

#define PING1_PIN 6
#define PING2_PIN 5


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int dist1 = getDistance(PING1_PIN);
  
  //Serial.print("D1: ");
  //Serial.println(dist1);
  
  int dist2 = getDistance(PING2_PIN);
  
  //Serial.print("D2: ");
  //Serial.println(dist2);
  
  //Serial.print(", T:");
	String s = "D1: "+String(dist1) + ",D2: "+String(dist2);
  Serial.println(s);
  delay(50);
}

int getDistance(int pin){
    
    pinMode(pin, OUTPUT);
  
  digitalWrite(pin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(pin, HIGH);
  delayMicroseconds(15);
  digitalWrite(pin, LOW);
  
  pinMode(pin, INPUT);
  
  int time = pulseIn(pin, HIGH);
  int distance = time / 58.0;
  
  return distance;
    
  }