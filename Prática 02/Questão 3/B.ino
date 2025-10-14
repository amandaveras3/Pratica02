for (int i = 0; i < 10; i++) {
  int resto = i % 4;
  digitalWrite(led1, resto == 0);
  digitalWrite(led2, resto == 1);
  digitalWrite(led3, resto == 2);
  delay(1000);
}