#include <stdio.h>
#include <stdlib.h> // ���̺귯��

int main() {
	int n;
	scanf_s("%d", &n);

	int* arr = malloc(n * sizeof(int)); // ���� �Ҵ�
		    // �迭 ùĭ�� �ּ�
	// = int arr[n];

	for (int i = 0; i < n; i++) {
		arr[i] = (i + 1) * 100;
		printf("%d\n", arr[i]);
	}

	free(arr); // �޸𸮿��� ������ſ���~
	//printf("%d", arr[0]);

	return 0;
}