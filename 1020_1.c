#include <stdio.h>
int main()
{
    int i=1;
    do
    {
        printf("請輸入密碼:");
        scanf("%d",&i);
    } while (i !=5678);
    printf("成功登入");
    return 0;
}