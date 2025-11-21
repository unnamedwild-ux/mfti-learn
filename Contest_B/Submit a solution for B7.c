#include <stdio.h>  
#include <stdbool.h>  
  
bool twins(int number) 
{  
    int count[10] = {0};
    while (number > 0) 
    {  
        int digit = number % 10;  
        count[digit]++;      
        if (count[digit] > 1) 
        {  
            return true;  
        }  
        number /= 10;
    }  
    return false;  
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