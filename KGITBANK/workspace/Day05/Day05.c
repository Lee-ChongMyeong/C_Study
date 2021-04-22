#include <stdio.h>

// ---- 삼항 연산자 ----
// 다른 연산자들과는 다르게 피연산자가 3개 이다.
// 삼항 연산자의 원형 : 조건식 ? 참일 떄의 반환 값 : 거짓일 때의 반환값
//
// ---- size of 연산자 ----
// 넘겨준 값의 크기를 구해주는 연산자
// sizeof() 연산자의 원형 : sizeof(크기를 구해줄 값);

// ---- 조건문 ----
// 조건식을 비교하고 해당 조건식이 참이면 종속문장을 실행, 거짓이면 탈출
// if ~ else, switch ~ case 두 개가 존재
//
// if ~ else 원형 : 
//		if (조건식)			// 조건문의 시작
//		{
//			종속문장 ;
//		}
//		else if (조건식)		// 조건문을 추가
//		{
//			종속 문장;
//		}
//		else				// 나머지
//		{
//			종속 문장;		
//		}
//		if ~else문에서 조건식 뒤에 ;(세미콜론)을 작성하게 되면 종속 문장은 사라지게 된다.
//		if ~else문에서 종속 문장이 한 줄 일때는 {}(중괄호)를 생략할 수 있다.

// switch ~case의 원형 : 
//		switch (비교할 값)
//		{
//			case 해당 값 :		// 각 조건
//				종속 문장;
//				break;
//			default:			// 나머지
//				종속문장;
//				break;
//		}
//	switch ~case 문에서 break 구문은 해당 문법을 탈출하는 용도로 쓴다.
//	하지만 프로그래머가 의도적으로 break을 작성하지 않는 경우도 있다.
//	switch ~case 문에서 비교할 값 공간에는 정수, 정수로 변환할 수 있는 값, 정수가 저장된 변수만 작성할 수 있다.
//

int main()
{
	// printf("연산 결과 : %d\n", 10 != 3 ? 10 : 20 );

	//Q1
	/*int num1 = 0;

	printf("입력하세요 : ");
	scanf("%d", &num1);
	printf("%s\n", num1 >= 14 ? "14보다 크거나 같은수" : "14보다 작은수");*/

	

	//Q2
	/*int num2 = 0;

	printf("입력하세요 : ");
	scanf_s("%d", &num2);
	printf("%s\n", num2 % 3 == 0 ? "참" : "거짓");*/

	// 3 -> 0 
	// 4 -> 1
	// 5 -> 2
	// 6 -> 0
	// 7 -> 1

	/*printf("크기 : %d\n", sizeof(5));
	printf("크기 : %d\n", sizeof(5.12345));*/

	/*int num;

	printf("입력 : ");
	scanf("%d", &num);

	if (num > 10)
	{
		printf("num은 10보다 큽니다.\n");
	}
	else if (num > 5)
	{
		printf("num은 5보다 큽니다.\n");
	}
	else
	{
		printf("num은 5보다 작습니다.\n");
	}*/

	/*int num;

	printf("입력 : ");
	scanf("%d", &num);

	if (num == 5)
	{
		printf("num은 5입니다.\n");
	}*/

	////Q1
	//int num1;

	//printf("입력 : ");
	//scanf("%d", &num1);
	//if (num1 >= 14) {
	//	printf("14보다 크거나 같은 수");
	//}
	//else{
	//	printf("14보다 작은 수");
	//}


	////Q2
	//int num2;

	//printf("입력 : ");
	//scanf("%d", &num2);
	//if (num2 % 3 == 0) {
	//	printf("참");
	//}
	//else {
	//	printf("거짓");
	//}

	/*int kor = 0;
	int math = 0;
	int eng = 0;
	double average;

	printf("국어 점수 : ");
	scanf("%d", &kor);

	printf("영어 점수 : ");
	scanf("%d", &eng);
	
	printf("수학 점수 : ");
	scanf("%d", &math);

	average = (kor + math + eng) / 3.0;

	printf("평균 : %.2lf\n", average);

	printf("등급 : ");
	if (average >= 90) {
		printf("A\n");
	}
	else if (average >= 80) {
		printf("B\n");
	}
	else if (average >= 70) {
		printf("C\n");
	}
	else if (average >= 60) {
		printf("D\n");
	}
	else {
		printf("F\n");
	}*/


	/*int num = 0;

	printf("입력 : ");
	scanf("%d", &num);

	switch (num)
	{
		case 1:
			printf("num은 1입니다.\n");
			break;
		case 2:
			printf("num은 2입니다.\n");
			break;
		case 3:
			printf("num은 3입니다.\n");
			break;
		case 4:
			printf("num은 4입니다.\n");
			break;
		default:
			printf("1 ~ 4중 하나를 입력 해 주세요. \n");
	}*/


	/*int num;

	printf("입력 : ");
	scanf("%d", &num);

	switch (num)
	{
		case 4:
			printf("4");
		case 3:
			printf("3");
		case 2:
			printf("2");
		case 1:
			printf("1");
		case 0:
			printf("0");
	}*/

	/*
	//Q1
	int num1;

	printf("입력 : ");
	scanf("%d", &num1);

	//	switch (num1 >= 14 ? 1 : 0)
	switch (num1 >= 14)
	{
	case 1:
		printf("14보다 크거나 같은 수\n");
		break;
	default:
		printf("14보다 작은 수\n ");
	}

	//Q2
	int num2;

	printf("입력 : ");
	scanf("%d", &num2);

	switch (num2 % 3) {
	case 0:
		printf("참\n");
		break;
	default:
		printf("거짓\n");
	}
	*/

	//Q1
	
	int kor = 0;
	int mat = 0;
	int eng = 0;
	double avg;

	printf("국어 : ");
	scanf("%d", &kor);

	printf("수학 : ");
	scanf("%d", &mat);

	printf("영어 : ");
	scanf("%d", &eng);

	avg = (kor + mat + eng) / 3.0;

	printf("평균 : %.2lf\n", avg);
	printf("등급 : ");

	switch ((int)avg / 10) {
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");
	}

	return 0;
}