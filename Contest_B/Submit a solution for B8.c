#include <stdio.h>  
#include <stdbool.h>  
  
bool twins(int number) 
{  
    int count[10] = {0};
    if (number < 0) 
    {  
        number = -number;  
    }  
    if (number == 0) 
    {  
        return false;  
    }  


    while (number > 0) 
    {  
        int digit = number % 10;  
        if (digit == 9) 
        {
        count[digit]++; 
        }     
        if (count[digit] > 1) 
        {  
            return false;  
        }  
        number /= 10;
    }
    return true;  
}  

int main() {  
    int number;  
    scanf("%d", &number);  
      
    if (twins(number)) 
    {  
        printf("YES\n");  
    } else 
    {  
        printf("NO\n");  
    }  
      
    return 0;  
}  