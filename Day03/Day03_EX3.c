#include <stdio.h>

int main() {
	int corona = 65; // �ڷγ� Ȯ���� ��

	if (corona > 100) {
		printf("�Ÿ��α� 4�ܰ� �Դϴ�.");
	} else if (corona > 75) { // 100 >= corona > 75
		printf("�Ÿ��α� 3�ܰ� �Դϴ�.");
	} else if (corona > 50) { // 75>= corona > 50
		printf("�Ÿ��α� 2�ܰ� �Դϴ�.");
	} else if (corona > 20) { // 50 >= corona > 20
		printf("�Ÿ��α� 1�ܰ� �Դϴ�.");
	} else { // 20 >= corona
		printf("�Ÿ��α⸦ �������� �ʽ��ϴ�.");
	}

	return 0;
}