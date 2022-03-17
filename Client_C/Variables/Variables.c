#include <stdio.h>

int main(void)
{
	// 키워드 (예약어)
	// 내부적으로 문법을 위한 용도로 정의되어 있는 단어
	// 변수 이름으로 키워드는 사용할 수 없다



	// 정수형 변수
	unsigned int ui;// 4byte, 부호가 없는 정수 자료형 (다른 자료형에도 사용 가능)
	short s; // 2byte, 부호가 있는 정수 자료형
	int i; // 4byte, 부호가 있는 정수 자료형
	long ㅣ; // 4byte, 부호가 있는 정수 자료형
	long long ll; // 8byte, 부호가 있는 정수 자료형
	
	// 문자형 변수
	char c; // 1byte, 문자 자료형

	// 실수형 변수
	float f; // 4byte, 부호가 있는 실수 자료형
	double d; // 8byte, 부호가 있는 실수 자료형
	long double ld; // 8byte 이상 (운영체제에 따라 다름), 부호가 있는 실수

	return 0;
}