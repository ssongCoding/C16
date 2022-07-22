/*
*	while(1)
	입력 : 정수 1개
	"짝수입니다. 짝짝짝"
	"홀수입니다. 홀홀홀"
	
	0이 입력되면
	"프로그램을 종료합니다."
	- 끝 -
*/
#include <stdio.h>

int main() {

	int num; // 입력받은 값을 저장해 둘 변수

	while (1) { // 무한 루프
		scanf_s("%d", &num);	// num에 값을 입력
		
		// 5시 1분까지! switch로 바꿔주세요.
		if (num == 0) { 
			printf("종료합니다.\n");
			break;
		} else if (num % 2 == 1) { // 나머지가 1이라면, 
			printf("홀수입니다. 홀홀홀\n");
		} else { // // 2로 나눴을 때, 나머지가 0
			printf("짝수입니다. 짝짝짝\n");
		}
	}
	// 0이 입력되면, break걸려서 여기 올거에요. 바로!

	return 0;
}