//乱序排列为升序
#include <stdio.h>

void bubble_sort(int arr[], int sz)
{
    //确定冒泡排序的趟数
    int i = 0;
    for(i=0; i<sz-1; i++)
    {
        //每一趟冒泡排序
        int j = 0;
        for(j = 0; j < sz-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

int main()
{
    int arr[] = {8,64,13,48,3,486,15,48,3,9};
    int i = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);
    //对arr进行排序，排成升序
    bubble_sort(arr, sz);
    for(i=0; i<sz; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}