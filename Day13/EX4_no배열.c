#include <stdio.h>

struct Student {
	char name[10]; // 이름
	int kor;
	int eng;
	int math;
	int ave; // 평균
};

int main() {

	struct Student stu[5];
	int maxIndex = 0;

	for (int i = 0; i < 5; i++) { // 학생 정보 입력
		scanf_s("%s", stu[i].name, 10); // 이름
		scanf_s("%d %d %d", &stu[i].kor, &stu[i].eng, &stu[i].math); // 국영수 점수
		
		stu[i].ave = (stu[i].kor + stu[i].eng + stu[i].math) / 3; // 각 학생의 평균값 계산
		
		if (stu[maxIndex].ave < stu[i].ave) {
			maxIndex = i;
		}// 혹시 이때까지 입력받은 것들 중 최대값이랑 비교
		 // 내가 더 크면, 내가 MAX해야지!
	}

	printf("%s", stu[maxIndex].name); // 마지막까지 MAX 출력

	return 0;
}