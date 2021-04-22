#include <stdio.h>

void main() {

	int data1 = 0;
	int data2 = 0;
	int result = 0;

	printf("첫번째 정수를 입력하세요\n");
	scanf_s("%d", &data1);	// & : 번지(주소)연산자
							// data1이라는 저장공간의 주소값
//	printf("%d", data1);		

	printf("두번쨰 정수를 입력하세요\n");
	scanf_s("%d", &data2);
//	printf("%d", data2);

	result = data1 + data2;

	printf("총 합 : %d\n", result);
	
}