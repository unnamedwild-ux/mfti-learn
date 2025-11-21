#include <stdio.h>  
  
int main() 
{  
    int number,odd=0,d1,d2,d3,d4;   
    int count=0;
    while (1) 
    {  
        scanf("%d",&number);  
        int d1=number % 10; 
        int d2=number % 100;
        int d3=number % 1000;
        int d4=number % 10000;
        if (d1 == 0 && d2 == 0 && d3 == 0 && d4 == 0)  
            break;  
        if (d1 % 2 != 0) 
        {
            odd++;  
        }
    count++;
    }  
    printf("%d\n", count-odd);  
      
    return 0;  
}