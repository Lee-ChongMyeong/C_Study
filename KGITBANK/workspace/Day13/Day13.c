#include <stdio.h>
#include "Day13.h"

// ---- 변수의 선언 범위 ---- 
// 지역 변수 : '블록' 내부에서 선언된 변수로, 블록 내부에서만 유효하고 블록이 끝나면 해체
// 전역 변수 : 함수 외부에서 선언된 변수로, 프로그램이 종료될 때 해제
// 정적 변수 : 지역변수와 전역 변수의 특성을 모두 가지고 있음

// 지역 변수 : 지역내부에 새로운 지역에서 같은 이름의 변수가 선언되면
//			  외부에 있는 변수보다 내부에 있는 변수가 더 높은 우선순위를 갖게 된다.
// 전역 변수 : 전역변수는 별도의 초기화를 진행하지 않으면 0으로 초기화 된다.
//			  전역변수와 지역변수가 이름이 같다면, 해당 지역에 선언된 
//			  지역변수가 더 높은 우선 순위를 가젝 된다.
// 정적 변수 : 지역변수와 전역변수의 특성을 모두 가지고 있음.
//			  전역변수의 특성인 프로그램이 종료될때 공간이 해제된다는 특성을 가지고 있다. 
//			  지역 변수의 특성인 블록 내부에서만 유효하다는 특성을 갖고 있다.
//
// 정적 변수 선언 방법 : static 자료형 변수명;
// 

//int num;
//
//void Func() {
//	printf("num의 값 : %d\n", num);
//}

/*void Func()
{
	static int n1 = 3;
	int n2 = 3;

	printf("n1 : %d, n2 : %d\n", n1, n2);
	n1++;
	n2++;
}*/

void Func(int* num) {
	(*num)++; // ++ 가 *보다 우선순위가 높음
}



void Total(kor, mat, eng) {
	printf("총 합 : %d\n", kor, mat, eng);

}

void Avg(tot) {
	printf("평 균 : %.2f\n", tot/3.0);
}

void Grade(avg) {

	switch (avg) {
		case 10:
		case 9:
			printf("등급 : A");
			break;
		case 8:
			printf("등급 : B");
			break;
		case 7:
			printf("등급 : C");
			break;
		case 6:
			printf("등급 : D");
			break;
		default:
			printf("등급 : F");



	}
}



int main()
{
	/*int num = 5;
	int num2 = 7;

	{
		int num = 3;
		printf("num의 값 : %d\n", num);
		printf("num2의 값 : %d\n", num2);
	}*/

	/*int num = 4;

	printf("num의 값 : %d\n", num);
	
	Func();*/

	//Func();
	//Func();

	////printf("n1의 값 : %d\n", n1);
		
	/*int num = 2;

	Func(&num);

	printf("num의 값 : %d\n", num);*/


	int kor, mat, eng = 0;
	int tot;
	double avg;

	printf("국어, 수학, 영어 입력 : ");
	scanf("%d %d %d", &kor, &mat, &eng);

	tot = kor + mat + eng;
	avg = tot / 3.0;

	printf(avg);


	Total(kor, mat, eng);
	Avg(tot);
	Grade(avg);
	printf("\n");


	return 0;
}