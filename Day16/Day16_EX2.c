/*
	���� n �Է�
	3�� ������� �ڼ�ġ�� �� (���ڸ� ����������)
	"¦"

	��� : 1 2 ¦ 4 5 ¦ 7 8 ¦ ... n
*/

#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) { // 3�� �����
			printf("¦! ");
		}
		else {
			printf("%d ", i);
		}
	}

	return 0;
}