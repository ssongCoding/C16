/*
	1�ܰ�. while���� �̿��ؼ�
		    a ~ z ���� ��� (~6:33)

	2�ܰ�. �迭 abc[26] 
		   while���� �̿��ؼ� �迭�� �־��ּſ�.
	       abc[0] = 'a'
		   abc[1] = 'b'
		   ...
		   abc[25] = 'z'
	// songa.kim@kakao.com
*/

#include <stdio.h>

int main() {

	char abc[26]; // 26ĭ ¥�� ���� �迭

	//char abc = 'a'; // 97 --> char ����/����

	while (abc <= 'z') { // 97 ~     26�� while�� ���ƿ�
		printf("%c\n", abc);
		abc = abc + 1; // ����
	}

	return 0;
}