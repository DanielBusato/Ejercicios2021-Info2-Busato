void setup() {
DDRD=B11111100;//Se define puertos 0 a 1 como entrada y puertos 2 al 7 como salida
DDRB=B00000011;//Se define puertos 8 a 9 como salida y 10 a 13 como entrada
}

void loop() {
//letra A
PORTD=B11011100;
PORTB=B00000001;
delay(1000);
//letra b
PORTD=B11110000;
PORTB=B00000001;
delay(1000);
//letra C
PORTD=B11100100;
PORTB=B00000000;
delay(1000);
//letra d
PORTD=B01111000;
PORTB=B00000001;
delay(1000);
//letra E
PORTD=B11100100;
PORTB=B00000001;
delay(1000);
//letra F
PORTD=B11000100;
PORTB=B00000001;
delay(1000);
//letra G
PORTD=B11110100;
PORTB=B00000001;
delay(1000);
//punto
PORTD=B00000000;
PORTB=B00000010;
delay(1000);
}
