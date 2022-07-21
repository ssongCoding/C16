#include <stdio.h>

int main() {
	
	int hour;
	scanf_s("%d", &hour); // hour 시간 입력

	switch (hour) {
		case 4 : 
			printf("수업 시작 입니다.");
			break;
		case 7 :
			printf("수업 종료 입니다.");
			break;
		default : 
			printf("이도 저도 아닙니다.");
	}

	return 0;
}