#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	char week[7] = { '��','��','ȭ','��','��','��','��'};
	int month[35] = {0, };
	int point[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int ques, count = 1;

	printf("��� ���� �Է�: ");
	scanf("%d", &ques);
	
	for (int i = 0; i < 7; i++) {
		printf("%c \t", week[i]);
	}
	printf("\n");
	
	if (ques >= 2) {
		for (int i = 0; i < ques; i++) {
			count = count + point[i];
		}
		count = count % 7;
	}

	for (int i = 0; i < count; i++) {
		month[i] = 0;
	}

	for (int i = 0; i < 35; i++) {
			if (month[i] == 0) {
				printf("    ");
			}
			else {
				printf("%2d \t", i - count);
			}
			if (i > 10) {
				if (month[i] == 0) {
					break;
				}
			}
		}
		printf("\n");
	}

