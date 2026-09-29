#include <stdio.h>
int main()
{
    int 客廳設備=9;
    int 臥室設備=5;
    int 廚房設備=2;
    int 現在設備=13;
    printf("目前客廳設備：%d\n",客廳設備&現在設備);
    printf("目前臥室設備：%d\n",臥室設備&現在設備);
    printf("目前廚房設備：%d\n",廚房設備&現在設備);
    printf("廚房切換後目前設備狀態:%d\n",現在設備^廚房設備);
    return 0;
}