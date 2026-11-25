#include <stdio.h>
int main()
{
    int m,n,k;
    scanf("%d %d %d",&m,&n,&k);
    if(k>n)
    {
        printf("Input Error\n");
        return 0;
    }
    if(k==1)
    {
        printf("0\n");
        return 0;
    }
    long long dp[m+1];
    dp[0]=1;
    for(int i=1;i<=m;i++)
    {
        if(i<k)
        {
            dp[i]=dp[i-1]*n;
        }
        else
        {
            dp[i]=0;

            for(int j=1;j<k;j++)
            {
                dp[i]+=(n-1)*dp[i-j];
            }
        }
    }
    printf("%lld\n",dp[m]);

    return 0;
}
