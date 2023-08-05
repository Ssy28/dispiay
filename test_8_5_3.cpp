#include <stdio.h>

int main()
{
    int a = 0x11223344;
    int* pa = &a;
    char* pb = (char*)&a;
    
    printf("%p\n", pa);
    printf("%p\n", pa+1);

    printf("%p\n", pb);
    printf("%p\n", pb+1);

    return 0;
}