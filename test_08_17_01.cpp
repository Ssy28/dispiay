#include <stdio.h>

int main()
{
    int n = 9;
    float *pFloat = (float *)&n;
    printf("n的值为: %d\n", n);//9
    printf("*pFloat的值为: %f\n", *pFloat);//0.000000
    //整形与浮点数的存储方式不同
    //浮点数的存储：(-1)^S * M * 2^E ; 存储S、M、(E+127）的二进制数(因为E可能为负数)
    //9.0: (-1)^0 * 1.001 * 2^3
    *pFloat = 9.0;
    printf("num的值为: %d\n", n);//1091567616
    printf("*pFloat的值为: %f\n", *pFloat);//9.000000
    return 0;
}