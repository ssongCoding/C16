#include <stdio.h>

/** ���ڿ� = ���� �迭 �Թ� **/
int main() {
	char c = 'a'; // ���� 1��
	char arr[] = { 'a', 'b', '\0'}; // ���� 2�� �̻� = �迭
	char abc[] = "abc"; // = {'a','b','c', '\0'};
	// abc[0] = 'a' abc[1] = 'b' abc[2] = 'c'
	
	printf("%s\n", arr); // ������â �ȵǷ���
					     // �������� '\0' ����
	printf("%c\n", arr[0]); // a
	printf("%c\n", arr[1]); // b
	
	printf("%s\n", abc); // abc
	printf("%c\n", abc[0]); // 
	printf("%c\n", abc[1]); // 
	printf("%c\n", abc[2]); // 

	return 0;
}