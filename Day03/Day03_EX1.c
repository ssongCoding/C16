#include <stdio.h>

int main() {
	// ������ ���� num1, num2�� �� 300, 500 ����
	int num1 = 300;
	int num2 = 500;
	int temp;

	temp = num1; // num1�� ���� temp�� ����ϰ� ����!
	num1 = num2; // num1�� num2�� ���� ������. 500
	num2 = temp; // num2�� num1(temp)�� ���� ������ �ǿ�.

	printf("num1�� %d, num2�� %d", num1, num2);
	// num1�� 500, num2�� 300

	return 0;
}