#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


int main() {
	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
	int num, prid;

	while (1) {
		printf("������ �¼� ��ġ ���α׷��Դϴ�.\n");
		printf("���� ���ڸ��Դϴ�.\n");
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

		printf("� �ڸ��� �����Ͻðڽ��ϱ�? (����) : ");
		scanf("%d", &num);

		prid = 0;

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				if (arr[i][j] == num) {
					printf("�ڸ��� �����մϴ�. �����մϴ�.\n");
					arr[i][j] = 0;
					prid = 1;
					break;
				}
			}
		}

		if (prid == 0) {
			printf("�ڸ��� �������� �ʽ��ϴ�. �ٽ� �Է����ּ���.\n");
		}
	}
}