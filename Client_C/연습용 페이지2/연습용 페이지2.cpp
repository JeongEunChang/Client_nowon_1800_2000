#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>

union JobInfo {
    char schoolName[20];
    char companyName[20];
};

struct KobInfo {
    char schoolName[20];
    char companyName[20];
};
struct Person {
    char name[20];
    union JobInfo jobinfo;
    struct KobInfo kobinfo;
};


int main(void)
{
    int a = 0;
    int b;

    b = &a;

    p
}