#include<stdio.h>
int main()
{
    int n,i,j;
    char c;
    scanf("%c %d",&c,&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*n-1;j++)
        {
            if(j==n-i-1 || j==n+i-1)
            {
            printf("%c",c);
            }
            else if(i==n-1)
            {
                printf("%c",c);
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}