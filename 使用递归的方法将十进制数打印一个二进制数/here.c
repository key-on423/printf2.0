#include <stdio.h>
int main()
{
	void digun(unsigned long n);
	unsigned long num;
	printf("请输入一个十进制正数我将为你打印他的二进制数\n");
	while (scanf("%lu", &num) == 1)
	{
		printf("他的二进制数为：");
		digun(num);
		printf("\n");
		printf("请输入下一个数字或者输入q来退出\n");
	}
	printf("结束程序\n");
	return 0;
}


void digun(unsigned long n)
{
	int r;
	r = n % 2;//r3：1  r2：0  r1：1
	if (n >= 2)
	digun(n / 2);
	printf("%d", r);
	return;
}