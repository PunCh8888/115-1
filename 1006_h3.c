#include <stdio.h>
int main()
{
    int 成績;
    int 出席率;
    printf("請輸入學生成績(分)：");
    scanf("%d",&成績);
    if (成績>=60)
    {
        printf("請輸入學生出席率(%)：");
        scanf("%d",&出席率);
        if (出席率>=80)
       {
        printf("課程通過 ");
       }
       else
       {
        printf ("成績不及格");
       }   
    }
    else
    {
        printf ("成績不及格");
    }
    return 0;
}