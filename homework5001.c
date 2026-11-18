#include <stdio.h>
int main()
{
    int n;
    int a[20][20]; 
    int i, j;
    scanf("%d",&n);
    if(n<=0 || n>20)
    {
        printf("Input Error\n");
    }
    else
    {
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                a[i][j] = 1;
            } else {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d,", a[i][j]);
        }
        printf("\n");
    }
}
    return 0;
}