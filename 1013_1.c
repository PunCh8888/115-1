#include <stdio.h>
int main()
{
    int day;
    printf("請輸入星期幾(1-7):");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("週一");
        break;
        case 2:
        printf("週二");
        break;
        case 3:
        printf ("週三");
        break;
        case 4:
        printf ("週四");
        break;
        case 5:
        printf ("週五");
        break;
        case 6:
        printf ("週六");
        break;
        case 7:
        printf ("週日");
        break;
        default:
        printf("輸入錯誤");
    }
    return 0;
}