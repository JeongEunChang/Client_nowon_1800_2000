#include <stdio.h>

// & : 주소 연산자
// * : 간접 참조 연산자
// 주소 앞에 붙어서 해당 주소의 값을 참조함
// 직접참조 : 값을 직접 참조하는 걸 직접 참조라고 함 ( 변수 R value 사용 )




int main(void)
{

	int x[10];
	int a = 0;
	int* b;

	b = &a;

	printf("%d\n", *b);
	printf("%d\n", b);
	printf("%d", *x+1);








	return 0;
}