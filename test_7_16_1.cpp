#include <stdio.h>

int main()
{
    int i = 0;
    int ret = 1;
    int n = 0;
    int sum = 0;
    scanf("%d", &n);
    int x = n;
    for(n=1; n<=x; n++)
    {
        for(i=1; i<=n; i++)
        {
            ret = ret * i;
        }
        sum = sum + ret;
        ret = 1;
    }
    printf("%d", sum);
    return 0;
}