#include <stdio.h>

int main() {
	int apple; // 정수형 변수 선언
	apple = 7; // 변수에 값을 "처음" 대입 :: 초기화

	apple = 8; // apple에 값을 바꾼거!
	printf("apple의 값은 %d입니다.\n", apple);

	int banana = 10; // 선언과 초기화를 한줄에!

	banana = apple; // banana = 8;
	printf("banana의 값은 %d입니다.", banana);

	return 0;
}