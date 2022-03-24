#include <stdio.h>

int main(void)
{
	// scanf (서식문자열, 변수값 참조)
	// 입력이 들어올 때까지 대기하다가 들어오면 참조한 변수에 해당 입력값을 대입함
	// & = 참조 연산자 : 변수 앞에 붙어서 해당 변수의 주소값을 참조하는 연산자
	
	// #%#%#%#%#%     scnaf_s("%s", str, 10 * sizeof(char));          $@%@$%@$%@%$@%

	char str[20] = "sadfasdf";
	int a[5] = { 1, 2, 3, 4, 5 };


	printf("%d\n", *a+1);


	printf("%f", 80.0 / 5.0);




	// sizeof 연산자
	// 사용형태 : sizeof(자료형)
	// 자료형에 해당하는 데이터 크기를 반환함
	// 10*sizeof()










	return 0;
}