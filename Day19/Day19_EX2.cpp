#include <iostream>
using namespace std;

int main() {

	try {
		int a = 4 / 0; // <-- 프로그램 실행도 전에 예외 발생!
		throw a; // try에서 발생한 오류가 뭔지 전달
	}
	catch (int input) {
		cout << "0으로 나눌 수 없습니다." << endl;
	}

	return 0;
}