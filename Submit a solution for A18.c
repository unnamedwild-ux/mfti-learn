#include <stdio.h>
int main (void)
{
    int a,b;
    // printf ("Please, input operands a b c:\n");
    scanf ("%d %d",&a,&b);
    if (a==b) {
    printf ("Equal");
    } else if (a<b){
      printf ("Less");  
    } else if (a>b){
      printf ("Above");  
    }
    
    return 0;
}