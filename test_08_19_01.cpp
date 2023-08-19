#include <stdio.h>

int main()
{
    char arr1[] = "abcdef";
    char arr2[] = "abcdef";
    char* p1 = "abcdef";//常量字符串不能被修改,地址只存一份
    char *p2 = "abcdef";

    if(arr1 == arr2)
    {
        printf("hehe\n");
    }
    else
    {
        printf("haha\n");
    }

    if(p1 == p1)
    {
        printf("hehe\n");
    }
    else
    {
        printf("haha\n");
    }

    return 0;
}