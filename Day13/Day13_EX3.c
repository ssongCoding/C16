#include <stdio.h>

/** �츮�� ����� ���� �ƽ�Ű �ڵ� ���� **/
struct ASCII {
	char abc; // ����
	int num;  // ����
};

int main() {
	struct ASCII a = { 'a', 97 }; // ����ü �� ������� ����
	printf("%c = %d", a.abc, a.num);

	struct ASCII z = { 'z', 122 };
	printf("%c = %d", z.abc, z.num);	

	return 0;
}