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

struct student {
    char name[20];
    int math;
    int korean;
    int english;
    int average;
};

int main(void)
{
    // 형태 : 
   //  struct 구조체 자료형 이름 {

        //멤버 선언
    //};
    /*struct Coordk coordk;
    coordk.x = 5;
    coordk.y = 10;



    struct Coord coord1;
    coord1.x = 3;
    coord1.y = 4;
    struct Coord coord2;


    coord2 = coord1;

    printf("%d %d %d %d", coordk.x, coordk.y, coord1.x, coord1.y);*/

    // .연산자 (멤버 연산자)
    struct student studentA;
    struct student* studentP;

    strcpy(studentA.name, "Likee");
    studentA.english = 80;
    studentA.korean = 60;
    studentA.math = 40;
    studentA.average = (double)(studentA.english + studentA.korean + studentA.math + studentA.math) / 3.0;

   // printf("%s\n", studentA.name);

    //studentP = &studentA;

     // -> 연산자 ( 간접멤버연산자 : 구조체 포인터 변수의 멤버에 접근하는 연산자 )
    //studentP->average;

    /*printf("%d\n", &studentP);
    printf("%d\n", studentP);
    printf("%d\n", &studentA);
    printf("%d\n", studentP);*/

    // 바이트 얼라이언트

    // 비트필드
    // 메모리 낭비를 줄일 수 있는 방법으로, 첫번 째 멤버부터 순차적으로 비트를 할당 할 수 있다
    // 단, 값이 해당 비트수를 넘어가게 되면, 오버플로우가 발생하니 유의해서 사용해야 한다
    // unsigned int* tmpHour = &t1.hour; 비트필드의 주소에는 접근할 수 없다 -> 반환형이 int 인데, hour 은 비트 단위이기 때문에

    //struct Time {
    //    unsigned int sec : 6; // LSB ~ Bit5
    //    unsigned int min : 6; // Bit6 ~ Bit11
    //    unsigned int hour : 5; // Bit12 ~ Bit16
    //    unsigned int : 10; // 패딩비트 인위적으로 추가
    //};

    struct student studentB = {
        {"Jerry"}, 
        {55}, 
        {32}, 
        {(double)(55 + 65 + 32) / 3.0}
    };

    /*struct Time t1;
    t1.min = 10;
    t1.hour = 10;
    t1.sec = 10;*/

    //printf("%d", sizeof(t1));


    struct StudentList {
        struct student students[2];
        int num;
    } studentList;

    // 구조체를 멤버로 가지는 구조체

    studentList.num = 3;
    studentList.students[0] = studentB;
    studentList.students[1] = studentA;

    printf("%s\n", studentList.students[0].name);

    return 0;
}

// 구조체를 스왑하는 함수