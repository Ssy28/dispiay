#include <stdio.h>

int main()
{
    int i = 0;
    int ret = 1;
    int n = 0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        ret = ret * i;
    }
    printf("%d", ret);
    return 0;
}