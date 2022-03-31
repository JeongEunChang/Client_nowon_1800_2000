#include <stdio.h>

void change(struct first, struct second)
{


}




int main(void)
{
    struct A {
        int a;
        int b;
        int c;
    };

    struct B {
        int x;
        int y;
        int z;
    };

    struct A first;
    first.a = 10;
    first.b = 20;
    first.c = 30;

    struct B second;
    second.x = 1;
    second.y = 2;
    second.z = 3;

    change(first, second);


    return 0;
}



//  구조체 내부에서 변수 이름이 겹칠 경우는 어떻게 됨?