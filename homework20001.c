#include <stdio.h>
int main()
{
    int n,a,b,c,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d,%d,%d",&a,&b,&c);
        if(a+b>c&& a+c>b && b+c>a)
        {
            if(a*a+b*b>c*c && a*a+c*c>b*b && b*b+c*c>a*a)
            {
                printf("acute\n");
            }
            else if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
            {
                printf("right\n");
            }
            else
            {
                printf("obtuse\n");
            }
        }
        else
        {
            printf("illegal\n");
        }
    }
    return 0;    
}
