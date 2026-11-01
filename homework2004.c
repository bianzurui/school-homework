#include <stdio.h>

int main()
{
    int n,x,y,z;
    int flag=0;

    scanf("%d",&n);

    for(x=0;x<=n/7;x++)
    {
        if((n-7*x)%4==0)
        {
            y=(n-7*x)/4;
            z=n-x-y;

            printf("%d %d %d\n",x,y,z);
            flag=1;
        }
    }

    if(flag==0)
    {
        printf("NO\n");
    }

    return 0;
}