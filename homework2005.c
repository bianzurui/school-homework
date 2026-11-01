#include<stdio.h>
int main()
{
    int n,a,b,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        b=a%3;
        if(b>0&&b<3)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}