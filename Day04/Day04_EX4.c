#include <stdio.h>

int main() {
	char a = 'B';

	switch (a) {
		case 'A' : // if (a == 'A')
			printf("C��� ���Դϴ�.");
		case 'B': // else if (a == 'B')
			printf("���̽� ���Դϴ�.");
			break; // case�� ��� ����
					// �긦 ������ ��𼭵�
					// switch�� Ż���ϴ� �뵵
			printf("55555555555555");
		case 'C': // else if (a == 'C')
			printf("�ڹ� ���Դϴ�.");
		default : 
			printf("�����մϴ�.");
	}

	return 0;
}