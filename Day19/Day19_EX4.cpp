#include <iostream>
using namespace std;

int main() {
	int age;
	cin >> age;

	while (age <= 0) { // ������ 1�� �ٲٸ� (����)
		try {
			if (age <= 0) {
				throw age; // throw ������ ���� �������մϴ�.
			}
		}
		catch (int input) { // int input = age;
			cout << "����� �Է��ϼž� �մϴ�." << endl;
			cin >> age;
		}
	}

	cout << age << "�� �̽ó׿�!";

	return 0;
}

/*
	// 5�� ~5:53�б���~
	���� �Է�
	0 �Ǵ� ������ �����ø�,
	����� �Է��� ������ {
	�ٽ� ����� �Է��϶�� �ȳ��ϰ�
	�ٽ� ���� �޾��ּ���.
	}

	����� �Է¹�����,
	N���̽ó׿�!
*/