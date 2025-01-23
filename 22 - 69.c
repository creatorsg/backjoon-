#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int goal, score = 0, count = 1;
    int ran1 = 1, ran2 = 100;

    srand((unsigned int)time(NULL));
    goal = rand() % 100 + 1;

    while (goal != score) {
        if (count == 1) {
            printf("%d부터 %d 사이의 숫자를 입력하세요.", ran1, ran2);
        }
        scanf("%d", &score);
        if (goal < score) {
            ran2 = score - 1;
            printf("%d부터 %d 사이의 숫자를 입력하세요.", ran1, ran2);
            count++;
        }
        if (score == goal) {
            break;
        }
        else {
            ran1 = score + 1;
            printf("%d부터 %d 사이의 숫자를 입력하세요.", ran1, ran2);
            count++;
        }
    }
    printf("%d번만에 맞췄습니다.\n", count);

    return 0;
}