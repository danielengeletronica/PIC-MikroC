sbit LCD_RS at RD2_bit;
sbit LCD_EN at RD3_bit;
sbit LCD_D4 at RD4_bit;
sbit LCD_D5 at RD5_bit;
sbit LCD_D6 at RD6_bit;
sbit LCD_D7 at RD7_bit;

sbit LCD_RS_Direction at TRISD2_bit;
sbit LCD_EN_Direction at TRISD3_bit;
sbit LCD_D4_Direction at TRISD4_bit;
sbit LCD_D5_Direction at TRISD5_bit;
sbit LCD_D6_Direction at TRISD6_bit;
sbit LCD_D7_Direction at TRISD7_bit;

void main() {
  ADCON0 = 0b00000000;
  ADCON1 = 0b11000100;
  TRISA0_bit = 1;
  TRISC =0;
  TRISD =0;
  PORTC = 0;
  PORTD = 0;
  Lcd_Init();
  Lcd_Cmd(_LCD_CLEAR);

  do {

    unsigned int AD = 0;
    unsigned char txt[8];
    ADCON0.CHS2 =0;
    ADCON0.CHS1 =0;
    ADCON0.CHS0 =0;
     Lcd_Cmd(_LCD_CURSOR_OFF);
    ADON_bit =1;
    delay_us(20);
    GO_NOT_DONE_bit = 1;
    while (GO_NOT_DONE_bit == 1);
    AD = ADRESL + (ADRESH<<8);
    ADON_bit =0;
    delay_us(20);
    
    WordToStr(AD,txt);
    Lcd_Out(1,1,txt);
    
    ADCON0.CHS2 =0;
    ADCON0.CHS1 =0;
    ADCON0.CHS0 =1;
    ADON_bit =1;
    delay_us(20);
    GO_NOT_DONE_bit = 1;
    while (GO_NOT_DONE_bit == 1);
    AD = ADRESL + (ADRESH<<8);
    ADON_bit =0;
    delay_us(20);
    WordToStr(AD,txt);
    delay_us(20);
    Lcd_Out(2,1,txt);
  } while(1);
}

