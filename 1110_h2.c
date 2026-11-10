#include <stdio.h>
int money=1000;
void buyItem()
{
    extern int money;
    money=money-200;
    printf("購買完成，剩餘金幣：%d",money);
}

int main()
{
    buyItem();
    return 0;
}