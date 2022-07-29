#include <stdio.h>

int main() {

	int num[] = { 1, 2, 3 };
	int max = num[0]; // max : 1

	int i;
	for (i = 1; i < 3; i++) { //1, 2
		char a;
		if (max < num[i]) {
			a = 'a';
			max = num[i];
		}
		a
	}

	printf("%d", i); // for문 밖에서는 못 씀

	/*
		max <-> num[1]
		    만약, num[1]이 크다면,
			max자리 넘겨줄거에요.
			               아니면,
			max자리는 변함없어.
		max <-> num[2]
		    만약 num[2]가 크다면,
			max자리 넘겨줄거에요.
	*/

	printf("%d", max); // 3

	return 0;
}