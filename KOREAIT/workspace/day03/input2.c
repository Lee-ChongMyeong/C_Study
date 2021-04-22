#include <stdio.h>

void main() {

// 정수 2개를 받아서, 몫과 나머지 출력하기
// %(모듈러스) 10%3 : 1
// 10 , 3 입력시 3.33도 출력하기.

	/*
	int data1 = 0;
	int data2 = 0;

	printf("정수 1 : ");
	scanf_s("%d", &data1);

	printf("정수 2 : ");
	scanf_s("%d", &data2);

	int data3 = data1 / data2;
	int data4 = data1 % data2;

	printf("몫 : %d ", data3);
	printf("나머지 : %d ", data4);
	*/

	int data1 = 0;
	int data2 = 0;
	int value = 0;
	int theRest = 0;
	double result = 0.0;

	printf("첫번쨰 정수를 입력하세요\n");
	scanf_s("%d", &data1);
	
	printf("두번쨰 정수를 입력하세요\n");
	scanf_s("%d", &data2);

	value = data1/data2;
	theRest = data1 % data2;
	result = (double)data1 / data2;
	
	printf("몫 : %d\n나머지 : %d\n결과값 : %.2lf\n", value, theRest, result);
	




	
	return 0;
}
