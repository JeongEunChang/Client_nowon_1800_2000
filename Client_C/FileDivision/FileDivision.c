#include <stdio.h>
#include "SumFunctions.h"
#include "SubFunctions.h"
#include "OperationFunctions.h"


// static (정적) 키워드
// 메모리 동적 할당을 불가능 하게 하는 키워드
// 인스턴스화가 불가능 하게 만드는 키워드

// 정적 전역 변수
// 다른 소스파일에서 참조할 수 없는 전역변수
// static int opCount;

int opCount;

int main()
{
	printf("%d\n", sum_int(1, 2));
	printf("%d\n", sub_int(1, 2));
	//printf("%d\n", sum_double(1.0, 2.0));
	//printf("%d\n", sub_double(1.0, 2.0));
	printf("%d\n", opCount);

	return 0;
}