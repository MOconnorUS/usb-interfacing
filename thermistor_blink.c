#include <avr/io.h>
#include <util/delay.h>

// #define MS_DELAY 3000
#define DOT 1000
#define DASH 3000
#define INTER 1000 // For use between characters.
#define GAP 3000 // For use between letters.

void led_on_DOT() {
    // led_on(DOT).
    PORTB |= _BV(PORTB5);
    _delay_ms(DOT);

    // led_off(INTER).
    PORTB &= ~_BV(PORTB5);
    _delay_ms(INTER);
}

void led_on_DASH() {
    // led_on(DASH).
    PORTB |= _BV(PORTB5);
    _delay_ms(DASH);

    // led_off(INTER).
    PORTB &= ~_BV(PORTB5);
    _delay_ms(INTER);
}

void letterM(void) {
    led_on_DOT();

    // led_off(INTER)
    PORTB &= ~_BV(PORTB5);
    _delay_ms(INTER);

    led_on_DASH();
    led_on_DASH();
    _delay_ms(GAP);
}

void letterA(void) {
    led_on_DOT();
    led_on_DASH();
    _delay_ms(GAP);
}

void letterT(void) {
    led_on_DASH();
    _delay_ms(GAP);
}

int main (void) {
    /*Set to one the fifth bit of DDRB to one
    **Set digital pin 13 to output mode */
    DDRB |= _BV(DDB5);

    while(1) {
        // Letter M
        letterM();

        // Letter C
        letterA();

        // Letter O
        letterT();
    }
}