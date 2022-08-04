#include <stdio.h>
#include <stdlib.h> // 라이브러리

int main() {
	int n;
	scanf_s("%d", &n);

	int* arr = malloc(n * sizeof(int)); // 동적 할당
		    // 배열 첫칸의 주소
	// = int arr[n];

	for (int i = 0; i < n; i++) {
		arr[i] = (i + 1) * 100;
		printf("%d\n", arr[i]);
	}

	free(arr); // 메모리에서 사라질거에요~
	//printf("%d", arr[0]);

	return 0;
}