#define POTENTI_PIN A2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  //print the value of the potoenometer 
  //range 0-1023
  Serial.println(analogRead(POTENTI_PIN));
  delay(1000); //wait for 1 second

}
