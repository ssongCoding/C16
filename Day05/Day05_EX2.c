#include <stdio.h>

int main() {
	int num = 5;

	// 무한 반복 = 무한 루프(loop)
	while (num < 10) { // 조건이 만족하는 동안
		printf("hi\n");
		num = num + 2;
	}

	printf("while문 빠져나옴");
	return 0;
}