#include <stdio.h>

int plus(int n1, int n2) { // �Լ��� ȣ��� ��
						   // �Ű������� �� ����
	int res = n1 + n2;     // ����
	return res; // �����ִ� ��
}

int minus(int n1, int n2) {
	int res = n1 - n2;
	return res;
}

int multi(int n1, int n2) {
	int res = n1 * n2;
	return res;
}

int divide(int n1, int n2) {
	int res = n1 / n2;
	return res;
}

void powerOn() { // �Ű����� X
	printf("���Ⱑ �������ϴ�.\n");
	// ����� X
}

void powerOff() { // �Ű����� X
	printf("���Ⱑ �������ϴ�.\n");
	// ����� X
}

int main() { // main �Լ�
	powerOn();

	int a = 5;
	//int a = 8; : ���� �̸� ���� �� �����ϴ�.

	int result = plus(200, 300); // 500
	printf("plus�� ����� %d\n", result);

	result = minus(500, 200); // 300
	printf("minus�� ����� %d\n", result);

	result = multi(3, 300); // 900
	printf("multi�� ����� %d\n", result);

	result = divide(20, 4); // 5
	printf("divide�� ����� %d\n", result);

	powerOff();

	return 0;
}