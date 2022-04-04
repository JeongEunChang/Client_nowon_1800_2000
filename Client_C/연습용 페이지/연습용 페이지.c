#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>


int main()
{
    int** a;
    int* b;
    int c = 10;

    a = &b;
    b = &c;

    printf("%d", b[0]);




    return 0;
}