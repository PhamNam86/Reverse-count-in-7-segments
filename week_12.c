#include <16f887.h> 
#device *=16 ADC=8 // Khai bao during con tro 16-bt 
#FUSES NOWDT, HS, NOPUT, NOBROWNOUT,NOPROTECT, NOLVP 
#use delay(clock=8000000) // Khai bao su ðung Thach Anh 8 - Mhz

int i,k,h;
const char led7[] = {0x3f,0x3f, 0x06, 0x5b, 0x4f,0x66,0x6d, 0x7d, 0x07,0x7f,0x6f};
void main()
{
set_tris_a(0x00);
set_tris_b(0x00); 
set_tris_c(0x00);
set_tris_d(0x00); 

output_a(0x08); 
output_low(pin_a5);
output_low(pin_a6);
output_low(pin_a7);
while(TRUE)
{

for(i=10;i >= 1;i--)
{
output_b(~led7[i]);
for(k=10;k >= 1;k--)
{
output_d(~led7[k]);
for(h=10;h >= 1;h--)
{
output_c(~led7[h]);
delay_ms(500);

}
}
}


}
}