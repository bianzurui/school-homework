#include<stdio.h>
int main()
{
    int n,i;
    int sum=0;
   while(scanf("%d",&n)==1)
   {
    if(n<=4)
    {
        printf("%d",n);
    }
    else
    {
        for(i=n-4;i>0;i=i-1)
        {
            sum=sum+i;
        }
        sum=sum+n+1;
        printf("%d\n",sum);
    }
    return 0;
    }
}