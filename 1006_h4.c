#include <stdio.h>
int main()
{
    int 登入狀態;
    int 帳戶餘額;
    int 提款金額;
    int 黑名單狀態;
    printf("請輸入登入狀態（1：已登入，0：未登入）：");
    scanf("%d",&登入狀態);
    printf("請輸入帳戶餘額：");
    scanf("%d",&帳戶餘額);
    printf("請輸入提款金額：");
    scanf("%d",&提款金額);
    printf("請輸入黑名單狀態（1：是，0：否）：");
    scanf("%d",&黑名單狀態);
    if (登入狀態==1 && 帳戶餘額>=提款金額 && 黑名單狀態 ==0)
    {
        printf("可以提款");
    }
    else
    {
        printf ("不可提款");
    }
    return 0;
}