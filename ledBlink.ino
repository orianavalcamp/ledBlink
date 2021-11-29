int ledPin = 13;
int ledPin2 = 14;

void setup() {
  pinMode (ledPin, OUTPUT);
  pinMode (ledPin2, OUTPUT);
}

void loop() {
  digitalWrite (ledPin, HIGH);
  digitalWrite (ledPin2, HIGH);
  delay (500);
  digitalWrite (ledPin, LOW);
  digitalWrite (ledPin2, LOW);
  delay(500);
}
