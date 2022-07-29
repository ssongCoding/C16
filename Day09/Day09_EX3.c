#include <stdio.h>

int main() {
	/*
		int i = 3;
		i <= 7;
		i = i + 1;
	*/
	
	//~5:55 쉬는 시간
	for (int i = 3; i++ <= 7;    ) {
		printf("%d\n", i);
	}

	for (int i = 4; i <= 8; i = i + 2) {
		printf("%d\n", i);
	}


	int i = 3; // 버려지는 값이 되지 않게!
	//printf("%d", i);

	while (i++ <= 7) {
		printf("%d\n", i); // i++, ++i

		// ++i, i++
	}

	return 0;
}