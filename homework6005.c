#include<stdio.h>
int main()
{
    int t,m[1000],n[1000],i,j,p,q,tmp,flag=0,s;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&m[i],&n[i]);
        for(j=m[i];j<=n[i];j++)
        {
            tmp=0;
            s=j;
            while(s!=0)
            {
                p=s%10;
                q=s/10;
                s=q;
                tmp=tmp+p*p*p;
            }
            if(tmp==j)
            {
                printf("%d ",j);
                flag=1;
            }
            else
            {
                continue;
            }
        }
        if(flag==0)
        {
            printf("-1");
        }
        printf("\n");
    }
    return 0;
}