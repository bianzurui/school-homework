#include <stdio.h>
int n, m;
int a[55][55];
int dp[55][55];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int dfs(int x, int y)
{
    if(dp[x][y] != 0)
    {
        return dp[x][y];
    }
    dp[x][y] = 1;
    for(int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 0 && nx < n && ny >= 0 && ny < m)
        {
            if(a[nx][ny] < a[x][y])
            {
                int temp = dfs(nx, ny) + 1;

                if(temp > dp[x][y])
                {
                    dp[x][y] = temp;
                }
            }
        }
    }
    return dp[x][y];
}

int main()
{
    while(1)
    {
        scanf("%d %d", &n, &m);

        if(n == 0 && m == 0)
        {
            break;
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                scanf("%d", &a[i][j]);
                dp[i][j] = 0;
            }
        }

        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                int temp = dfs(i, j);

                if(temp > ans)
                {
                    ans = temp;
                }
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}
