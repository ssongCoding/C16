#include <stdio.h>

/** 문자열 = 문자 배열 입문 **/
int main() {
	char c = 'a'; // 문자 1개
	char arr[] = { 'a', 'b', '\0'}; // 문자 2개 이상 = 배열
	char abc[] = "abc"; // = {'a','b','c', '\0'};
	// abc[0] = 'a' abc[1] = 'b' abc[2] = 'c'
	
	printf("%s\n", arr); // 엉망진창 안되려면
					     // 마지막에 '\0' 삽입
	printf("%c\n", arr[0]); // a
	printf("%c\n", arr[1]); // b
	
	printf("%s\n", abc); // abc
	printf("%c\n", abc[0]); // 
	printf("%c\n", abc[1]); // 
	printf("%c\n", abc[2]); // 

	return 0;
}