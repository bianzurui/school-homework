#include <stdio.h>

int main()
{
    int n,i,a,b,temp;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);

        while(b!=0)
        {
            temp=a%b;
            a=b;
            b=temp;
        }

        printf("%d\n",a);
    }

    return 0;
}
