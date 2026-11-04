#include <stdio.h>

int main()
{
    char str[100], temp;
    int i, j, len, flag;

    while(1)
    {
        scanf("%s", str);

        // 判断是否输入 exit
        if(str[0]=='e' && str[1]=='x' && str[2]=='i' && str[3]=='t' && str[4]=='\0')
        {
            printf("End Of Input\n");
            break;
        }

        // 计算字符串长度
        len = 0;
        while(str[len] != '\0')
        {
            len++;
        }

        // 判断是否合法
        flag = 1;

        for(i=0; i<len; i++)
        {
            if(!((str[i]>='0' && str[i]<='9') ||
                 (str[i]>='A' && str[i]<='Z') ||
                 (str[i]>='a' && str[i]<='z')))
            {
                flag = 0;
                break;
            }
        }

        if(flag == 0)
        {
            printf("Input Error\n");
        }
        else
        {
            printf("%s\n", str);

            // 冒泡排序
            for(i=0; i<len-1; i++)
            {
                for(j=0; j<len-1-i; j++)
                {
                    if(str[j] > str[j+1])
                    {
                        temp = str[j];
                        str[j] = str[j+1];
                        str[j+1] = temp;
                    }
                }
            }

            printf("%s\n", str);
        }
    }

    return 0;
}