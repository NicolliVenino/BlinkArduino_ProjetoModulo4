void setup() {
  // inicializa o pino do LED interno.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Acende o LED
  digitalWrite(LED_BUILTIN, HIGH);
  // Espera de meio segundo
  delay(500); 
  // Apaga o LED
  digitalWrite(LED_BUILTIN, LOW);
  // Espera de meio segundo
  delay(500); 
}
