#include <iostream>
using namespace std;

int main() {

	int count = 0;
	for (int r = 0; r <= 255; r++) {
		for (int g = 0; g <= 255; g++) {
			for (int b = 0; b <= 255; b++) {
				count++;
			}
		}
	}

	cout << count;
	/*
		R G B
		0~255
		조합 총 몇가지 출력
		조합 모든 경우의 수를 출력
		0 0 0
		0 0 1
		0 0 2

		~ 6:35
	*/


	return 0;
}