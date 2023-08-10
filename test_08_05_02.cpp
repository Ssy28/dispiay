#include <stdio.h>

int main()
{
    char c = 1;
    printf("%u\n", sizeof(c));
    printf("%u\n", sizeof(+c));
    printf("%u\n", sizeof(!c));
    return 0;
}