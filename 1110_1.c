#include <stdio.h>
void test()
{
    static int count=0;
    count++;
    printf("%d\n",count);
}
int main()
{
    test();
    test();
    test();
    return 0;
}