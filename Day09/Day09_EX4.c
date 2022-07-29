#include <stdio.h>

int main() { // ~ 18:02
	int arr[] = { 5, 10, 15 };
			//arr[0] [1] [2]

	int sum = 0;
	for (int n = 0; n < 3; n++) { // 0, 1, 2
		sum = sum + arr[n]; 
	}

	printf("%d", sum); // 30

	return 0;
}