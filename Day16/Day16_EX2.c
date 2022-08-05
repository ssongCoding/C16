/*
	정수 n 입력
	3의 배수마다 박수치는 거 (숫자를 말하지말고)
	"짝"

	출력 : 1 2 짝 4 5 짝 7 8 짝 ... n
*/

#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) { // 3의 배수면
			printf("짝! ");
		}
		else {
			printf("%d ", i);
		}
	}

	return 0;
}