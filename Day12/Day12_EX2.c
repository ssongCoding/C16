#include <stdio.h>

int a = 7; // ���� ���� : ���ΰ� �ִ� �߰�ȣ�� �����.

void localtest() {
	int b = 1; // ���������� ����� �� �޸𸮿� �ö�
} // �߰�ȣ�� ������, �޸𸮿��� ������ϴ�.

int main() {
	int n; // ���� ���� : ���ΰ� �ִ� �߰�ȣ �ֱ���.
	int b;

	localtest();

	printf("%d", a);
	return 0;
}