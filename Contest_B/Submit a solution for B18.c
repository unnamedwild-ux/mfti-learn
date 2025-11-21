#include <stdio.h>

int main (void)
{
int x;
    scanf ("%d",&x);
int i = 0,s1=1,s2=1,s3=0;
    while (i < x) 
    { 
        printf("%d ",s1);
        s3 = s1+s2;
        s1 = s2;
        s2 = s3;
        i++;
    }
return 0;
}