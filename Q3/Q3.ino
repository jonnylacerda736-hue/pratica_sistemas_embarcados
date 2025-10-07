int pinosLed[] = {13, 12, 11};  // 13 = vermelho, 12 = amarelo, 11 = verde (por exemplo)
int tempo = 300;

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(pinosLed[i], OUTPUT);
  }
}

void loop() {
  // 🔸 Piscar o LED amarelo (pino 12) 3 vezes
  for (int i = 0; i < 3; i++) {
    digitalWrite(pinosLed[1], HIGH);  // Liga o amarelo
    delay(tempo);
    digitalWrite(pinosLed[1], LOW);   // Desliga o amarelo
    delay(tempo);
  }

  // 🔁 Agora faz a sequência normal dos LEDs
  for (int i = 0; i < 3; i++) {
    digitalWrite(pinosLed[i], HIGH);
    delay(tempo);
    digitalWrite(pinosLed[i], LOW);
    delay(tempo);
  }
}
