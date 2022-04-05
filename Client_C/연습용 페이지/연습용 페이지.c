#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>

void FirstCharSwap(char* arr1, char* arr2) {

    char tmpChar = arr1[0];
    arr1[0] = arr2[0];
    arr2[0] = arr1[1];
}

int main()
{
    char** app;



    char a[100] = "asdfasdfasd";
    char b[100] = "qwerqwerqw";
    strcpy(a[0], b[0]);
    printf("%s\n", a);
    return 0;
}