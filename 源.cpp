#include<stdio.h>
int main(void)
{
	int n;
	printf("������һ������");
	scanf_s("%d", &n);
	if (n % 3 == 0 && n % 5 == 0)
		printf("���������ͬʱ��3��5����");
	else
		printf("���������ͬʱ��3��5����");
	return 0;

}