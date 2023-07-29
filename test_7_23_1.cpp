#include <stdio.h>

//求阶乘
// int Fac1(int x)
// {
//     int i = 1;
//     int ret = 1;
//     for(i=1; i<=x; i++)
//         ret *= i;
//     return ret;
// }
int Fac2(int x)
{
    if(x<=1)
        return 1;
    else
        return x*Fac2(x-1);
}

int main()
{
    int n = 0;
    int ret = 0;
    scanf("%d", &n);
    if(n>=0)
    {
        ret = Fac2(n);
        printf("%d\n", ret);
    }
    else//无法判断浮点数
        printf("输入错误\n");
    return 0;
}
