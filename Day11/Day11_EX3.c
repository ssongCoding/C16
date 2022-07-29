#include <stdio.h>

int bigNum(int n1, int n2) {
	if (n1 > n2) {
		return n1;
	} else {
		return n2;
	}
	// 위 코드는 return을 두번 쓴게 아니라,
	// 사실상 돌아가는 코드를 생각해보시면
	// return은 한번만 쓰인거에요.
}

/*
    <2단계>
	int res = n2;
	if (n1 > n2) {
		res = n1;
	}

	return res;

	<1단계>
	int res;
	if (n1 >n2) {
		res = n1;
	} else {
		res = n2;
	}

	return res;
*/
int main() { // 
	int result = bigNum(200, 100);
	printf("%d", result); // 200

	return 0;
}

// 안봐요.

