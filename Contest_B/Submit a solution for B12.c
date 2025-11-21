#include <stdio.h>  
  
int main() 
{  
    int number;  
    scanf("%d", &number);  
    if (number == 0) 
        {  
        printf ("%d %d", 0, 0);
        return 0;
        }   
    int prev_digit = number % 10;
    int min=prev_digit,max=prev_digit;
    
    while (number > 0) 
    {  
        prev_digit = number % 10;
        number /= 10;  
        if (prev_digit<min)
        {
            min=prev_digit;
        }
        if (prev_digit>max)
        {
            max=prev_digit;
        }
    }
    printf ("%d %d", min, max);    
    return 0;  
}  
