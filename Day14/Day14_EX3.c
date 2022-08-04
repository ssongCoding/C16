#include <stdio.h>

void changeNum(int* a) { // int* a = &num;
	*a = 7;
}

void changeNum(int a) { // int a = num;
						// int a = 5;
	a = 7;
}


int main() {
	int num = 5;
	changeNum(&num);
	printf("%d", num);

	return 0;
}