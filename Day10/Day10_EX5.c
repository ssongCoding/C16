#include <stdio.h> 

int ten(int a) {
	int result = a * 10;
	
	return result;
}

int main() {
	int b = ten(180);
	printf("%d", b);

	return 0;
}