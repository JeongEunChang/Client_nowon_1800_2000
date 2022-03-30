#include <stdio.h>

void RefreshMaxAndMin(int* arr, int size, int** maxPtr, int** minPtr)
{
    int* max = arr;
    int* min = arr;


    for (int i = 1; i < size; i++)
    {
        if (*max < arr[i])
            max = &arr[i];

        if (*min > arr[i])
            min = &arr[i];
    }

    *maxPtr = max;
    *minPtr = min;

}

int main(void)
{
    int a = 3;
    int* p = &a;
    int** pp = &p;

    /*printf("%d\n", &a);
    printf("%d\n", p);
    printf("%d\n", &p);
    printf("%d\n", pp);

    printf("%d\n", *p);
    printf("%d\n", **pp);
    printf("%d\n", *pp);*/


    int* maxPtr;
    int* minPtr;
    int arr[5] = {3, 2, 4, 2, 6};
     /*함수에서 실행할 내용 :
     maxptr 은 arr 의 가장 큰 값을 가리키고,
     maxptr 은 arr 의 가장 작은 값을 가리키도록*/

    int size = sizeof(arr) / sizeof(int);
    RefreshMaxAndMin(arr, size, &maxPtr, &minPtr);
    printf("최댓값 : %d, 최솟값 : %d\n", *maxPtr, *minPtr);

    return 0;
}