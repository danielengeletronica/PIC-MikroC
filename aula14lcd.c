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
     unsigned int i;
     char txt[8];
     Lcd_Init();
     Lcd_Chr_CP('a');
     Lcd_Chr_CP(' ');
     Lcd_Chr_CP('4');
     Lcd_Out_CP("caguei");
     Lcd_Chr(2,1,'o');
     Lcd_Out(2,3,"DANIEL");
     Delay_ms(1000);
     Lcd_Cmd(_LCD_CLEAR);
     for (;;)
     {
         for (i =0; i<10; i++)
         {
          Lcd_Cmd(_LCD_CLEAR);
          Lcd_Out(1,1,"CURSO DE MICRO");
          Lcd_Out(2,1,"contador:");
          IntToStr(i,txt);
          Lcd_Out(2,10,txt);
          
          Delay_ms(1000);
          
         
         }
     
     }

}