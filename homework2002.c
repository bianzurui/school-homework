#include<stdio.h>
int main()
{
    int n,i,cnt=0,s=0;
    char ch;
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {   
        cnt=0,s=0;
        ch=getchar();
        while(ch!='\n' && ch!=EOF)
        {
            cnt=cnt+1;
        if(ch=='a')
        {
            s=s+1;
        }
        ch=getchar();
    }
        printf("%d %d\n",cnt,s);

    }
    return 0;
}