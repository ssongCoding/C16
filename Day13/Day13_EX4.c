#include <stdio.h>

struct Student {
	char name[10]; // 이름
	int age;
};

int main() {

	// 앞에서부터 값 대입, 뒤를 비우는 건 가능
	// 앞에서부터 순서대로 값이 들어갈거에요.
	struct Student stu1 = { "김송아" };
	scanf_s("%d", &stu1.age);
	printf("%s, %d", stu1.name, stu1.age);

	return 0;
}