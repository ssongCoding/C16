//#include <stdio.h>
//
//int main() {
//	
//
//	/* 
//	    num = num + 1 �� ������ num��
//	    1) num++ : num�� �� ���� ���� �ϰ�,
//				   num = num + 1�� ����ǿ�.    
//		2) ++num : num = num + 1�� ���� ����ǰ�,
//		           num�� �� ���� �Ұſ���.
//	*/
//	int num = 1;
//	printf("%d\n", num); // 1
//
//	printf("%d\n", num++); // 1�� ���� �ϰ� --> 2
//
//	printf("%d\n", num); // 2
//
//	num++; // 3
//	printf("%d\n", num); // 3
//
//	// ++ �� �������� ���� +1�� �Ǽ� �������� ��
//	printf("%d %d\n", num++, num); // 3, 4 
//
//	printf("%d\n", ++num); // 5
//	printf("%d\n", num++); // 5 -> 6
//	printf("%d\n", num++); // 6 -> 7
//	printf("%d\n", --num); // 6
//
//	// ~ 18:12
//	return 0;
//}