  
  
  
  uint8_t REDPin = 3;
  int PWMFreq = 5000;
  int REDChannel = 0;
  int PWMResolution = 10;
  int MAX_DUTY_CYCLE = 1023;
  int valuePin = 7;

void setup() 
{
  ledcSetup(REDChannel, PWMFreq, PWMResolution);
  ledcAttachPin(REDPin, REDChannel);
  //pinMode(valuePin,INPUT);
  Serial.begin(115200);
}


void loop() 
{
  
  float turnValue = analogRead(valuePin);
  
  int dutyCycle = (turnValue/8);

  ledcWrite(REDChannel, dutyCycle);

}
