
#include <stdio.h>
int main()
{
    int 年齡;
    int 駕照;
    printf("請輸入年齡：");
    scanf("%d",&年齡);
    printf("請輸入有無駕照1有0無：");
    scanf("%d",&駕照);
    if (年齡>=18 && 駕照==1)
    {
        printf("可開");
    }
    else
    {
        printf ("不可開");
    }
    return 0;
}