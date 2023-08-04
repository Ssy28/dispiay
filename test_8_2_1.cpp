#include <stdio.h>

struct Stu
{
    //成员变量
    char name[20];
    int age;
    char id[20];
};

int main()
{
    //使用struct Stu这个类型创造了一个学生对象s1,并初始化
    struct Stu s1 = {"张三", 20, "204310119"};
    struct Stu *ps = &s1;
    // printf("%s\n", (*ps).name);
    // printf("%d\n", (*ps).age);
    // printf("%s\n", (*ps).id);
    printf("%s\n", ps->name);
    printf("%d\n", ps->age);
    printf("%s\n", ps->id);
    // 结构体指针->成员名
    return 0;
}