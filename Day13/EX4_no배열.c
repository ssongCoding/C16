#include <stdio.h>

struct Student {
	char name[10]; // �̸�
	int kor;
	int eng;
	int math;
	int ave; // ���
};

int main() {

	struct Student stu[5];
	int maxIndex = 0;

	for (int i = 0; i < 5; i++) { // �л� ���� �Է�
		scanf_s("%s", stu[i].name, 10); // �̸�
		scanf_s("%d %d %d", &stu[i].kor, &stu[i].eng, &stu[i].math); // ������ ����
		
		stu[i].ave = (stu[i].kor + stu[i].eng + stu[i].math) / 3; // �� �л��� ��հ� ���
		
		if (stu[maxIndex].ave < stu[i].ave) {
			maxIndex = i;
		}// Ȥ�� �̶����� �Է¹��� �͵� �� �ִ밪�̶� ��
		 // ���� �� ũ��, ���� MAX�ؾ���!
	}

	printf("%s", stu[maxIndex].name); // ���������� MAX ���

	return 0;
}