#include <stdio.h>

void Add(int* p)
{
    (*p)++;
}

int main()
{
    int num = 0;
    Add(&num);
    printf("%d\n", num);
    Add(&num);
    printf("%d\n", num);
    Add(&num);
    printf("%d\n", num);
    return 0;
}