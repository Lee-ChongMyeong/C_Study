#include <stdio.h>

// ---- 배 열 ----
// 일정한 간격을 두고 붙여놓은 것
// 특정 자료형을 가진 변수를 여러 개 선언할 때 사용 
// 배열 선언 방법 : 자료형 배열명 [배열크기];  
// 배열의 각 공간을 나타내주는 숫자를 보고 index(인덱스)라고 부른다.
// 인덱스는 0 ~ (선언한 요소의 개수 - 1) 까지 갖고 있다. 왜냐면 0부터 시작하기 떄문이다.
// 배열을 사용할 떄는 반복문을 적절하게 사용해줘야 한다.
// 배열을 선언하면서 초기화를 진행할 수 있는데 이때는 
// int arr[5] = { 3, 1, 4, 6, 8 }; 형식으로 진행할 수 있다.
// 배열을 선언하면서 모든 공간을 0으로 초기화 할 때는
// int arr[5] = { 0, }; 형식으로 진행할 수 있다.
// 
// ----10진수를 2진수로 변환하는 방법 ----
// 변환할 10진수를 몫이 0이 될때까지 2로 나눈다.
// 몫이 0이 됐다면 그동안의 나머지를 역순으로 읽어준다.
// 
// 

void main() {

	//Q1 
	/*int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10 = 0;
	printf("입력 : ");
	scanf_s("%d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10);
	printf("출력 : ");
	printf("%d %d %d %d %d %d %d %d %d %d\n", num1, num2, num3, num4, num5, num6, num7, num8, num9, num10);*/

	//int arr[10];

	//arr[0] = 10;	// 10개의 공간을 할당 받는다.
	//arr[9] = 20;

	//printf("%d\n", arr[0]);


	/*int arr[10];

	printf("입력 : ");
	for (int i = 0; i <= 9; i++) {
		scanf_s("%d", &arr[i]);
	}
	
	
	printf("출력 : ");
	for (int i = 0; i <= 9; i++) {
		printf("%d ", arr[i]);
	}*/


	//초기화
	/*int arr[5] = { 3,1,4,6,8 };

	printf("출력 : ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d", arr[i]);
	}*/

	//모든 공간 초기화

	/*printf("출력 : ");
	int arr[5] = { 0, };
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}*/

	//Q1
	/*int arr[10];

	printf("입력 : ");
	for (int i = 0; i <= 9; i++) {
		scanf_s("%d", &arr[i]);
	}


	printf("출력 : \n");
	for (int i = 0; i <= 9; i++) {
		printf("arr[%d] : %d \n", i, arr[i]);
	}*/

	//Q2


	int div[5] = { 0, };

	int num = 0;

	printf("10진수 입력 : ");
	scanf_s("%d", &num);
	
	printf(" 2진수 출력 : ");

	for (int i = 0; i <= num; i++) {


		if (num % 2 != 0) {
			printf("1");
		}
		else {
			printf("0");
		}
		num /= 2;

		if (num == 1) {
			break;
		}

	}
	printf("\n");


	printf("====================================\n");


	return 0;
}