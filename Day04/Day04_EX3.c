#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
		 // standard input output
	     // output : printf
		 // input : scanf

int main() {
	int num = 3; // char c;
	char c;

	//scanf_s("안녕하세요 %c 입니다", &c);
	scanf("%c %d", &c, &num);
	printf("%c", c);

	/*scanf_s("%d", &num);
	printf("%d", num);*/

	return 0;
}