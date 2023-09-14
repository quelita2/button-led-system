int main(void) {
    DDRD = 0x10;   // Configura ledPin (pino 4) como saída
    PORTD = 0x08;  // Configura o pino 3 como Pull-up 
  
    while (1) {
        if (PIND & 0x08) { // PIND - Registrador de leitura do estado do Port D
            PORTD = 0x08;  // Desliga o LED
        } else {
            PORTD = 0x18;  // Liga o LED
        }
    }
    return 0;
}