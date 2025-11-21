#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%d %d", &a, &b);
    while(b != 0) 
    {
        int res = b;
        b = a % b;
        a = res;
    }
    printf("%d", a);
}