#include <stdio.h>
int main()
{
	int num;
	int i = 0;
	scanf_s("%d", &num);
	do
	{
		printf("�޷��Դϴ�.  %d\n", i);
		i++;
	} while (i <= num);
	return 0;
}