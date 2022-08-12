#include <stdio.h>
#include <string.h>

int main() {
	char a[] = "apple"; // 6
	char b[] = "appleppppppp"; // 6
	
	int isSame = 1;

	isSame = strcmp(a, b); // 0이 나오면 같다는 뜻!
	if (strlen(a) == strlen(b)) {
		for (int i = 0; i < 6; i++) {
			if (a[i] != b[i]) {
				isSame = 0;
				break;
			}
		}
	}

	printf("%p\n", "apple");


	if (a == "apple") {
		printf("a == apple\n");
	}



	int n1 = 5;
	int n2 = 5;

	if (n1 == n2) {
		printf("n1 == n2\n");
	}

	if (n1 == 5) {
		printf("n1 == 5\n");
	}


	if (a[0] == b[0]) {
		printf("a[0] == b[0]\n");
	}

	if (a == b) { // &a[0] == &b[0]
		printf("a == b\n");
	}

	return 0;
}