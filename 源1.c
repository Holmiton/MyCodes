#include <stdio.h>

int main_1(void) {
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d * %d = %d, ", i, j, i * j);			
		}
		printf("\n");
	}
	return 0;
}