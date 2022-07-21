/*
	printf("안녕하세요.\n");
	printf("안녕하세요.\n");
	printf("안녕하세요.\n");
*/
#include <stdio.h> 

int main() {

	int num = 3;

	while (num > 0) { // 3, 2, 1
		printf("안녕하세요.\n");

		if (num == 2) {
			break;
		}

		num = num - 1;
	}

	printf("while문 빠져 나옴");
	
	return 0;
}