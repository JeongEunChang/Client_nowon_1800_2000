#include <stdio.h>

// strcmp()

int OperationCount;

void sum(int a, int b)
{
	printf("연산 결과는 %d 입니다.\n", a + b);
	printf("OperationCount는 \"%d\"입니다.\n", OperationCount);
	OperationCount++;
	printf("______________________________________________________________\n\n\n");
}

int sub(int a, int b)
{
	printf("연산 결과는 %d 입니다.\n", a - b);
	printf("OperationCount는 \"%d\"입니다.\n", OperationCount);
	OperationCount++;
	printf("______________________________________________________________\n\n\n");
}

int div(float a, float b)
{

	printf("연산 결과는 %f 이며, 이 값은 근사치입니다.\n", a / b);
	printf("OperationCount는 \"%d\"입니다.\n", OperationCount);
	OperationCount++;
	printf("______________________________________________________________\n");
}

int mul(int a, int b)
{
	printf("연산 결과는 %d 입니다.\n", a * b);
	printf("OperationCount는 \"%d\"입니다.\n", OperationCount);
	OperationCount++;
	printf("______________________________________________________________\n\n\n");
}

int mod(int a, int b)
{
	printf("연산 결과는 %d 입니다.\n", a % b);
	printf("OperationCount는 \"%d\"입니다.\n", OperationCount);
	OperationCount++;
	printf("______________________________________________________________\n\n\n");
}

int main(void)
{
	char index[10];
	int a = 0;
	int b = 0;
	
	while (1)
	{
		printf("______________________________________________________________\n");
		printf("sum 또는 sub 또는 div 또는 mul 또는 mod 를 입력해주세요.\n");
		scanf_s("%s", index, 4);
		printf("정수 2개를 입력해주세요.\n");
			scanf_s("%d %d", &a, &b);

		if ((index[0] == 's') && (index[1] == 'u') && (index[2] == 'm'))
			sum(a, b);

		else if ((index[0] == 's') && (index[1] == 'u') && (index[2] == 'b'))
			sub(a, b);

		else if ((index[0] == 'd') && (index[1] == 'i') && (index[2] == 'v'))
			div(a, b);

		else if ((index[0] == 'm') && (index[1] == 'u') && (index[2] == 'l'))
			mul(a, b);

		else if ((index[0] == 'm') && (index[1] == 'o') && (index[2] == 'd'))
			mod(a, b);

		else
		{
			printf("제대로 다시 입력해주세요.\n");
			printf("______________________________________________________________\n\n\n");
			continue;
		}
	}

	return 0;
}