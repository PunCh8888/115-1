#include <stdio.h>
int main()
{
    int 密碼;
    printf("請輸入密碼（輸入-1退出）：");
    scanf("%d",&密碼);
    while (密碼!=-1)
    {
        if(密碼==1234)
        {
        printf("登入成功");
        return 0;
        }
        else
        {
        printf("密碼錯誤，請重新輸入（輸入-1退出）：");
        scanf("%d",&密碼);
        }
    }
     printf("已退出程式");
    return 0;
}