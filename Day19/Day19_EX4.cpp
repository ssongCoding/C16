#include <iostream>
using namespace std;

int main() {
	int age;
	cin >> age;

	while (age <= 0) { // 조건을 1로 바꾸면 (생각)
		try {
			if (age <= 0) {
				throw age; // throw 무조건 값을 던져야합니다.
			}
		}
		catch (int input) { // int input = age;
			cout << "양수를 입력하셔야 합니다." << endl;
			cin >> age;
		}
	}

	cout << age << "살 이시네요!";

	return 0;
}

/*
	// 5분 ~5:53분까지~
	나이 입력
	0 또는 음수를 받으시면,
	양수를 입력할 때까지 {
	다시 양수를 입력하라고 안내하고
	다시 값을 받아주세요.
	}

	양수를 입력받으면,
	N살이시네요!
*/