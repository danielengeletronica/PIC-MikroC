#line 1 "C:/Users/lucas/Desktop/Curso de PIC/Codigos/Aula3led.c"


void main() {
 TRISD = 0x00;
 PORTD = 0;

 RD3_bit = 1;

 for (;;)
 {
 RD0_bit = 0;
 Delay_ms(100);
 RD0_bit = 1;
 Delay_ms(100);
 }
}
