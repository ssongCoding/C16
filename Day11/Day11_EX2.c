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

	printf("%d", i); // for�� �ۿ����� �� ��

	/*
		max <-> num[1]
		    ����, num[1]�� ũ�ٸ�,
			max�ڸ� �Ѱ��ٰſ���.
			               �ƴϸ�,
			max�ڸ��� ���Ծ���.
		max <-> num[2]
		    ���� num[2]�� ũ�ٸ�,
			max�ڸ� �Ѱ��ٰſ���.
	*/

	printf("%d", max); // 3

	return 0;
}