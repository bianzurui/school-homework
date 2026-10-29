#include<stdio.h>
int main()
{
   char c;
   while((c=getchar())!='\n')
   {
    if(c>='A'&&c<='Z')
    c=c+32;
    putchar(c);
   }
   putchar('\n');
    return 0;
}
