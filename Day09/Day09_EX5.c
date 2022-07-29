#include <stdio.h>

int main() {

	int score1, score2, score3;
	int score[3]; // 세 칸짜리 배열

	while (1) {
		scanf_s("%d %d %d", &score[0], &score[1], &score[2]);

		if (score1 == 0 && score2 == 0 && score3 == 0) {
			printf("종료");
			break;
		}

		int sum = score1 + score2 + score3;
		int ave = sum / 3;

		printf("세 과목의 평균(정수)은 %d 입니다.\n", ave);
	}
	return 0;
}
/*
 	        국 영 수 점수(정수) 
	입력 : 75 55 100 - 예시
	출력 : 세 과목의 평균(정수)은 00 입니다.

	무한 루프
	국 영 수 0 0 0 으로 입력 되면, 종료

	~ 18:18분
*/