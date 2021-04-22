#include <stdio.h>
#include "Day06.h"

// ---- 반복문 ----
// 조건식을 비교하면서 참일 경우 종속 문장을 실행시키고 변화식을 거쳐 조건식을 또 다시 비교하는 문법
// for(), while(), do ~ while() 3가지가 존재
//
// for 문의 기본 원형:
//		for (초기식; 조건식; 변화식)
//		{
//			종속 문장;
//		}
//	초기식 -> 조건식 -> 종속문장 -> 변화식 -> 조건식 -> 종속문장 -> 변화식 -> ... 순으로 진행된다.
//	for문에서 무한루프를 사용하고 싶을 때는 초기식, 조건식, 변화식을 생략하면 된다.
//			ex) for(;;) 
//	for문에서 종속 문장이 한 줄 일때는 {}(중괄호)를 생략할 수 있다.
//
//	---- 기타 구문 ----
//  break: 해당 구문을 만나게 되면 반복문을 탈출.
//  continue : 해당 구문을 만나게 되면 continue보다 아래 있는 종속 문장은 실행하지 않고 진행된다.  


int main() {

	/*
	for (int i = 0; i < 10; i++) {
		printf("Hello World!\n");
	}

	// printf("i의 값 : %d\n", i);
	*/

	/*for (; ;) {
		printf("Hello world!\n");
	}*/
	
	/*for (int i = 0; i < 10; i++)
	{
		if (i == 5)
			break;

		printf("Hello world! i : %d\n", i);
	}

	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
			continue;

		printf("Hello world! i : %d\n", i);
	}*/


	////Q1

	//printf("출력 : ");
	///*for (int i = 65; i <= 90; i++) {
	//	printf("%c", i);
	//}*/

	//for (char i = 'A'; i <= 'Z'; i++)
	//	printf("%c", i);

	//printf("\n");

	
	////Q2

	//char num;

	//printf("알파벳을 입력하세요 : ");
	//scanf_s("%c", &num);


	///*for (int i = 'a'; i <= num; i++) {
	//	printf("%c ", i);
	//}*/

	//for (char i = 'a'; i <= num; i++) {
	//	printf("%c ", i);
	//}

	//printf("\n");
	


	/*
	//Q3

	int num1;

	for (; ;) {

		printf("입력 : ");
		scanf_s("%d", &num1);

		if (num1 == 9) {
			printf("9가 입력되어 프로그램을 종료합니다.\n");
			break;
		}

		printf("출력 : %d\n", num1);
	}
	*/



	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("i : %d, j : %d ", i, j);
		}
		printf("\n");
	}*/

	//Q1
	for (int i = 0; i < 5; i++) {
		
		for (int j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	//Q2 
	for (int i = 0; i < 5; i++){

		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	//Q3
	for (int i = 1; i < 6; i++) {

		for (int j = 0; j < 6-i; j++) {
			printf(" ");
		}
		for (int k = 0; k < i*2-1; k++) {
			printf("*");
		}


		printf("\n");
	}
	printf("\n");

	//Q4

	for (int i = 1; i < 6; i++) {

		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int k = 0; k < (6-i) * 2 - 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}