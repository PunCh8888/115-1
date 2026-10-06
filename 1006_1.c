
#include <stdio.h>
int main()
{
    int 年齡;
    int 身高;
    printf("請輸入你的年齡：");
    scanf("%d",&年齡);
    printf("請輸入你的身高：");
    scanf("%d",&身高);
    if (年齡>=12)
    {
        if (身高>=120)
       {
        printf("可搭乘");
       }
       else
       {
        printf ("不可搭乘");
       }   
    }
    else
    {
        printf ("不可搭乘");
    }
    return 0;
}