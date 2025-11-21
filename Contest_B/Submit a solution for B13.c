#include <stdio.h>  
  
int main() 
{  
    int number,even=0,odd=0;  
    scanf("%d", &number);  

    while (number > 0) 
    {  
        int digit = number % 10;
        if (digit % 2 != 0) 
        {
            even++;  
        }  
        else odd++;
        number /= 10;  
    }  
        printf("%d %d\n", odd,even);  
      
      
    return 0;  
} 