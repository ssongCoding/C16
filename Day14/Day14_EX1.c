#include <stdio.h>

/*
	포인터(주소)의 주역 : &, *

	'*'의 역할
	1) 포인터 변수를 선언하는 자료형을 뜻함
	2) 포인터가 가리키는 = 주소를 찾아가서
	   상자 안에 있는 값에 접근
*/
int main() {
	int num = 5; // 정수를 담을 수 있는 상자
	printf("%d\n", num); // 5
	printf("%p\n", &num); // %p : 포인터 출력 자리
								// &num : num상자가 살고 있는 주소

	int* a = &num; // 주소(포인터)를 담을 수 있는 상자
	printf("%p\n", a);
	printf("%d\n", *a); // 5


	double n = 6.0; // 실수를 담을 수 있는 상자
	printf("%f", n); // 6.0

	return 0;
}