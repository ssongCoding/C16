#include <iostream>
using namespace std;

int main() {
	// ���� �Է� 2�� �޾��ּ���.
	int n1, n2;
	cin >> n1 >> n2;

	try {
		if (n2 == 0) {
			throw n2; // --> catch(n2)
		}
		int result = n1 / n2;
		cout << result;
	}
	catch (int input) { // input = n2;
		cout << "input : " << input;
	}

	return 0;
}