#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    char arr1[] = "Happy Chinese New Year!";
    char arr2[] = "                       ";
    int left = 0;
    int right = strlen(arr1)-1;

    while(left<=right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n", arr2);
        Sleep(100);
        system("cls");
        left++;
        right--;
    }

    printf("%s\n", arr2);
    return 0;
}