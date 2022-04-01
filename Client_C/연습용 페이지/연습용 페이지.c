#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>


struct student {
    int math;
    int korean;
    int english;
    char name[20];
    int average;
};

void change(struct student* studentA, struct student* studentB)
{
    struct student a;

    a = *studentA;
    *studentA = *studentB;
    *studentB = a;

}


int main()
{
    struct student studentA;

    struct StudentList {
        struct student students[2];
        int num;
    } studentList;

    strcpy(studentA.name, "Likee");
    studentA.english = 80;
    studentA.korean = 60;
    studentA.math = 40;
    studentA.average = (double)(studentA.english + studentA.korean + studentA.math + studentA.math) / 3.0;

    struct student studentB = { {100}, {55}, {32}, {"Jerry"}, {(double)(55 + 65 + 32) / 3.0}
    };

    struct student* studentAP;
    struct student* studentBP;

    studentAP = &studentA;
    studentBP = &studentB;

    change(studentAP, studentBP);

    printf("%d\n", studentA.math);
    printf("%d\n", studentA.korean);
    printf("%d\n", studentA.english);
    printf("%s\n", studentA.name);
    printf("%d\n\n", studentA.average);

    printf("%d\n", studentB.math);
    printf("%d\n", studentB.korean);
    printf("%d\n", studentB.english);
    printf("%s\n", studentB.name);
    printf("%d\n", studentB.average);

    printf("%d", studentList.students->english)

    return 0;
}