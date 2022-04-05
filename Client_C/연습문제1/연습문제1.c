#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    // 입력 문자열ㅇ르 저장하는 예시
    char input[100];
    int count = 3;
    char** spp;


    spp = (char**)malloc(count * sizeof(char*));

    if (spp == NULL) exit(1);

    for (int i = 0; i < count; i++)
    {
        scanf("%s", input);
        spp[i] = (char*)malloc(strlen(input) + 1);
        strcpy(spp[i], input);
    }

    for (int i = 0; i < count; i++)
    {
        printf("%s (%d)\n", spp[i], strlen(spp[i]));
        free(spp[i]);
    }

    free(spp);

    return 0;
}