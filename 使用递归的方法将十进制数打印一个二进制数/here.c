#include <stdio.h>
int main()
{
	void digun(unsigned long n);
	unsigned long num;
	printf("������һ��ʮ���������ҽ�Ϊ���ӡ���Ķ�������\n");
	while (scanf("%lu", &num) == 1)
	{
		printf("���Ķ�������Ϊ��");
		digun(num);
		printf("\n");
		printf("��������һ�����ֻ�������q���˳�\n");
	}
	printf("��������\n");
	return 0;
}


void digun(unsigned long n)
{
	int r;
	r = n % 2;//r3��1  r2��0  r1��1
	if (n >= 2)
	digun(n / 2);
	printf("%d", r);
	return;
}