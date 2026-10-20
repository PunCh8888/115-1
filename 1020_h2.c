#include <stdio.h>
int main()
{
    int 提款金額;
    int 累積金額=0;
    do
    {
        printf("請輸入提款金額(輸入0結束)：");
        scanf("%d",&提款金額);
        累積金額+=提款金額;
    } while (提款金額 !=0);
    printf("提款總金額：%d",累積金額);

    return 0;
}