#include <stdio.h>

int main_2(void) {
	int num = 0;
	scanf_s("%d", &num);
	int w = 0;		//λ��
	while (num) {
		w++;
		printf("%d", num % 10);
		num = num / 10;
	}
	printf("\nλ��Ϊ%d", w);
	return 0;

}