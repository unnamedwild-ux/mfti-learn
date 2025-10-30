#include <stdio.h>
int main (void)
{
    float a,b,c,sum;
    // printf ("Please, input operands a b c:\n");
    scanf ("%f %f %f",&a,&b,&c);
    sum=a+b+c;
    printf ("%f\n", sum/3);
    
    return 0;
}