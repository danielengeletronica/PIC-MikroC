

void main() {
TRISB.RB0 = 1;
TRISD.RD0 = 0;

     for(;;)
     {
            if(PORTB.RB0 == 1)
            {
             RD0_bit = 1;
            }
            else
            {
             RD0_bit = 0;
            }
     }
}