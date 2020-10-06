#line 1 "C:/Users/lucas/Desktop/Curso de PIC/Codigos/Aula8button.c"

void main() {
TRISB.RB0 = 1;
TRISD.RD0 = 0;

 for(;;)
 {
 if(BUTTON(&PORTB, 0, 1, 1))
 {
 RD0_bit = ~RD0_bit;
 }
 }
}
