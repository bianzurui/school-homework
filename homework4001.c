#include<stdio.h>

int main()
{
    int n,t,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        if(t<=0)
        {
            printf("no\n");
        }
        else if(t%4==0 && t%100!=0 || t%400==0)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}