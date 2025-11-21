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
       if (number == 0) 
    {  
        printf ("%d", 0);
    }   
    
    while (number > 0) 
    {  
        printf ("%d", prev_digit);  
        number /= 10;  
        prev_digit = number % 10;
    }  
    return 0;  
}  
