#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct student{
	char name[10];
	int score;
}student;

int main() {
	student s[5];
	int reward[5] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++) {
		scanf("%s %d ", s[i].name, &s[i].score);
	}
	
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5; j++) {
			if (s[i].score < s[j].score) {
				int temp = reward[i];
				reward[i] = reward[j];
				reward[j] = temp;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		printf("%s %d %d\n", s[i].name, s[i].score, reward[i]);
	}
}