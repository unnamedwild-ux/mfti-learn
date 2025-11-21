#include <stdio.h>  
int summa(int num)
{  
    int sum = 0;  
    while (num > 0)
    {  
        sum += num % 10;  
        num /= 10;  
    }  
    return sum;  
}  
int proizv(int num)
 {  
    int proiz = 1;  
    while (num > 0)
    {  
        proiz *= num % 10;  
        num /= 10;  
    }  
    return proiz;  
}  
 
int main()
{  
    int n;  
    scanf("%d", &n);  
    for (int i = 10; i <= n; i++)
    {  
        if (summa(i) == proizv(i))
        {  
            printf("%d\n", i);  
        }  
    }  
    return 0;  
}  
