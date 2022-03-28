#include <stdio.h>

int factorial(int a)
{
	if (a < 1)
	{
		return 1;
	}
	return factorial(a - 1) * a;
}





int main(void)
{
	int x = 0;
	int y = 0;

	printf("숫자를 입력해 주세요!\n");
	scanf_s("%d", &x);

	y = factorial(x);

	printf("%d", y);

	return 0;
}