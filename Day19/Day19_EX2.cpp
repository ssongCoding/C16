#include <iostream>
using namespace std;

int main() {

	try {
		int a = 4 / 0; // <-- ���α׷� ���൵ ���� ���� �߻�!
		throw a; // try���� �߻��� ������ ���� ����
	}
	catch (int input) {
		cout << "0���� ���� �� �����ϴ�." << endl;
	}

	return 0;
}