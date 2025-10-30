#include <stdio.h>
int max(int a, int b) {
    if (a < b){
        return b;
    }
    return a;
}
int main (void)
{
    int a;
    int d1,d2,d3;
    scanf ("%d",&a);

    d1 = a%10;
    d2 = (a/10)%10;
    d3 = (a/100)%10;
    int max_val = (max(max(d1, d2), d3));
    printf ("%d\n", max_val);  

    return 0;
}