#include <stdio.h>
#include <string.h>


// ---- 문자열 관련 함수 ----
// 문자열 관련 함수를 사용할 떄는 string.h 헤더파일을 선언해줘야 한다.
// strlen(문자열) : 넘겨준 문자열의 길이를 반환해주는 함수
//					(반환해주는 길이는 NULL 문자를 제외한 길이이다.)
// strcmp(문자열1, 문자열2) : 넘겨준 두 개의 문자열을 비교하고 같으면 거짓(0), 다르면 참을 반환해주는 함수
//							 (문자열이 다를 경우, 문자열1이 사전편차순으로 빠르면 -1, 느리면 1을 반환)
// strcpy(문자열을 저장할 공간, 복사할 문자열) : 넘겨받은 문자열을 저장할 공간에다 복사해주는 함수 
// strcat(문자열을 붙일 공간, 붙일 문자열) : 문자열을 붙일 공간 뒤에 넘겨받은 문자열을 덧붙여주는 함수

// ---- 포인터 ----
// 포인터 변수는 주소를 저장해 주는 변수
// 포인터 변수 선언 방법 : 저장할 공간의 자료형 *(애스타리스크)  변수명;
// 포인터 변수 안에 저장된 주소로 접근해서 주소 안의 값을 확인할 때는 
// *포인터 변수명 으로 확인 할 수 있다. 이를 역참조라고 한다.
// 포인터 변수는 일반 변수의 주소를 저장할 수 있고,
// 이중 포인터 변수는 포인터 변수의 주소를 저장할 수 있고, 
// 삼중 포인터 변수는 이중 포인터 변수의 주소를 저장할 수 있고,
// 사중 포인터 변수는 삼중 포인터 변수의 주소를 저장할 수 있고,
// ... 



void main() {

	/*char str[100];

	printf("입력 : ");
	scanf("%s", str);
	
	printf("출력 : %d\n", strlen(str));*/

	/*char str1[100];
	char str2[100];

	printf("문자열1 입력 : ");
	scanf("%s", str1);

	printf("문자열2 입력 : ");
	scanf("%s", str2);

	printf("출력 : %d\n", strcmp(str1, str2)); */

	/*char str1[100];
	char str2[100];

	printf("입력 : ");
	scanf("%s", str1);

	strcpy(str2, str1);

	printf("출력 : %s\n", str2);*/

	/*char str1[100];
	char str2[100];

	printf("문자열1 입력 : ");
	scanf("%s", str1);
	printf("문자열2 입력 : ");
	scanf("%s", str2);

	strcat(str1, str2);

	printf("출력 : %s\n", str1);*/

	/*
	int num = 5;
	int* ptr;	// int* 단지 하나의 자료형이다. 역참조 의미 x 
	int** dptr;
	int*** tptr;

	ptr = &num; // ptr에다가 num의 주소를 저장
				// & 주소를 의미

	dptr = &ptr;
	tptr = &dptr;

	printf("num의 주소 : %p\n", &num);
	printf("ptr의 값 : %p\n\n", ptr);

	printf("num의 값: %d\n", num);
	printf("ptr을 이용한 num의 값 : %d\n", *ptr); //역참조
	printf("dptr을 이용한 num의 값 : %d\n", **dptr); 
	printf("tptr을 이용한 num의 값 : %d\n", ***tptr);

	printf("\nptr의 주소 : %p\n", &ptr);
	printf("dptr의 값 : %p\n", dptr);
	printf("\ndptr의 주소 : %p\n", &dptr);
	printf("tptr의 값 : %p\n", tptr);
	*/

	// Q1)
	// 정수형 변수 선언 num , 포인트 변수 선언 ptr, num을 ptr에 넘겨줌
	// 입력 : ptr
	// 출력 : num 

	int num;
	int* ptr;

	ptr = &num;

	printf("입력 : ");
	scanf("%d", ptr);

	printf("출력 : %d\n", num);



	return 0;
}