#include <stdio.h>

int bigNum(int n1, int n2) {
	if (n1 > n2) {
		return n1;
	} else {
		return n2;
	}
	// �� �ڵ�� return�� �ι� ���� �ƴ϶�,
	// ��ǻ� ���ư��� �ڵ带 �����غ��ø�
	// return�� �ѹ��� ���ΰſ���.
}

/*
    <2�ܰ�>
	int res = n2;
	if (n1 > n2) {
		res = n1;
	}

	return res;

	<1�ܰ�>
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

// �Ⱥ���.

