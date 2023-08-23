#include <stdio.h>

int main()
{
    char* arr1[10] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
    char* (*p1)[10] = &arr1;


    int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int (*p2)[10] = &arr2;
    
    int i = 0;
    for(i=0; i<10; i++)
    {
        printf("%d ", (*p2)[i]);
    }
    printf("\n");
    
    i = 0;
    for(i=0; i<10; i++)
    {
        printf("%d ", *(*p2+i));
    }
    printf("\n");


    int arr3[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p3 = arr3;
    
    i = 0;
    for(i=0; i<10; i++)
    {
        printf("%d ", *(p3+i));
    }

    return 0;
}