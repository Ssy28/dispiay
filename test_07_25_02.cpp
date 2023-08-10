#include <stdio.h>
 
int jump(unsigned int x)
{
	int a=1;
	int b=2;
	int c=0;
    if(x==2)
	    return 2;
	else if(x==1)
	    return 1;
	else
	    while(x>2)
		{
		    c=a+b;
			a=b;
			b=c;
			x--;
		}
	return c;
}
 
int main()
{
    unsigned int step=0;
	printf("请输入台阶数：");
	scanf("%d",&step);
	printf("有%d种跳法\n",jump(step));
	return 0;
}