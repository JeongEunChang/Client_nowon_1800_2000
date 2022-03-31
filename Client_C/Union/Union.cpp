#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>

// 공용체 union
// union 에서 가장 사이즈가 큰 멤버의 데이터 크기만큼 공간 할당
// 나머지 멤버들은 해당 공간을 공유함

typedef union _JobInfo {
    char schoolName[20];
    char companyName[20];
} JobInfo;

typedef struct _Person {
    char name[20];
    JobInfo jobinfo;
} Person;

//typedef struct _Person {
//    char name[20];
//    _JobInfo{
//    char schoolName[20];
//    char companyName[20];
//    } jobInfo;

int main(void)
{
    Person a, b;
    

    strcpy(a.name, "Luke");
    strcpy(a.jobinfo.schoolName, "KoreaSchool");
    
    strcpy(b.name, "Dina");
    strcpy(b.jobinfo.companyName, "StrongCompany");

    printf("Luke's schoolName : %s\n", a.jobinfo.schoolName);
    printf("Luke's schoolName : %s\n", a.jobinfo.companyName);
    printf("Dina's schoolName : %s\n", b.jobinfo.companyName);
    printf("Luke's schoolName : %s\n", a.jobinfo.schoolName);

    return 0;
}



//Person a = {
//       {"Luke"},
//       {"KoreaSchool"}
//};
//
//Person b = {
//    {"Dina"},
//    {"StrongCompany"}
//};


// 공용체 크기 관련해서 조사해보기