#include <stdio.h>

int main() {

	int age = 75;

	if (age >= 75) {
		printf("백신 5차 접종 대상자입니다.");
	} else if (age >= 70) {
		printf("백신 4차 접종 대상자입니다.");
	}

	return 0;
}