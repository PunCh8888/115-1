#include <stdio.h>
int add(int 行駛公里數)
{
   int 車資=70;
   if (行駛公里數>2)
   {
    車資=車資+(行駛公里數-2)*10;
   }
   return 車資;
}

int main()
{
    int 行駛公里數;
    int 車資;
    printf("請輸入行駛公里數：");
    scanf("%d",&行駛公里數);
    車資=add(行駛公里數);
    printf("車資:%d",車資);
    return 0;
}