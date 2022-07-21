#include <stdio.h>

int main() {
	char a = 'B';

	switch (a) {
		case 'A' : // if (a == 'A')
			printf("C언어 반입니다.");
		case 'B': // else if (a == 'B')
			printf("파이썬 반입니다.");
			break; // case랑 상관 없이
					// 얘를 만나면 어디서든
					// switch를 탈출하는 용도
			printf("55555555555555");
		case 'C': // else if (a == 'C')
			printf("자바 반입니다.");
		default : 
			printf("감사합니다.");
	}

	return 0;
}