#include <stdio.h>
int main()
{
    int 門禁卡=5;
    int 停車場=1<<2;
    int 教師辦公室=1<<3;
    printf("停車場的權限：%d\n",停車場);
    printf("學生有無停車場權限：%d\n",門禁卡&停車場);
    printf("學生有無老師辦公室權限：%d\n",門禁卡&教師辦公室);
    return 0;
}