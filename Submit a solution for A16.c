#include <stdio.h>
int main (void)
{
    int a,b,c;
    // printf ("Please, input operands a b c:\n");
    scanf ("%d %d %d",&a,&b,&c);
    if (a<b&&b<c) {
        printf ("YES");
    } else {
      printf ("NO");  
    }
    return 0;
}