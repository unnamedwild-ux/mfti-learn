#include <stdio.h>  
  
int main() 
{  
    int x;  
    scanf("%d", &x);  
    int first = -1; 
    int found = 0;
    while (x > 0)
    {  
        int second = x % 10;
        if (second == first) 
        {  
            found = 1;  
            break;  
        }  
          
        first = second;  
        x /= 10;  
    }  
    if (found) 
    {  
        printf("YES\n");  
    } else 
    {  
        printf("NO\n");  
    }  
      
    return 0;  
} 