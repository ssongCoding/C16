/*
	printf("�ȳ��ϼ���.\n");
	printf("�ȳ��ϼ���.\n");
	printf("�ȳ��ϼ���.\n");
*/
#include <stdio.h> 

int main() {

	int num = 3;

	while (num > 0) { // 3, 2, 1
		printf("�ȳ��ϼ���.\n");

		if (num == 2) {
			break;
		}

		num = num - 1;
	}

	printf("while�� ���� ����");
	
	return 0;
}