#include <stdio.h>
int main()
{
    char s[256];
    int i=0,j,start=0;
    while(1)
    {
        s[i]=getchar();

        if(s[i]=='\n')
        {
            break;
        }

        i++;
    }
    for(j=0;j<i;j++)
    {
        if(s[j]==' ')
        {
            int k;
            for(k=j-1;k>=start;k--)
            {
                printf("%c",s[k]);
            }

            printf(" ");
            start=j+1;
        }
    }
    for(j=i-1;j>=start;j--)
    {
        printf("%c",s[j]);
    }
    return 0;
}