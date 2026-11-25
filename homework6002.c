#include <stdio.h>
int main()
{
    char a[1005],b[1005],temp;
    int i,j,k,flag;
    scanf("%s",a);
    scanf("%s",b);
    // 第一步：删除指定字符
    k=0;
    for(i=0;a[i]!='\0';i++)
    {
        flag=1;

        for(j=0;b[j]!='\0';j++)
        {
            if(a[i]==b[j])
            {
                flag=0;
                break;
            }
        }

        if(flag==1)
        {
            a[k]=a[i];
            k++;
        }
    }

    a[k]='\0';

    // 第二步：判断删除后是否为空
    if(k==0)
    {
        printf("null\n");
        return 0;
    }

    // 第三步：按照ASCII码升序排序
    for(i=0;i<k-1;i++)
    {
        for(j=0;j<k-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    // 第四步：输出
    printf("%s\n",a);

    return 0;
}
