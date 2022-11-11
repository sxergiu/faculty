#include <stdio.h>


void printcvin(unsigned cvin )
{
    if( cvin < 10 ) 
        printf("%d",cvin);
    else
        putchar('A'+cvin-10);
}

void Base32(unsigned n)
{
    unsigned cvin=0;
    printf("nr: ");
    for(int L=30; L>=0; L-=5 )
    {   
        cvin = ( n & ( 0x1F << L) ) >> L;
        printcvin(cvin);
    }
}

int main()
{
    Base32(1024);
    return 0;
}