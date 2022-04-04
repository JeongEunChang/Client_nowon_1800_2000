#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>


int main()
{
<<<<<<< HEAD
    struct student studentA;

    struct StudentList {
        struct student students[2];
        int num;
    } studentList;)

    strcpy(studentA.name, "Likee");
    studentA.english = 80;
    studentA.korean = 60;
    studentA.math = 40;
    studentA.average = (double)(studentA.english + studentA.korean + studentA.math + studentA.math) / 3.0;

    struct student studentB = { {100}, {55}, {32}, {"Jerry"}, {(double)(55 + 65 + 32) / 3.0}
    };

    struct student* studentAP;
    struct student* studentBP;
=======
    int** a;
    int* b;
    int c = 10;
>>>>>>> 474e150c780cf37254afec6109554dad4ff9cbb4

    a = &b;
    b = &c;

    printf("%d", b[0]);




    return 0;
}