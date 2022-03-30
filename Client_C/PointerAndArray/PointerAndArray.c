#include <stdio.h>

void print(int A[])
{
	for (int i = 0; i < 6; i++)
	{

		printf("%d\n", A[i]);

	}

}

int main(void)
{
    // 배열을 선언하게 되면
	// 배열이 메모리에 할당될 때
	// a 라는 변수명을 컴파일 할 때 포인터형 변수로 바꿈
	// 즉 배열은 앞이 포인터(*) 가 붙지 않아도 포인터 변수임

	//int arr[6] = { 10, 20, 30, 40, 50, 60 };
	//printf("%d\n", arr);
	//printf("%d\n", arr[0]); // arr[index] 는 변수 형태
	//printf("%d\n", &arr[0]);
	//printf("%d\n", &arr[1]);

	//int* p = &arr;

	// 배열의 연산
	//printf("%d\n", arr + 4); // 의미 : arr 주소에 4 * sizeof(arr 자료형)

	//printf("%d\n", arr);
	//printf("%d\n", p);
	//printf("%d\n", &arr);
	//printf("%d\n", &p);
	//printf("%d\n", &p[0]);


	//int a = 5;
	//int b = 10;

	//int *pa = &a;
	//int* pb = &b;

	// printf("%d", pa - pb);

	// 포인터 간의 덧셈은 불가능 - 오버플로우 등등 때문에
	// 포인터 간의 뺄셈은 가능 = 주소 간의 인덱스 차이를 반환
	// 뺄셈의 결과 값이 음수면. 해당 인덱스 * 자료형 byte 수 만큼 주소가 앞서있다

	// 포인터 간의 관계연산

	// 포인터의 덧셈
	//printf("%d\n", *p++);
	//printf("%d\n", *(p++));
	//printf("%d\n", *(++p));
	//printf("%d\n", ++*p);

	//print(arr);
	return 0;
}