#include <stdio.h>

struct Student {
	char name[10]; // �̸�
	int age;
};

int main() {

	// �տ������� �� ����, �ڸ� ���� �� ����
	// �տ������� ������� ���� ���ſ���.
	struct Student stu1 = { "��۾�" };
	scanf_s("%d", &stu1.age);
	printf("%s, %d", stu1.name, stu1.age);

	return 0;
}