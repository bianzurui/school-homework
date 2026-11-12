#include <stdio.h>
int main()
{
    int a[20][5]={0};
    int n,p;
    int i,j,k;
    int flag,found,cnt;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p);
        found=0;
        for(int r=0;r<20 && found==0;r++)
        {
            for(j=0;j<=5-p;j++)
            {
                flag=1;
                for(k=0;k<p;k++)
                {
                    if(a[r][j+k]==1)
                    {
                        flag=0;
                        break;
                    }
                }
                // 如果全部空闲，就购买
                if(flag==1)
                {
                    for(k=0;k<p;k++)
                    {
                        a[r][j+k]=1;
                        printf("%d ",r*5+j+k+1);
                    }
                    found=1;
                    break;
                }
            }
        }
        if(found==0)
        {
            cnt=0;
            for(int r=0;r<20 && cnt<p;r++)
            {
                for(j=0;j<5 && cnt<p;j++)
                {
                    if(a[r][j]==0)
                    {
                        a[r][j]=1;
                        printf("%d ",r*5+j+1);
                        cnt++;
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
