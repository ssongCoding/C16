#pragma once

#include <stdio.h>

void enter() {
	//int count = 0; // �޸𸮿� �ö�
	static int count = 0;
	count++;

	printf("���� ������ ȸ���� %d�� �Դϴ�.\n", count);
}