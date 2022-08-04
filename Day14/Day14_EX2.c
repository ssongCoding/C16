#include <stdio.h>

int main() {

	int inum = 5;
	int* iptr = &inum;
	printf("%p\n", iptr);
	printf("%d\n", *iptr);

	double dnum = 7.0;
	double* dptr = &dnum;
	printf("%p\n", dptr);
	printf("%f\n", *dptr);

	char cnum = 'a';
	char* cptr = &cnum;
	printf("%p\n", cptr);
	printf("%c\n", *cptr);

	return 0;
}