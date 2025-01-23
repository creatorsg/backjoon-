#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


int main() {
	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
	int num, prid;

	while (1) {
		printf("도서관 좌석 배치 프로그램입니다.\n");
		printf("현재 빈자리입니다.\n");
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				if (arr[i][j] == 0) {
					printf("   \t");
				}
				else {
					printf("%d \t", arr[i][j]);
				}
			}
			printf("\n");
		}

		printf("어떤 자리를 예약하시겠습니까? (숫자) : ");
		scanf("%d", &num);

		prid = 0;

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				if (arr[i][j] == num) {
					printf("자리가 존재합니다. 감사합니다.\n");
					arr[i][j] = 0;
					prid = 1;
					break;
				}
			}
		}

		if (prid == 0) {
			printf("자리가 존재하지 않습니다. 다시 입력해주세요.\n");
		}
	}
}