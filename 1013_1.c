#include <stdio.h>
int main()
{
    int temp;
    printf("請輸入溫度:");
    scanf("%d",&temp);
    if(temp>=30)
    {
        printf("高溫");
    }
    else if(temp>=20)
    {
        printf("適溫");
    }
    else
    {
        printf("寒冷");
    }
    return 0;
}