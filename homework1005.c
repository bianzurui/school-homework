#include<stdio.h>
int main()
{
    int n,m,t;
    int i=1;
    int sum=0;
    int a[32];
    int S;
    int temp=0;
    scanf("%d",&n);
    while(scanf("%d",&m)==1)
    {
        while(m/i>0)
        {
           sum=sum+1;
           i=i*10; 
        }
        temp=m;
        for(t=sum-1;t>=0;t=t-1)
        {
           a[t]=temp%10;
           temp=temp/10; 
        }
        S=1;
        for(t=0;t<=sum/2;t++)
        {
            if(a[t]!=a[sum-1-t])
            {
                S=0;
                break;
            }
        }
        if(S==1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}