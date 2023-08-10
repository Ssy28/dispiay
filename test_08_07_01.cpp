#include <stdio.h>

int main()
{
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    printf("%d\n", &arr[9] - &arr[0]);
    printf("%d\n", &arr[0] - &arr[9]);
    printf("%d\n", &arr[9] - &arr[9]);
    //指针减指针，得到的是中间的元素个数
    return 0;
}