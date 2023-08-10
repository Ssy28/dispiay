#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0;
    char password[20] = {0};

    for(i=0; i<3; i++)
    {
        printf("请输入密码:>");
        scanf("%s", password);
        if(strcmp(password, "123456") == 0)
        {
            printf("密码正确\n");
            break;
        }
        else
            printf("密码错误\n");
    }

    if(3 == i)
        printf("三次机会已用完\n");
    return 0;
}