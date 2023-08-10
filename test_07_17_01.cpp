#include <stdio.h>

int main()
{
    int arr[] = {1,3,6,7,9,11,15,20,23,33};
    int k = 11;
    
    int sz = sizeof(arr)/sizeof(arr[0]);
    int left = 0;
    int right = sz-1;
    
    while(left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid] > k)
        {
            right = mid-1;
        }
        else if(arr[mid] < k)
        {
            left = mid+1;
        }
        else
        {
            printf("知道了，下标是: %d\n", mid);
            break;
        }
        if(left>right)
        {
            printf("找不到\n");
        }
    }
    return 0;
}