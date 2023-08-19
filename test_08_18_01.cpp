#include <stdio.h>

int main()
{
    const char* p = "abcdef";//常量字符串不能修改
    printf("%c\n", *p);
    printf("%s\n", p);
    return 0;
}