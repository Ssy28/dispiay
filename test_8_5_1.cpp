#include <stdio.h>

int main()
{
    char a = 0xb6;
    char b = 0x36;
    if(a == 0xb6)
    //111111111111111111111111 10110110 整形提升
        printf("a");
    if(b == 0x36)
    //000000000000000000000000 00110110 整形提升
        printf("b");
    return 0;
}