#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

typedef struct employee {
	int name;
	int work;
}employee;


int main() {
	int arr[8][7] = { {2,4,3,5,5,8,8},{7,3,4,3,3,4,4},{3,3,4,3,3,2,2},{9,3,4,7,3,4,1},{3,5,4,3,6,3,8},{3,4,4,6,3,4,4},{3,7,4,8,3,8,4},{6,3,5,9,2,7,9} };
	employee s[20] = { 0, };
	int tempname;
	int tempwork;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 7; j++) {
			s[i].name = i;
			s[i].work += arr[i][j];
		}
	}

	for (int i = 0; i < 20 - 1; i++)
	{
		for (int j = 0; j < 20 - i - 1; j++)
		{

			if (s[j].work < s[j + 1].work)
			{
				tempname = s[j].name;
				tempwork = s[j].work;
				s[j].name = s[j + 1].name;
				s[j].work = s[j + 1].work;
				s[j + 1].name = tempname;
				s[j + 1].work = tempwork;
			}
		}
	}



	for (int i = 0; i < 8; i++) {
		printf("employee %d:   ", s[i].name);
		printf("%d \n", s[i].work);
	}
}