#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }   
        printf("%d\n",sum);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
        printf("%d\n",sum);
    i=1,sum=0;
    do{
        sum=sum+i;
        i++;
    }while(i<=n);
    printf("%d\n",sum);
    return 0;
}