#include <stdio.h>

int main() {
	/*
		int i = 3;
		i <= 7;
		i = i + 1;
	*/
	
	//~5:55 ���� �ð�
	for (int i = 3; i++ <= 7;    ) {
		printf("%d\n", i);
	}

	for (int i = 4; i <= 8; i = i + 2) {
		printf("%d\n", i);
	}


	int i = 3; // �������� ���� ���� �ʰ�!
	//printf("%d", i);

	while (i++ <= 7) {
		printf("%d\n", i); // i++, ++i

		// ++i, i++
	}

	return 0;
}