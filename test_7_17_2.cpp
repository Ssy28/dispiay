#include <stdio.h>

int main()
{
    int arr[] = {1,84,684,15,64,87,4,6,54,98};
    int k = 87;
    int i = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);
    for(i=0; i<sz; i++)
    {
        if(k == arr[i])
        {
            printf("知道了，下标是: %d", i);
            break;
        }
    }
    if(sz == i)
        printf("找不到\n");
    return 0;
}