/*
	���� 1�� �Է�
	�Է°����� �۰ų� ���� ¦������ �� ���� ����
	������ּ���.
*/
#include <stdio.h>

int main() {
	int num = 5;
	int sum = 0;

	for (int i = 1; i * 2 <= num; i++) {
		sum = sum + i * 2;
	}
	// 6 -> 2 + 4 + 6
	//     1*2 2*2 3*2
	
	/*for (int i = 2; i <= num; i = i + 2) {
		sum = sum + i;
	}*/

	/*for (int i = 1; i <= num; i++) { // 1 2 3 4 5
		if (i % 2 == 0) {
			sum = sum + i;
		}
	}*/

	printf("%d", sum);

	return 0;
}