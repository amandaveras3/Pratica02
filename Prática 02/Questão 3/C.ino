int ultimo = 0;
for (int i = 0; i < 10; i++) {
  int resto = i % 4;
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  if (resto == 0) digitalWrite(led1, HIGH);
  if (resto == 1) digitalWrite(led2, HIGH);
  if (resto == 2) digitalWrite(led3, HIGH);
  ultimo = resto;
  delay(1000);
}
if (ultimo == 0) digitalWrite(led1, HIGH);
if (ultimo == 1) digitalWrite(led2, HIGH);
if (ultimo == 2) digitalWrite(led3, HIGH);