#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
    int seat, fullseat = 0;

    while (1) {
        printf("���� ���� �ڸ��Դϴ�.\n");

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

        printf("�¼���ȣ�� ��ġ�ϼ���.");
        scanf("%d", &seat);

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 5; j++) {
                if (arr[i][j] == seat) {
                    arr[i][j] = 0;
                    printf("���ڸ��Դϴ�. �����մϴ�.\n");
                    fullseat += 1;
                }
            }
        }

        if (fullseat == 15) {
            printf("�¼��� �����ϴ�. ���α׷��� �����մϴ�.");
            break;
        }
    }
}
