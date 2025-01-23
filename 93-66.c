#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct student {
	char name[10];
	int kor;
	int eng;
	int math;
}student;

int main() {
	int num;
	student s[100] = { 0, };
	scanf("%d", &num);
	printf("%d명의 학생 정보를 입력하세요.\n", num);


	for (int i = 0; i < num; i++) {
		scanf_s("%s", s[i].name, 10);
		scanf_s("%d", &s[i].kor, 10);
		scanf_s("%d", &s[i].eng, 10);
		scanf_s("%d", &s[i].math, 10);
	}

	for (int i = 0; i < num; i++) {
		printf("%s %d %d %d %d\n", s[i].name, s[i].kor, s[i].eng, s[i].math, s[i].kor + s[i].eng + s[i].math);
	}

}