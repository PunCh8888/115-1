#include <stdio.h>
int main()
{
    int 身高;
    printf("請輸入身高(cm)：");
    scanf("%d",&身高);
    if (身高>=120)
    {
        printf ("可以搭乘雲霄飛車");
    }
    else
    {
        printf ("身高不足，無法搭乘雲霄飛車");
    }
    return 0;
}