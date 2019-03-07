void setup() {
	// Inicializa o pino 10 como saída
	pinMode(10, OUTPUT);
}
void loop() {
	// Código simples para piscar LED.
	digitalWrite (10, HIGH);	 // Acende o LED
	delay(500); 			// Tempo desejado de espera em milisegundos
	digitalWrite (10, LOW); 	// Apaga o LED
	delay(500); 
}
