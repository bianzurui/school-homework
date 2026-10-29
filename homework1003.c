#include <stdio.h>
#include <math.h>

// 处理负0：如果绝对值极小，强制变成0
double fixZero(double num)
{
    if (fabs(num) < 1e-8)
        return 0.0;
    return num;
}

int main()
{
    int a, b, c;
    while (scanf("%d,%d,%d", &a, &b, &c) == 3)
    {
        if (a == 0 && b == 0)
        {
            // 0x²+0x+c=0：无解 / 无穷解，都输出x
            printf("x\n");
        }
        else if (a == 0)
        {
            // 一次方程 bx + c = 0
            double root = fixZero(-1.0 * c / b);
            printf("%.2f\n", root);
        }
        else
        {
            double delta = 1.0*b*b - 4.0*a*c;
            if (delta < -1e-8)
            {
                // delta < 0，无实根
                printf("x\n");
            }
            else if (fabs(delta) < 1e-8)
            {
                // delta == 0，重根
                double root = fixZero(-b / (2.0 * a));
                printf("%.2f\n", root);
            }
            else
            {
                double x1 = (-b + sqrt(delta)) / (2.0 * a);
                double x2 = (-b - sqrt(delta)) / (2.0 * a);
                x1 = fixZero(x1);
                x2 = fixZero(x2);
                double big, small;
                if (x1 > x2)
                {
                    big = x1;
                    small = x2;
                }
                else
                {
                    big = x2;
                    small = x1;
                }
                printf("%.2f %.2f\n", big, small);
            }
        }
    }
    return 0;
}