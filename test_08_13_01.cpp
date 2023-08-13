#include <stdio.h>

int check_sys()
{
    int i = 1;
    return (*(char*)&i);
}

int main()
{
    int ret = check_sys();
    if(1 == ret)
    {
        printf("小端\n");
    }
    else
    {
        printf("大端\n");
    }
    return 0;
}