#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,t[10000],b[10000];
    for(i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
    }
    int sum=0,temp=0,k;
    for(i=0;i<n-1;i++)
    {
        for(k=0;k<n-i-1;k++)
        {
            if(t[k]>t[k+1])
            {
                temp=t[k];
                t[k]=t[k+1];
                t[k+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        b[i]=(n-i-1)*t[i];
        sum=sum+b[i];
    }
    printf("%d\n",sum);
    return 0;
}