#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

#define STARTX 4
#define STARTY 4
#define WIDTH 40
#define HEIGHT 15
int Delay = 100;

void gotoxy(int x, int y)
{
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

void HideCursor()
{
	CONSOLE_CURSOR_INFO CurInfo;
	CurInfo.dwSize = 1;
	CurInfo.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);
}

void main() {
	int x1 = 3, y1 = 3, x2 = 44, y2 = 19;
	int precount, count = 0, start = 0;
	int x = 1, y = 1, startx, starty;
	srand((unsigned int)time(NULL));
	startx = rand() % 41 + 3;
	starty = rand() % 16 + 3;
	HideCursor();


	printf("   \n");
	printf("   \n");
	printf("   ");
	printf("--------------------------------------------\n");
	printf("   ");
	printf("|                                          |\n");
	printf("   ");
	printf("|                                          |\n");
	printf("   ");
	printf("|                                          |\n");
	printf("   ");
	printf("|                                          |\n");
	printf("   ");
	printf("|                                          |\n");
	printf("   ");
	printf("|                                          |\n");
	printf("   ");
	printf("|                                          |\n");
	printf("   ");
	printf("|                                          |\n");
	printf("   ");
	printf("|                                          |\n");
	printf("   ");
	printf("|                                          |\n");
	printf("   ");
	printf("|                                          |\n");
	printf("   ");
	printf("|                                          |\n");
	printf("   ");
	printf("|                                          |\n");
	printf("   ");
	printf("|                                          |\n");
	printf("   ");
	printf("|                                          |\n");
	printf("   ");
	printf("|                                          |\n");
	printf("   ");
	printf("--------------------------------------------\n");

	while (count != 10) {

		gotoxy(startx, starty);
		printf("*");

		if (startx == 4 || startx == 43) {
			switch (x) {
			case 1:
				x = -1;
				break;
			case -1:
				x = 1;
				break;
			}
		}

		if (starty == 3 || starty == 18) {
			switch (y) {
			case 1:
				y = -1;
				break;
			case -1:
				y = 1;
				break;
			}
		}


		Sleep(Delay);

		gotoxy(startx, starty);
		printf(" ");

		startx += x;
		starty += y;
	}
}