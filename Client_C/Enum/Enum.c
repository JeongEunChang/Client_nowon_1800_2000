#include <stdio.h>

// FSM ( Finite State Machine )
// 유한 상태 머신

<<<<<<< HEAD
/*enum JumpState {
	Idle,
	PrepareToJump,
	InFlight,
	Falling,
	OnGround,
}*/;
=======
//enum JumpState {
//	Idle,
//	PrepareToJump,
//	InFlight,
//	Falling,
//	OnGround,
//};
>>>>>>> 474e150c780cf37254afec6109554dad4ff9cbb4

// enum : 열거형, 사용자 정의 자료형을 정의하기 위한 키워드

enum PlayerState {
	Idle,
	Walk,
	Run,
	Attack,
	asb,
	Hurt,
	Jump
};

// 플레이어 상태
// 0. 아무것도 하지 않는 상태
// 1. 걷기
// 2. 달리기
// 3. 공격하기
// 4. 점프하기
// 5. 피격 당하기


int main(void)
{
<<<<<<< HEAD
	int a = 50;
=======
>>>>>>> 474e150c780cf37254afec6109554dad4ff9cbb4
	enum PlayerState playerState ;

	while (1) {

		scanf_s("%d", &playerState);

		switch (playerState) {

		case Idle :
			printf("아무것도 하지 않는 상태");
			break;
		case Walk :
			printf("걷기");
			break;
		case Run :
			printf("달리기");
			break;
		case Attack :
			printf("공격하기");
			break;
		case Jump :
			printf("점프하기");
			break;
		case Hurt :
			printf("피격 당하기");
			break;
		case asb :
			printf("안녕하세요");
			break;
		default:
			printf("무슨 동작인지 모르겠어요ㅠㅠ");
			break;
		}
	}
	
	return 0;
}


// 0으로 초기화 첫ㅅ번째 인덱스로 초기화

// enum 초기화 해주는 이유?