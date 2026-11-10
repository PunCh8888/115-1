#include <stdio.h>
int add(int 購買數量,int 購買金額)
{
    return 購買數量*購買金額;
}

int main()
{
    int 購買數量;
    int 購買金額;
    int 總金額;
    printf("請輸入購買數量:");
    scanf("%d",&購買數量);
    printf("請輸入購買金額:");
    scanf("%d",&購買金額);
    總金額=add(購買數量,購買金額);
    printf("總金額:%d",總金額);
    return 0;
}