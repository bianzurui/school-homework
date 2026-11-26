#include<stdio.h>
int main()
{
    int n;
    long long sum=0,tmp;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        tmp=1;
        for(int j=1;j<=i;j++)
        {
            tmp=tmp*j;
        }
        sum=sum+tmp;
    }
    printf("%lld\n",sum);
return 0;
}