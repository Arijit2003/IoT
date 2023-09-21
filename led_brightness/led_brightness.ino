int led=3;
int potOUT=A0;
int brightness = 100;
int value=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(potOUT,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  value= analogRead(potOUT);
  brightness=map(value,0,1023,0,255);
  analogWrite(led,brightness);
  Serial.print("Potentiometer Value: ");
  Serial.println(value);
  Serial.print("Brightness Value: ");
  Serial.println(brightness);
  delay(100);

    

}
