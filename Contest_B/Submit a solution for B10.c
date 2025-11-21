#include <stdio.h>  
  
int main() 
{  
    int number;  
    scanf("%d", &number);  
    if (number < 0) 
    {  
        number = -number;  
    }  
    int prev_digit = number % 10;  
    number /= 10;  
    int straight = 1;  
    while (number > 0) 
    {  
        int current_digit = number % 10;  
        if (current_digit >= prev_digit) 
        {  
            straight = 0;  
            break;  
        }  
        prev_digit = current_digit;  
        number /= 10;  
    }  
    
    if (straight) 
    {  
        printf("YES\n");  
    } else 
    {  
        printf("NO\n");  
    }  
      
    return 0;  
}  
