int led1 = 11;
int led2 = 12;
int led3 = 13;
int valor1, valor2;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(9600);

  Serial.println("Digite o valor 1: ");
  while (Serial.available() == 0);
  valor1 = Serial.parseInt();

  Serial.println("Digite o valor 2: ");
  while (Serial.available() == 0);
  valor2 = Serial.parseInt();

  for (int i = 0; i <= valor2; i++) {
    Serial.print("Valor: ");
    Serial.println(i);
    delay(1000);
  }
}

void loop() {}