#include <stdio.h>

int min(int a, int b) {
    if (a > b){
        return b;
    }
    return a;
}

int max(int a, int b) {
    if (a < b){
        return b;
    }
    return a;
}

int main (void)
{
    int a,b,c,d,e,i,n=5;
        // printf ("Please, input operands a b c:\n");
    scanf ("%d %d %d %d %d",&a,&b,&c,&d,&e);

    int min_val = min(min(min(min(a, b), c), d), e);
    int max_val = max(max(max(max(a, b), c), d), e);

    printf ("%d\n", min_val + max_val);  

    return 0;
}