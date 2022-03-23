#include <stdio.h>

int main()
{
	// switch - case 조건문 : 경우에 따라 흐름을 제어함
	// 형태
	// switch ( 조건 매개변수 )
	//		case 조건 1 : 조건 매개변수 == 조건1 일 때 실행할 경우
	//		case 조건 2 : 조건 매개변수 == 조건2 일 때 실행할 경우
	//		case 조건 3 : 조건 매개변수 == 조건3 일 때 실행할 경우
	//		default : 그 외

	int n = 3;
	int sum = 0;

	switch (n)
	{
	case 1 :
		sum += 1;

	case 2 :
		sum += 2;

	case 3 :
		sum += 3;

	case 4 :
		sum += 4;

	case 5 :
		sum += 5;

	default :
		break;
	}

	printf("%d\n", sum);


	// 출석 부르기

	char character = 'A';
	switch (character)
	{
	case 'A':
		printf("%c\n", character);
		character += 1;
	case 'B':
		printf("%c\n", character);
		character += 1;
	case 'C':
		printf("%c\n", character);
		character += 1;
	case 'D':
		printf("%c\n", character);
		character += 1;
	default:
		printf("Who are you\n");
		return 0;
	}

	printf("%d\n", character);


}
