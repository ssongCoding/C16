/*
	���������� ���ӻ�
*/

#include <stdio.h>
#include "test.h"

//int count = 0; // ������ ���α׷� ����~���� ���� ����

// count�� �޸𸮿��� ������ſ���.
void enter() {
	//int count = 0; // �޸𸮿� �ö�
	static int count = 0;
	count++;

	printf("���� ������ ȸ���� %d�� �Դϴ�.\n", count);
}

int main() {
	enter();
	enter();
	return 0;
}