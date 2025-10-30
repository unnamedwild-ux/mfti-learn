#include <stdio.h>
int main (void)
{
    int a,b,c,d,e,i,n=5;
        // printf ("Please, input operands a b c:\n");
    scanf ("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if (a < b) {
        a = b;
    }
    if (c < d) {
        c = d;
    }
    if (a < c) {
        a = c;
    }
    if (a < e) {
        a = e;
    }
        printf ("%d\n", a);  

    return 0;
}