#include <stdio.h>

double sum(double a, double b)
{
    return a + b;
}

double sub(double a, double b)
{
    return a - b;
}

double div(double a, double b)
{
    return a / b;
}

double mul(double a, double b)
{
    return a * b;
}

int main(void)
{
    double (*pOP)(double, double) = NULL;
    char op[20]; // 명령어 입력을 받을 문자열
    printf("연산 명령어를 입력하세요 (sum, sub, dic, mul)");
    scanf_s("%s", &op, 4);

    if ((op[0] == 's') && (op[1] == 'u') && (op[2] == 'm')) pOP = sum;

    else if ((op[0] == 's') && (op[1] == 'u') && (op[2] == 'b')) pOP = sub;

    else if ((op[0] == 'd') && (op[1] == 'i') && (op[2] == 'v')) pOP = div;

    else if ((op[0] == 'm') && (op[1] == 'u') && (op[2] == 'l')) pOP = mul;

    printf("3과 7의 연산 결과는 : %lf\n", pOP(1.0, 5.0));

    return 0;
}