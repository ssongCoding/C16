#include <stdio.h>

int main() {

	int score1, score2, score3;
	int score[3]; // �� ĭ¥�� �迭

	while (1) {
		scanf_s("%d %d %d", &score[0], &score[1], &score[2]);

		if (score1 == 0 && score2 == 0 && score3 == 0) {
			printf("����");
			break;
		}

		int sum = score1 + score2 + score3;
		int ave = sum / 3;

		printf("�� ������ ���(����)�� %d �Դϴ�.\n", ave);
	}
	return 0;
}
/*
 	        �� �� �� ����(����) 
	�Է� : 75 55 100 - ����
	��� : �� ������ ���(����)�� 00 �Դϴ�.

	���� ����
	�� �� �� 0 0 0 ���� �Է� �Ǹ�, ����

	~ 18:18��
*/