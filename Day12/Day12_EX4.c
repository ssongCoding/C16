/*
	정적변수의 쓰임새
*/

#include <stdio.h>
#include "test.h"

//int count = 0; // 누구나 프로그램 시작~종료 접근 가능

// count가 메모리에서 사라질거에요.

int main() {
	enter();
	enter();
	return 0;
}