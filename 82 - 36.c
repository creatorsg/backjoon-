#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a, b;
    char c;
    while (1) {
        printf("수식 입력: ");
        scanf("%d %c %d", &a, &c, &b);

        switch (c) {
            case '+':
                printf("%d + %d = %d\n", a, b, a + b);
                break;
            case '-':
                printf("%d - %d = %d\n", a, b, a - b);
                break;
            case '*':
                printf("%d x %d = %d\n", a, b, a * b);
                break;
            case '/':
                printf("%d / %d = %d\n", a, b, a / b);
                break;
        }

    }
}