#include <stdio.h>

// https://github.com/ssongCoding/C16
void login() {
	static int count = 1;
	printf("���� �α��� Ƚ���� %dȸ�Դϴ�.", count++);
}

int main() {
	login(); // ���� �α��� Ƚ���� 1ȸ�Դϴ�.
	login(); // ���� �α��� Ƚ���� 2ȸ�Դϴ�.
	login(); //                    3ȸ
	login(); //                    4ȸ

	return 0;
}