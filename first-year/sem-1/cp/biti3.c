#include <stdio.h>
#include <stdint.h>


uint16_t insertBit(uint16_t new, uint32_t bit, int k)
{
    return new | ( bit << k);
}

uint16_t evenPos(uint32_t n)
{
    uint16_t Rez=0;
    uint32_t bit=0;

    for(int k = 0 ; k<=31; k+=2 ) 
    {
        bit = ( n>>k ) & 1;
        Rez = insertBit( Rez,bit,k/2);
    }
    return Rez;
}



int main()
{
    printf( "%x", evenPos(122));
    putchar('\n');
    printf( "%x", evenPos(0xFF));
    putchar('\n');
    return 0;
}