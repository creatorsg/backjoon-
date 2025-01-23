#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, biggest;

    scanf("%d %d", &a,&b);

    for (int i = 1; i <= a && i <= b; ++i)
    {
        if (a % i == 0 && b % i == 0)
            biggest = i;
    }

    printf("%d 와 %d의 최대 공약수: %d\n", a, b, biggest);

    return 0;
