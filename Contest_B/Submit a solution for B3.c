#include <stdio.h>

int main (void)
{
int a,b,summ=0;
    scanf ("%d %d",&a, &b);
int i = a;
    while (i <= b) 
    { 
        summ=summ+(i*i);
        i++;
    }
    printf ("%d",summ);
return 0;
}
