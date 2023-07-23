#include <stdio.h>

int main()
{ 
  int n;
  int set;
  scanf("%d", &n);
  set = 2-n%2;
  if(set==1)
    printf("奇数\n");
  else
    printf("偶数\n");
  return 0;
}