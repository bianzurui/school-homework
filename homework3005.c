#include <stdio.h>

int main()
{
    int n,W;
    int v[1001],w[1001];
    int dp[1001]={0};
    int i,j;

    // 输入物品数量和背包容量
    scanf("%d%d",&n,&W);

    // 输入每件物品的价值
    for(i=1;i<=n;i++)
    {
        scanf("%d",&v[i]);
    }

    // 输入每件物品的重量
    for(i=1;i<=n;i++)
    {
        scanf("%d",&w[i]);
    }

    // 动态规划
    for(i=1;i<=n;i++)
    {
        for(j=W;j>=w[i];j--)
        {
            if(dp[j-w[i]]+v[i]>dp[j])
            {
                dp[j]=dp[j-w[i]]+v[i];
            }
        }
    }

    // 输出最大价值
    printf("%d\n",dp[W]);

    return 0;
}