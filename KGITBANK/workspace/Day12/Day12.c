#include <stdio.h>

// ---- 함 수 ----
// 함수를 정의할 떄는 반드시 다른 함수 바깥에 정의해야 된다.

//
// <함수의 정의>
// 반환형 : 함수 내용의 작업을 마치고 값을 반환해줄떄 사용할 자료형
// 함수이름 : 함수를 사용하기 위해 호출 할 때 사용할 이름
// 매개 변수 : 함수를 호출할 때 값을 전해줄 수 있는데, 이 때 값을 저장하는 변수
// 함수 기능 : 함수의 기능을 맡아줄 코드들이 작성되는 영역
//
// int		Add			(int a, int b)
// [반환형] [함수이름]    [매개변수]
// {
//		return a + b;
//		[함수 기능]
// } 

// <함수의 호출>
// 반환값을 저장할 변수 : 함수가 반환해주는 값을 저장할 변수
// 호출할 함수 이름 : 정의된 함수 중 사용할 함수의 이름
// 인수 : 함수가 동작할 떄 필요한 값
// 
// 반환값을 저장할 변수 = 호출할 함수 이름(인수);
// [반환값이 존재하는 함수 호출 원형]
//
// 호출할 함수 이름(인수);
// [반환값이 존재하지 않는 함수 호출 원형]
//
// main 함수는 int로 -> 정상 종료 : 0, 오류 : -1
// void main 함수로 쓸 경우 정상 종료됬는지 오류가 났는지 알 수 없다.


int Add1(int n1, int n2)	    //반환값이 존재하는 함수
{
	return n1 + n2;
}

void Add2(int n1, int n2)	// 반환값이 존재 하지 않는 함수
{
	printf("연산 결과 : %d\n", n1 + n2);
}

// 더한 값, 뺸값 - 반환값 x 

void Add(int n1, int n2)
{
	printf("더한 값 : %d\n", n1 + n2);
}

void Min(int n1, int n2)
{
	printf("뺀 값 : %d\n", n1 - n2);
}

int Mul(int n1, int n2)
{
	return n1 * n2;
}

int Div(int n1, int n2)
{
	return n1 / n2;
}

void Calc(int num1, char ch, int num2)
{
	switch (ch)
	{
	case '+':
		Add(num1, num2);
		break;
	case '-':
		Min(num1, num2);
		break;
	case '*':
		printf("곱한 값 : %d\n", Mul(num1, num2));
		break;
	case '/':
		printf("나눈 값 : %d\n", Div(num1, num2));
		break;
	}
}


/*
int ins1(int n1, int n2)
{
	return n1 + n2;
}

int ins2(int n1, int n2)
{
	return n1 - n2;
}

int ins3(int n1, int n2)
{
	return n1 * n2;
}

int ins4(int n1, int n2)
{
	return n1 / n2;
}
*/

int total(int n1, int n2, int n3)
{
	return n1 + n2 + n3;
}

double ave(int total)
{
	return total / 3.0;
}

char Grade(double ave)
{
	switch ((int)ave / 10)
	{
	case 10:
	case 9:
		return 'A';
		break;
	case 8:
		return 'B';
		break;
	case 7:
		return 'C';
		break;
	case 6:
		return 'D';
		break;
	default:
		return 'F';
		break;
	}
}



int main() {
	
	/*
	// 반환값이 존재하는 함수
	int result;

	result = Add1(18, 5);

	printf("연산결과 : %d\n", result);

	result = Add1(62, 51);

	printf("연산 결과 : %d\n", result);

	// 반환값이 존재하지 않는 함수
	Add2(25, 81);
	Add2(76, 10);

	*/

	/*
	int num1 = 0;
	int num2 = 0;
	int result1;
	int result2;


	
	

	// 더한값
	Add(num1, num2);

	// 뺸값
	Min(num1, num2);
	
	// 곱한 값
	result1 = Mul(num1, num2);
	printf("곱한 값 : %d\n", result1);
	
	// 나눈 값
	result2 = Div(num1, num2);
	printf("나눈 값 : %d\n", result2);
	*/


	//int num1, num2;
	//char ch;

	//	/*printf("입력 하세요 : ");
	//	scanf("%d %c %d", &num1, &p, &num2);

	//	if (p == '+') {
	//		result1 = ins1(num1, num2);
	//		printf("더한 값 : %d\n", result1);
	//	}
	//	else if (p == '-') {
	//		result2 = ins2(num1, num2);
	//		printf("뺸 값 : %d\n", result2);
	//	}
	//	else if (p == '*') {
	//		result3 = ins3(num1, num2);
	//		printf("곱한 값 : %d\n", result3);
	//	}
	//	else if (p == '/') {
	//		result4 = ins4(num1, num2);
	//		printf("나눈 값 : %d\n", result4);
	//	}
	//	else {
	//		printf("다시 입력 하세요");
	//	}*/


	//	printf("연산 입력 : ");
	//	scanf("%d %c %d", &num1, &ch, &num2);

	//	Calc(num1, ch, num2);

	int kor, math, eng;
	double result1;
	char grade;
	int result2;
	int result3;
	
	

	printf("국어, 수학, 영어 입력 : ");
	scanf("%d %d %d", &kor, &math, &eng);
	
	result2 = total(kor, math, eng);
	printf("총합 : %d\n", result2);

	result1 = ave(total);
	printf("평균 : %.2f\n", result1);

	grade = Grade(ave);
	printf("등급 : %c\n", grade);

	return 0;
	
}