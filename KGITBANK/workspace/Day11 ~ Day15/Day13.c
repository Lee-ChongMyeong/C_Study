#include <stdio.h>

//---- 변수의 선언 범위 ----
// 지역 변수: 지역 내부에 새로운 지역에서 같은 이름의 변수가 선언되면
//			 외부에 있는 변수보다 내부에 있는 변수가 더 높은 우선순위를 갖게 된다.
// 전역 변수: 전역 변수는 별도의 초기화를 진행하지 않으면 0으로 초기화 된다.
//			 전역 변수와 지역 변수가 이름이 같다면 해당 지역에 선언된
//			 지역 변수가 더 높은 우선순위를 갖게 된다.
// 정적 변수: 지역 변수와 전역 변수의 특성을 모두 가지고 있다.
//			 전역 변수의 특성인 프로그램이 종료될때 공간이 해제된다는 특성을 갖고 있다.
//			 지역 변수의 특성인 블록 내부에서만 유효하다는 특성을 갖고 있다.
// 정적 변수 선언 방법: static 자료형 변수명;

//int num;
//
//void Func()
//{
//	printf("num의 값: %d\n", num);
//}

//void Func()
//{
//	static int n1 = 3;
//	int n2 = 3;
//
//	printf("n1: %d, n2: %d\n", n1, n2);
//	n1++;
//	n2++;
//}

//void Func(int* num)
//{
//	(*num)++;
//}

void Total(int kor, int mat, int eng, int* total)
{
	*total = kor + mat + eng;
}

void Avg(int total, double* avg)
{
	*avg = total / 3.0;
}

void Grade(double avg, char* grade)
{
	switch ((int)avg / 10)
	{
	case 10:
	case 9:
		*grade = 'A';
		break;
	case 8:
		*grade = 'B';
		break;
	case 7:
		*grade = 'C';
		break;
	case 6:
		*grade = 'D';
		break;
	default:
		*grade = 'F';
		break;
	}
}

int main()
{
	/*int num = 5;
	int num2 = 7;

	{
		int num = 3;
		int num3 = 11;

		printf("num의 값: %d\n", num);
		printf("num2의 값: %d\n", num2);
	}

	printf("num의 값: %d\n", num);
	printf("num3의 값: %d\n", num3);*/

	/*int num = 4;

	printf("num의 값: %d\n", num);

	Func();*/

	/*Func();
	Func();

	//printf("n1의 값: %d\n", n1);*/

	/*int num = 2;

	Func(&num);

	printf("num의 값: %d\n", num);*/

	int kor, mat, eng, total;
	double avg;
	char grade;

	printf("국어, 수학, 영어 성적 입력: ");
	scanf("%d %d %d", &kor, &mat, &eng);

	Total(kor, mat, eng, &total);
	Avg(total, &avg);
	Grade(avg, &grade);

	printf("총합: %d\n", total);
	printf("평균: %.2f\n", avg);
	printf("등급: %c\n", grade);

	return 0;
}