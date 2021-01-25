#include<stdio.h>
int main(void)
{
	int n;
	printf("请输入一个数：");
	scanf_s("%d", &n);
	if (n % 3 == 0 && n % 5 == 0)
		printf("这个数可以同时被3和5整除");
	else
		printf("这个数不能同时被3和5整除");
	return 0;

}