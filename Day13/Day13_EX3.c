#include <stdio.h>

/** 우리가 만들어 보는 아스키 코드 맵핑 **/
struct ASCII {
	char abc; // 문자
	int num;  // 숫자
};

int main() {
	struct ASCII a = { 'a', 97 }; // 구조체 값 순서대로 대입
	printf("%c = %d", a.abc, a.num);

	struct ASCII z = { 'z', 122 };
	printf("%c = %d", z.abc, z.num);	

	return 0;
}