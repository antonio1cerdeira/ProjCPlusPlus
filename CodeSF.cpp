// C++ code
Descriçao:Utilização de um sensor de força
#define FSR_PIN A0
int fsrValue =0;
int fsrVoltage=0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
 fsrValue = analogRead(FSR_PIN); //le sinal analogico e guarda na variavel
 Serial.println(fsrValue); 
  // para saber a voltagem do sensor utlizaçao do map 
 fsrVoltage = map(fsrValue,0,1023,0,5000);
 
  Serial.print("FSN:");
  Serial.print(fsrValue);
  Serial.print(",");
  Serial.print(fsrValue);
  Serial.print("mV");
  //
  if(fsrValue<100)
   Serial.println("-no pressure");
  else if(fsrValue<200)
    Serial.println("-light touch");
    else if(fsrValue<500)
    Serial.println("-light squeeze");
    else if(fsrValue<800)
    Serial.println("-medium squeeze");
    else
    Serial.println("-big squeeze");
 	delay(50);
}