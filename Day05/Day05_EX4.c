#include <stdio.h>

int main() {

	int n;

	// ~18:08까지 쉬는 시간 입니다!
	while (1) { // true --> 무한 루프
		scanf_s("%d", &n);

		if (n == -1) {
			break;
		}
	}

	return 0;
}