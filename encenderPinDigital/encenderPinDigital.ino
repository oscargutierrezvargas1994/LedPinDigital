// Define el pin al que está conectado el LED
/*
  D0 - GPIO16
  D1 - GPIO5
  D2 - GPIO4
  D3 - GPIO0
  D4 - GPIO2
  D5 - GPIO14
  D6 - GPIO12
  D7 - GPIO13
  D8 - GPIO15
  D9 - GPIO3
  D10 - GPIO1
 */
const int pinLED = 5;


void setup() {
  // Inicializa el pin del LED como salida
  pinMode(pinLED, OUTPUT);
}

void loop() {
  // Enciende el LED
  digitalWrite(pinLED, HIGH);
  delay(1000); // Espera 1 segundo
  
  // Apaga el LED
  digitalWrite(pinLED, LOW);
  delay(1000); // Espera 1 segundo
}
