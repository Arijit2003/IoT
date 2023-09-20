int potOUT=A0;
int ledPins[]={1,2,3,4,5,6};
int ledDelay = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(potOUT,INPUT);
  for(int i=0;i<6;i++){
    pinMode(ledPins[i],OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  int value=analogRead(potOUT);
  ledDelay = map(value, 0, 1023, 100, 1000);
  for(int i=0;i<6;i++){
    digitalWrite(ledPins[i],HIGH);
    delay(ledDelay);
    digitalWrite(ledPins[i],LOW);
  }
}
