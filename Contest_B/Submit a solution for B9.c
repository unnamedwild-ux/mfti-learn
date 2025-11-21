#include <stdio.h>  
  
int main() 
{  
    int number;  
    scanf("%d", &number);  
    if (number < 0) 
    {  
        number = -number;  
    }  
    int even = 1;  

    while (number > 0) 
    {  
        int digit = number % 10;
        if (digit % 2 != 0) 
        {
            even = 0;  
            break;  
        }  
        number /= 10;  
    }  
    if (even) 
    {  
        printf("YES\n");  
    } else 
    {  
        printf("NO\n");  
    }  
      
    return 0;  
}  
