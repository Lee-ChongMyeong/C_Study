#include <stdio.h>

//---- 함 수 ----
// 함수를 정의할 때는 반드시 다른 함수 바깥에 정의해야 된다.

//int Add(int n1, int n2)
//{
//	return n1 + n2;
//}
//
//void Add2(int n1, int n2)
//{
//	printf("연산 결과: %d\n", n1 + n2);
//}

//void Add(int n1, int n2);
//void Sub(int n1, int n2);
//int Mul(int n1, int n2);
//int Div(int n1, int n2);
//void Calc(int num1, char ch, int num2);

int Total(int kor, int mat, int eng)
{
	return kor + mat + eng;
}

double Avg(int total)
{
	return total / 3.0;
}

char Grade(double avg)
{
	switch ((int)avg / 10)
	{
	case 10:
	case 9:
		return 'A';
	case 8:
		return 'B';
	case 7:
		return 'C';
	case 6:
		return 'D';
	default:
		return 'F';
	}
 }

int main()
{
	/*int result;

	result = Add(18, 5);

	printf("연산 결과: %d\n", result);

	result = Add(62, 51);

	printf("연산 결과: %d\n", result);*/

	/*Add2(25, 81);
	Add2(76, 10);*/

	/*int num1, num2;

	printf("두 수 입력: ");
	scanf("%d %d", &num1, &num2);

	Add(num1, num2);
	Sub(num1, num2);

	printf("곱한 값: %d\n", Mul(num1, num2));
	printf("나눈 값: %d\n", Div(num1, num2));*/

	/*int num1, num2;
	char ch;

	printf("연산 입력: ");
	scanf("%d %c %d", &num1, &ch, &num2);

	Calc(num1, ch, num2);*/

	int kor, mat, eng, total;
	double avg;
	char grade;

	printf("국어, 수학, 영어 성적 입력: ");
	scanf("%d %d %d", &kor, &mat, &eng);

	total = Total(kor, mat, eng);
	avg = Avg(total);
	grade = Grade(avg);

	printf("총합: %d\n", total);
	printf("평균: %.2f\n", avg);
	printf("등급: %c\n", grade);

	return 0;
}

//void Add(int n1, int n2)
//{
//	printf("더한 값: %d\n", n1 + n2);
//}
//
//void Sub(int n1, int n2)
//{
//	printf("뺀 값: %d\n", n1 - n2);
//}
//
//int Mul(int n1, int n2)
//{
//	return n1 * n2;
//}
//
//int Div(int n1, int n2)
//{
//	return n1 / n2;
//}
//
//void Calc(int num1, char ch, int num2)
//{
//	switch (ch)
//	{
//	case '+':
//		Add(num1, num2);
//		break;
//	case '-':
//		Sub(num1, num2);
//		break;
//	case '*':
//		printf("곱한 값: %d\n", Mul(num1, num2));
//		break;
//	case '/':
//		printf("나눈 값: %d\n", Div(num1, num2));
//		break;
//	}
//}