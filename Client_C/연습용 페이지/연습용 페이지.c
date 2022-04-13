#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
    FILE* practice = fopen("practice.txt", "w+");

    if (practice == NULL) {
        printf("fail to open a.txt file.");
        exit(1);
    }
    

    //fputc('s', practice);

    printf("%c", fgetc(practice));

    fputc('s', practice);
    printf("%c", fgetc(practice));
    fclose(practice);

    

    return 0;
}