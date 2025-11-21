#include <stdio.h>
#include <math.h>

int main (void)
{
int x;
    scanf ("%d",&x);

int i = 1;
    while (i <= x) 
    { 
    int s= pow(i, 3);
        printf("%d %d %d \n", i, i*i, s);

        i++;
    }
    
    printf("\n");
return 0;
}