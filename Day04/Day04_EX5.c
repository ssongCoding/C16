#include <stdio.h>

int main() {
	
	int hour;
	scanf_s("%d", &hour); // hour �ð� �Է�

	switch (hour) {
		case 4 : 
			printf("���� ���� �Դϴ�.");
			break;
		case 7 :
			printf("���� ���� �Դϴ�.");
			break;
		default : 
			printf("�̵� ���� �ƴմϴ�.");
	}

	return 0;
}