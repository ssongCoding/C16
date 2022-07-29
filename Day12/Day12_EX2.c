//#include <stdio.h>
//
//int a = 7; // 전역 변수 : 감싸고 있는 중괄호가 없어요.
//
//void localTest() {
//	int b = 1; // 지역변수는 선언될 때 메모리에 올라감
//} // 중괄호가 끝나면, 메모리에서 사라집니다.
//
//int main() {
//	int n; // 지역 변수 : 감싸고 있는 중괄호 있구요.
//	int b;
//
//	localTest();
//
//	printf("%d", a);
//	return 0;
//}