#include <stdio.h>

void move(char A, char C, int n)
{
	printf("把第%d个圆盘从%c--->%c\n", n, A, C);
}

void HanoiTower(char A, char B, char C, int n)
{
	if (n == 1)
	{
		move(A, C, n);
	}
	else
	{
		//将n-1个圆盘从A柱借助于C柱移动到B柱上
		HanoiTower(A, C, B, n - 1);
		//将A柱子最后一个圆盘移动到C柱上
		move(A, C, n);
		//将n-1个圆盘从B柱借助于A柱移动到C柱上
		HanoiTower(B, A, C, n - 1);
	}
}

int main()
{
	int n = 0;
	printf("输入A柱子上的圆盘个数:");
	scanf("%d", &n);
	//将n个圆盘从A柱借助于B柱移动到C柱上
	HanoiTower('A', 'B', 'C', n);
	return 0;
}
