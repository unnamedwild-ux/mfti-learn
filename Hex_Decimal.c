#include <stdio.h>
int main (void)
{
    int s1,s2,hs1,hs2;
    s1=12345678,s2=1000000,hs1=0x12345678,hs2=0x1000000;
    printf ("Hex of decimal %d = %x, hex of decimal %d = %x\n", s1,s1,s2,s2);
    printf("Decimal of 0x%x = %d, decimal of 0x%x = %d\n", hs1,hs1,hs2,hs2);

    return 0;
}