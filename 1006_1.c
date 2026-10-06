
#include <stdio.h>
int main()
{
    int 成績;
    printf("請輸入成績：");
    scanf("%d",&成績);
    if (成績>=60)
    {
        printf ("及格");
    }
    else
    {
        printf ("不及格");
    }
    return 0;
}