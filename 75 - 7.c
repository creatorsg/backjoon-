#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct Students {
    char name[20];
    int math;
    int eng;
}Students;

int main()
{
    Students s[20] = { {"김강찬",90,80},{"이순신",85,88},{"유관순",70,65} };
    int math, eng;

    for (int i = 0; i < 3; i++) {
        if (s[i].math > s[i + 1].math) {
            math = i;
        }
    }

    for (int i = 0; i < 2; i++) {
        if (s[i].eng > s[i + 1].eng) {
            eng = i;
        }
    }
    
    printf("%s", s[math].name);
    printf("%s", s[eng].name);

}