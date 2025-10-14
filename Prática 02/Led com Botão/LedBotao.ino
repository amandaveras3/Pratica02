int led = 6;
int botao = 5;
bool estadoLed = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(botao) == LOW) {
    estadoLed = !estadoLed;
    digitalWrite(led, estadoLed);
    while (digitalRead(botao) == LOW);
    delay(100);
  }
}