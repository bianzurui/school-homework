#include<stdio.h>
int main()
{
    int n,a,k,i;
    scanf("%d %d %d",&n,&a,&k);
    if(n<2 || k<1)
    {
        printf("Wrong Number\n");
    }
    else
    {
        for(i=0;i<n-1;i++)
        {
            a=a+k;
        }
        printf("%d",a);
    }
    return 0;
}