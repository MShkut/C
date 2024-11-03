#include <avr/io.h>
# include <util/delay.h> //For Delay

int main(void){
    //Pin 13 aas output
    DDRB |= (1 << DDB7);

    while (1) {
        //Turn LED on
        PORTB |= (1 << PORTB7);
        _delay_ms(1000);

        PORTb &= ~(1 << PORTB7);
        _delay_ms(1000);
    }
    return 0;
}