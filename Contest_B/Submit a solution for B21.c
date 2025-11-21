#include <stdio.h>
int main()
{
 char c;
 while( (c=getchar())!='.') //спец символ новой строки
 if(c>='A' && c<='Z') //все символы лежат подряд
 putchar('a' + (c-'A'));
 else
 putchar(c);
 return 0;
}