int encoderPin = 2;
volatile long counter = 0;

void setup() {
  pinMode(encoderPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(encoderPin), count, RISING);
  Serial.begin(9600);
}

void loop() {
  Serial.println(counter);
  delay(1000);
}

void count() {
  counter++;
}
