#include <stdio.h>

typedef struct Stu
{
    //成员变量
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}stu;

int main()
{
    Stu s1 = {"张三", 20, "12312341234", "男"};
    struct Stu s2 = {"李四", 18, "32132103210", "男"};
    return 0;
}