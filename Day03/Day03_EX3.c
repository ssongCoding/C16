#include <stdio.h>

int main() {
	int corona = 65; // 코로나 확진자 수

	if (corona > 100) {
		printf("거리두기 4단계 입니다.");
	} else if (corona > 75) { // 100 >= corona > 75
		printf("거리두기 3단계 입니다.");
	} else if (corona > 50) { // 75>= corona > 50
		printf("거리두기 2단계 입니다.");
	} else if (corona > 20) { // 50 >= corona > 20
		printf("거리두기 1단계 입니다.");
	} else { // 20 >= corona
		printf("거리두기를 시행하지 않습니다.");
	}

	return 0;
}