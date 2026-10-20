#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        printf("輸入整數");
         scanf("%d",&i);
        if(i==0)
        {
            printf("結束");
            break;
        }
        if (i<0)
        {
            printf("負數不處理");
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}