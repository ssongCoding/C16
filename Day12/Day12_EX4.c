/*
	정적변수의 쓰임새
*/

#include <stdio.h>
#include "test.h"

//int count = 0; // 누구나 프로그램 시작~종료 접근 가능

// count가 메모리에서 사라질거에요.
void enter() {
	//int count = 0; // 메모리에 올라감
	static int count = 0;
	count++;

	printf("오늘 입장한 회원은 %d명 입니다.\n", count);
}

int main() {
	enter();
	enter();
	return 0;
}