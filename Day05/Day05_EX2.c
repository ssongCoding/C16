#include <stdio.h>

int main() {
	int num = 5;

	// ���� �ݺ� = ���� ����(loop)
	while (num < 10) { // ������ �����ϴ� ����
		printf("hi\n");
		num = num + 2;
	}

	printf("while�� ��������");
	return 0;
}