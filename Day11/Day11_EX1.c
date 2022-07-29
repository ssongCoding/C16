#include <stdio.h>

int plus(int n1, int n2) { // 함수가 호출될 때
						   // 매개변수에 값 대입
	int res = n1 + n2;     // 실행
	return res; // 돌려주는 값
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

void powerOn() { // 매개변수 X
	printf("계산기가 켜졌습니다.\n");
	// 결과값 X
}

void powerOff() { // 매개변수 X
	printf("계산기가 꺼졌습니다.\n");
	// 결과값 X
}

int main() { // main 함수
	powerOn();

	int a = 5;
	//int a = 8; : 변수 이름 같은 건 못씁니다.

	int result = plus(200, 300); // 500
	printf("plus의 결과는 %d\n", result);

	result = minus(500, 200); // 300
	printf("minus의 결과는 %d\n", result);

	result = multi(3, 300); // 900
	printf("multi의 결과는 %d\n", result);

	result = divide(20, 4); // 5
	printf("divide의 결과는 %d\n", result);

	powerOff();

	return 0;
}