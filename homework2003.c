
#include <stdio.h>

int main()
{
    int n, i, num, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d", &num);

        if(num == 1)
        {
            printf("1\n");
            continue;
        }

        for(j = 2; j <= num; j++)
        {
            while(num % j == 0)
            {
                printf("%d", j);
                num = num / j;

                if(num > 1)
                    printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}
