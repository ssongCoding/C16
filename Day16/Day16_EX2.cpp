/*
	���� n �Է�
	3�� ������� �ڼ�ġ�� �� (���ڸ� ����������)
	"¦"

	��� : 1 2 ¦ 4 5 ¦ 7 8 ¦ ... n
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) { // 3�� �����
			cout << "¦! ";
		} else if (i % 5 == 0) {
			cout << "¦¦! ";
		} else {
			cout << i << " ";
		}
	}

	return 0;
}