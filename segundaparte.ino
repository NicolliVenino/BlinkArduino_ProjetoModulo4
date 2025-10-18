// define os pinos do botão e do LED.
#define b_pin = 8;
#define led_pin = 13;

void setup()
{
  // Inicializa o monitor serial e configura os pinos.
  Serial.begin(9600);
  pinMode(b_pin, INPUT_PULLUP);
  pinMode(led_pin, OUTPUT);
}

void loop()
{
  // Lê o estado do botão e mostra no monitor serial.
  int dadoEntrada = digitalRead(b_pin);
  Serial.println(dadoEntrada);
  // Se o botão for pressionado o LED acende.
  if (dadoEntrada == LOW){
    digitalWrite(led_pin, HIGH);
    Serial.println("piscouu");
  }
  // Se o botão não for pressionado o LED apaga.
  if (dadoEntrada == HIGH){
    digitalWrite(led_pin, LOW);
  }
}