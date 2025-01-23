#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
    int seat, fullseat = 0;

    while (1) {
        printf("현재 남은 자리입니다.\n");

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 5; j++) {
                if (arr[i][j] == 0) {
                    printf("  \t");
                }
                else {
                    printf("%d\t", arr[i][j]);
                }
            }
            printf("\n");
        }

        printf("좌석번호를 배치하세요.");
        scanf("%d", &seat);

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 5; j++) {
                if (arr[i][j] == seat) {
                    arr[i][j] = 0;
                    printf("빈자리입니다. 감사합니다.\n");
                    fullseat += 1;
                }
            }
        }

        if (fullseat == 15) {
            printf("좌석이 없습니다. 프로그램을 종료합니다.");
            break;
        }
    }
}
