# Atividade Ponderada da Primeira Semana do Módulo 4 do Inteli

## Parte 1: Blink Led Interno
Segue abaixo o código desenvolvido para piscar o led interno do arduíno, assim como a imagem e o link para o vídeo do projeto funcionando:

```
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {

  digitalWrite(LED_BUILTIN, HIGH);
  delay(500); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(500); 
}
```

<p align = "center">Figura 1 - Blink Led Interno</p>
<div align = "center">
  <img src = "./assets/ledinterno.jpeg">
 <sup>Fonte: material autoral.</sup>
 </div>

