#include <stdio.h>

// & : 주소 연산자
// * : 간접 참조 연산자
// 주소 앞에 붙어서 해당 주소의 값을 참조함
// 직접참조 : 값을 직접 참조하는 걸 직접 참조라고 함 ( 변수 R value 사용 )


// 대입연산자를 사용하지 않고 *pd1, *pd2, d1, d2 의 조합으로 6을 출력할 수 있는
// 4가지 경우를 써보세요 ( 각 변수는 연산에 한 번씩만 사용 가능 )

int main(void)
{
	double* pd1, * pd2, d1, d2;
	d1 = 2.0;
	d2 = 4.0;
	pd1 = &d1;
	pd2 = &d2;

	printf("%f\n", *pd1 + *pd2);
	printf("%f\n", *&d1 + *pd2);
	printf("%f\n", *&d1 + *&d2);
	printf("%f\n", d1 + d2);

	printf("%d\n", &d1);
	printf("%d\n", &*pd1);
	printf("%d\n", pd1);

	// 상수형 포인터
	// 형태 : const 자료형
	// 포인터를 바꿀 수 없다는 게 아니라, 포인터가 가리키는 해당 주소의 값을 바꿀 수 없도록 함
	// 즉, 간접참조연산을 L-value 로 사용할 수 없다 = 간접참조연산으로 배정된 주소 내부의 값을 바꿀 수 없다
	// int n1 = 0, n2 = 0;
	// const int* pa = &n1;
	// pa = &n2;
	// *pa = 20; 불가능
	// n1 = *pa; 가능
	// const (상수형) 의 사용목적 : 변하지 않으면서 특정 값을 보기 편하게 나타낼 때 사용 /// 해당 변수명으로 걸러내기 때문에, 주소 내부에서는 변경 가능(일반 const의 가능)

	// const int n2; (static 도 가능)
	// int* pa = &n2
	// *pa = 50   -> 가능

	// 다른 자료형 포인터 간의 대입 ex-> p = pd 가능
	// L-value 포인터 자료형이 더 크다면 할당 받지 못한 공간에 접근하는 위험한 상황이
	// 발생할 수 있으므로 주의 해야 함. 컴파일 에러는 아님
	p = pd;
	*p = 3;
	printf("size of *p %d\n", sizeof(*p));
	printf("%d\n", *p);
	pd = p;
	*pd = 3.5;
	printf("size of *pd %d\n", sizeof(*pd));
	printf("%lf\n", *pd);


	// 포인터 변수 초기화 여부 시험
	int* pc;
	if (pc != NULL)
		printf("%p", pc);

	return 0;
}