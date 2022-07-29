//#include <stdio.h>
//
//int main() {
//	
//
//	/* 
//	    num = num + 1 을 수행한 num값
//	    1) num++ : num이 할 일을 먼저 하고,
//				   num = num + 1이 수행되요.    
//		2) ++num : num = num + 1이 먼저 수행되고,
//		           num이 할 일을 할거에요.
//	*/
//	int num = 1;
//	printf("%d\n", num); // 1
//
//	printf("%d\n", num++); // 1로 일을 하고 --> 2
//
//	printf("%d\n", num); // 2
//
//	num++; // 3
//	printf("%d\n", num); // 3
//
//	// ++ 을 지나가는 순간 +1이 되서 지나가는 거
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