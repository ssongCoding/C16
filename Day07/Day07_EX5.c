/*
	1단계. while문을 이용해서
		    a ~ z 까지 출력 (~6:33)

	2단계. 배열 abc[26] 
		   while문을 이용해서 배열에 넣어주셔요.
	       abc[0] = 'a'
		   abc[1] = 'b'
		   ...
		   abc[25] = 'z'
	// songa.kim@kakao.com
*/

#include <stdio.h>

int main() {

	char abc[26]; // 26칸 짜리 문자 배열

	//char abc = 'a'; // 97 --> char 문자/정수

	while (abc <= 'z') { // 97 ~     26번 while을 돌아요
		printf("%c\n", abc);
		abc = abc + 1; // 정수
	}

	return 0;
}