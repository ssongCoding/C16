#include <stdio.h>

void changeNum(int a) { // int a = 5;
	a = 7;
}

int main() {
	int num = 5;
	changeNum(num);
	printf("%d", num); // 5
	
	return 0;
}