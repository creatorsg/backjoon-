#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int plus_even(int n) {
	if (n <= 0) {
		return 0;
	}
	if (n % 2 == 0) { // Â¦¼öÀÏ ¶§
		return n + plus_even(n - 2);
	}
	return plus_even(n - 1);

}


int main() {
	int result, n;
	scanf("%d", &n);
	result = plus_even(n);
	printf("result = %d \n", result);
}

