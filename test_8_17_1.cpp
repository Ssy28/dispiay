#include <stdio.h>

int main()
{
    int n = 9;
    float *pFloat = (float *)&n;
    printf("n的值为: %d\n", n);
    printf("*pFloat的值为: %f\n", *pFloat);
    //整形与浮点数的存储方式不同
    //浮点数的存储：(-1)^s * m * 2^e ; 存储S、M、E
    //9.0: (-1)^0 * 1.001 * 2^3
    *pFloat = 9.0;
    printf("num的值为: %d\n", n);
    printf("*pFloat的值为: %f\n", *pFloat);
    return 0;
}