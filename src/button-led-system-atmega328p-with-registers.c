int main(void) {
    DDRD |= (1 << DDD4);     // Configura ledPin (pino 4) como saída
    PORTD &= ~(1 << PORTD4); // Desliga o LED inicialmente

    while (1) {
        if (PIND & (1 << PIND3)) {
            PORTD |= (1 << PORTD4); // Liga o LED
        } else {
            PORTD &= ~(1 << PORTD4); // Desliga o LED
        }
    }

    return 0;
}
