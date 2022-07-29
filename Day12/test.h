#pragma once

#include <stdio.h>

void enter() {
	//int count = 0; // 메모리에 올라감
	static int count = 0;
	count++;

	printf("오늘 입장한 회원은 %d명 입니다.\n", count);
}