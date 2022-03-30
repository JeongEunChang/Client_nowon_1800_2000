#include <stdio.h>


// 구조체
// 여러 변수들을 멤버로 가질 수 있는 사용자 정의 자료형
struct Coordk{
    int x;
    int y;
};

struct Coord {
    int x;
    int y;
};

int main(void)
{
    // 형태 : 
   //  struct 구조체 자료형 이름 {

        //멤버 선언
    //};
    struct Coordk coordk;
    coordk.x = 5;
    coordk.y = 10;



    struct Coord coord1;
    coord1.x = 3;
    coord1.y = 4;
    struct Coord coord2;

    printf("%d %d %d %d", coordk.x, coordk.y, coord1.x, coord1.y);

    // .연산자 (멤버 연산자)
    


     

    return 0;
}