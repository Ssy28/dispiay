#include <stdio.h>

int main()
{
    char a = 3;
    char b = 127;
    char c = a + b;//整形提升，截断
    printf("%d", c);
    return 0;
}