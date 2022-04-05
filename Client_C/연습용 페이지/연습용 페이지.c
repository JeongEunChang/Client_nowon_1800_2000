#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>


int main()
{
    char a[100] = "asdfasdfasd";
    char* p = "hello";
    strcpy(a[0], '5');
    printf("%s\n", a);
    return 0;
}