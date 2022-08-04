#include <stdio.h>

// https://github.com/ssongCoding/C16
void login() {
	static int count = 1;
	printf("오늘 로그인 횟수는 %d회입니다.", count++);
}

int main() {
	login(); // 오늘 로그인 횟수는 1회입니다.
	login(); // 오늘 로그인 횟수는 2회입니다.
	login(); //                    3회
	login(); //                    4회

	return 0;
}