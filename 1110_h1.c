#include <stdio.h>
void count(int 塔層數)
{
    if(塔層數==0)
    {
        return;
    }
    printf("解鎖第%d層魔法能量\n",塔層數);
    count(塔層數-1);
}

int main()
{
    int 塔層數;
    printf("請輸入魔法金字塔層數：");
    scanf("%d",&塔層數);
    count(塔層數);
    printf("所有樓層解鎖完成！ ");
    return 0;
}
