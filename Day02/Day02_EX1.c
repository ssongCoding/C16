#include <stdio.h>

int main() {
	int apple; // ������ ���� ����
	apple = 7; // ������ ���� "ó��" ���� :: �ʱ�ȭ

	apple = 8; // apple�� ���� �ٲ۰�!
	printf("apple�� ���� %d�Դϴ�.\n", apple);

	int banana = 10; // ����� �ʱ�ȭ�� ���ٿ�!

	banana = apple; // banana = 8;
	printf("banana�� ���� %d�Դϴ�.", banana);

	return 0;
}