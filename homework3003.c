#include<stdio.h>
int main()
{
    int n,i,j,k,flag;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        flag=0;
        if(j<=1)
        {
            flag=1;
        }
        else
        {
        for(k=2;k<j;k++)
        {
            if(j%k==0)
            {
                flag=1;
                break;
            }
        }
        }
          if(flag==1)
            {
                printf("no\n");
            }
            else
            {
                printf("yes\n");
            }
    }
    return 0;
}