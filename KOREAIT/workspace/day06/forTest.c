#include <stdio.h>

void main() {


	/*for (int i = 0; i < 5; i++) {
		printf("%d. 이총명\n", i + 1);
	}*/
	
	//1 ~ 100 가지 출력하기

	for (int i = 1; i <= 100; i++) {
		printf("%d ", i);
	}

	printf("\n");

	// 100 ~ 1까지 출력하기
	for (int i = 100; i >=1; i--) {
		printf("%d ", i);
	}

	printf("\n");

	// 1 ~ 100까지 짝수만 출력하기
	for (int i = 1; i <= 50; i++) {
		printf("%d ", 2 * i);
	}

	printf("\n");
	// 1 ~ 100까지 홀수만 출력하기 
	for (int i = 1; i <= 50; i++) {
		printf("%d ", 2 * i - 1);
	}

	printf("\n");

	// 1 ~ 10까지 합 출력하기
	int sum1 = 0;
	for (int i = 1; i <= 10; i++) {
		sum1 += i;
	}
	printf("1~10까지 합 : %d", sum1);

	printf("\n");


	// 1 ~ 100까지 합 출력하기
	int sum2 = 0;
	for (int i = 1; i <= 100; i++) {
		sum2 += i;
	}
	printf("1~100까지 합 : %d", sum2);

	printf("\n");

	// 1 ~ 100까지 4까지만 출력하기 (1,2,3,4)
	for (int i = 1; i <= 100; i++) {

		if (i <= 4) {
			printf("%d ", i);
		}
		else {
			break;
		}
	}
		printf("\n");

		//1 ~ 100까지 100 ~70까지 출력하기 (100, 99, 98, ,,,70)
	for (int i = 100; i >= 1; i--) {

		if (i >= 70) {
			printf("%d ", i);
		}
		else {
			break;
			}
	}

	
	return 0;
}