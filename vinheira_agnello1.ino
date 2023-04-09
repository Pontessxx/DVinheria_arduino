#define LDR_PIN A0
int GREEN_LED_PIN = 2;   // pino digital do led verde
int YELLOW_LED_PIN = 3;  // pino digital do led amarelo
int RED_LED_PIN = 4;     // pino digital do led vermelho
int BUZZER_PIN = 5;      // pino digital do buzzer

int lightValue = 0;    // variável para armazenar a leitura do LDR
int greenState = LOW;  // estado do led verde
int yellowState = LOW; // estado do led amarelo
int redState = LOW;    // estado do led vermelho
int buzzerState = LOW; // estado do buzzer

void setup() {
  Serial.begin(9600);
  pinMode(LDR_PIN, INPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(YELLOW_LED_PIN, OUTPUT);
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Leitura do valor do LDR
  lightValue = analogRead(LDR_PIN);

  // Checagem do nível de luminosidade
  if (lightValue <= 935 && lightValue>=755) {
    // Luminosidade média - liga led amarelo e desliga verde
    digitalWrite(GREEN_LED_PIN, LOW);
    digitalWrite(YELLOW_LED_PIN, HIGH);
    digitalWrite(RED_LED_PIN, LOW);
    noTone(BUZZER_PIN);   // para o som do buzzer
  } else if (lightValue <= 745 ) {
    // Luminosidade alta - liga led vermelho e desliga verde e amarelo
    digitalWrite(GREEN_LED_PIN, LOW);
    digitalWrite(YELLOW_LED_PIN, LOW);
    digitalWrite(RED_LED_PIN, HIGH);
    tone(BUZZER_PIN, 1000);// toca um som de 1kHz no buzzer
    	delay(3000);
    noTone(BUZZER_PIN);
  } else {
    // Luminosidade baixa - liga led verde e desliga os outros
    digitalWrite(GREEN_LED_PIN, HIGH);
    digitalWrite(YELLOW_LED_PIN, LOW);
    digitalWrite(RED_LED_PIN, LOW);
    noTone(BUZZER_PIN);   // para o som do buzzer
  }

  Serial.println(lightValue);  // imprime o valor lido do LDR no monitor serial
  delay(100);  // aguarda 100ms antes de fazer uma nova leitura do LDR
}