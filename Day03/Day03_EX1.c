#include <stdio.h>

int main() {
	// 정수형 변수 num1, num2에 각 300, 500 저장
	int num1 = 300;
	int num2 = 500;
	int temp;

	temp = num1; // num1의 값을 temp가 기억하고 있을!
	num1 = num2; // num1이 num2의 값을 가졌죠. 500
	num2 = temp; // num2가 num1(temp)의 값을 가지면 되요.

	printf("num1은 %d, num2는 %d", num1, num2);
	// num1은 500, num2는 300

	return 0;
}