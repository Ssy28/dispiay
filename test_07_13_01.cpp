#include <stdio.h>

int main()
{
    int age = 20;
    if(age<12)
        printf("幼年\n");
    else if(age>=12&&age<18)
        printf("青年\n");
    else if(age>=18&&age<50)
        printf("成年\n");
    else
        printf("老年\n");
    return 0;
}