#include <stdio.h>

int GetFactorial(int n)
{
	if (n == 1)
		return 1;;

	return GetFactorial(n - 1) * n;

}

int main(void)
{
	// 함수 포인터의 형태
	// 반환형 (*함수 포인터 변수 이름)(파라미터 1자료형 (파라미터1-생략가능)...)
	int (*pf)(int) = GetFactorial;// 오른쪽에는 매개면수, 변수 이름은 생략 가능

	int a = GetFactorial(5);

	printf("%d\n", a);
	printf("%d\n", pf(5));

	return 0;
}