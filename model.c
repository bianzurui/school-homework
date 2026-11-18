//逆序字符
#include <stdio.h>
int main()
{
    char str[100];
    int i=0;

    while(1)
    {
        str[i]=getchar();

        if(str[i]=='\n')
        {
            break;
        }

        i++;
    }

    for(i=i-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }

    return 0;
}

//辗转相除法求最大公约数
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

