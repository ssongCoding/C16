/*
	int 4개 배열 = 22 44 66 88

	88
	66
	44
	22
*/
#include <stdio.h>

int main() {

	// ~18:05까지 쉬는 시간
	int num[] = { 22, 44, 66, 88 };
	//             0   1   2   3

	int index = 3;
	while (index >= 0) { // 4번 3 2 1 0
		printf("%d\n", num[index]); // 88 66 44 22 
		index = index - 1;
	}

	return 0;
}