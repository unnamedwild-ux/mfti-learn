#include <stdio.h>
#include <stdbool.h>  

bool issimple(int n)
{
    if (n > 1)
    {
        for (int i = 2; i < n; i++)
            if (n % i == 0) 
            return false;
        return true;
    }
    else return false;
}

int main() 
{
    int number;
    scanf ("%d", &number);
    bool res=(issimple(number));
    if (res)
    {
        printf("YES\n");
    }
    else printf("NO\n");
return 0;
}