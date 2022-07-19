#include <stdio.h>

int main() {
	int num = 300; 

	if (num < 100) { // 조건이 만족되어야만
		printf("num은 100보다 작습니다.");
	} else { // 조건이 만족되지 않을 때
		printf("num은 100보다 큽니다.");
	}

	return 0;
}