#include<stdio.h>
int main()
{
    int n,x[1000],y[1000],i,m,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
        if(y[i]%2==1||x[i]>=y[i])
        {
            printf("error\n");
            continue;
        }
        else
        {
        for(m=0;m<x[i];m++)
        {
            t=x[i]-m;
            if(m*2+t*4==y[i])
            {
                printf("%d %d\n",m,t);
                break;
            }
        }
    }
    }
    return 0;
}