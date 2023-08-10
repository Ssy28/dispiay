#include <stdio.h>

int main()
{
    int a = 11;
    a = a | (1<<2);
    printf("%d\n", a);
    a = a & (~(1<<2));
    printf("%d\n", a);
    return 0;
}