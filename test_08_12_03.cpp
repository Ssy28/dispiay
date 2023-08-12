#include <stdio.h>

typedef struct Stu
{
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}Stu;

void Print1(Stu tmp)
{
    printf("name: %s\n", tmp.name);
    printf("age:  %d\n", tmp.age);
    printf("tele: %s\n", tmp.tele);
    printf("sex:  %s\n", tmp.sex);
}

void Print2(Stu* ps)
{
    printf("name: %s\n", ps->name);
    printf("age:  %d\n", ps->age);
    printf("tele: %s\n", ps->tele);
    printf("sex:  %s\n", ps->sex);
}

int main()
{
    Stu s = {"张三", 20, "12312341234", "男"};
    Print1(s);
    Print2(&s);
    return 0;
}
//首选Print2函数
//结构体传参的时候，要传结构体的地址