#include <stdio.h>

int my_strlen(char* str)
{
    char* start = str;
    char* end = str;
    while (*end != '\0')
    {
        end++;
    }
    return end - start;
}

int main()
{
    char arr[] = "hello";
    int len = my_strlen(arr);
    printf("%d", len);
    return 0;
}