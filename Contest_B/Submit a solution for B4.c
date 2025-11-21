#include <stdio.h>  
  
int main() 
{  
    int x;  
    scanf("%d", &x);  
    if ((x >= 100) && (x <= 999)) 
    {  
        printf("YES\n");  
    } else {  
        printf("NO\n");  
    }  
      
    return 0;  
}  