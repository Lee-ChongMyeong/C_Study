#include <stdio.h>

// ---- �� �� ----
// �Լ��� ������ ���� �ݵ�� �ٸ� �Լ� �ٱ��� �����ؾ� �ȴ�.

//
// <�Լ��� ����>
// ��ȯ�� : �Լ� ������ �۾��� ��ġ�� ���� ��ȯ���ً� ����� �ڷ���
// �Լ��̸� : �Լ��� ����ϱ� ���� ȣ�� �� �� ����� �̸�
// �Ű� ���� : �Լ��� ȣ���� �� ���� ������ �� �ִµ�, �� �� ���� �����ϴ� ����
// �Լ� ��� : �Լ��� ����� �þ��� �ڵ���� �ۼ��Ǵ� ����
//
// int		Add			(int a, int b)
// [��ȯ��] [�Լ��̸�]    [�Ű�����]
// {
//		return a + b;
//		[�Լ� ���]
// } 

// <�Լ��� ȣ��>
// ��ȯ���� ������ ���� : �Լ��� ��ȯ���ִ� ���� ������ ����
// ȣ���� �Լ� �̸� : ���ǵ� �Լ� �� ����� �Լ��� �̸�
// �μ� : �Լ��� ������ �� �ʿ��� ��
// 
// ��ȯ���� ������ ���� = ȣ���� �Լ� �̸�(�μ�);
// [��ȯ���� �����ϴ� �Լ� ȣ�� ����]
//
// ȣ���� �Լ� �̸�(�μ�);
// [��ȯ���� �������� �ʴ� �Լ� ȣ�� ����]
//
// main �Լ��� int�� -> ���� ���� : 0, ���� : -1
// void main �Լ��� �� ��� ���� �������� ������ ������ �� �� ����.


int Add1(int n1, int n2)	    //��ȯ���� �����ϴ� �Լ�
{
	return n1 + n2;
}

void Add2(int n1, int n2)	// ��ȯ���� ���� ���� �ʴ� �Լ�
{
	printf("���� ��� : %d\n", n1 + n2);
}

// ���� ��, �A�� - ��ȯ�� x 

void Add(int n1, int n2)
{
	printf("���� �� : %d\n", n1 + n2);
}

void Min(int n1, int n2)
{
	printf("�� �� : %d\n", n1 - n2);
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
		printf("���� �� : %d\n", Mul(num1, num2));
		break;
	case '/':
		printf("���� �� : %d\n", Div(num1, num2));
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
	// ��ȯ���� �����ϴ� �Լ�
	int result;

	result = Add1(18, 5);

	printf("������ : %d\n", result);

	result = Add1(62, 51);

	printf("���� ��� : %d\n", result);

	// ��ȯ���� �������� �ʴ� �Լ�
	Add2(25, 81);
	Add2(76, 10);

	*/

	/*
	int num1 = 0;
	int num2 = 0;
	int result1;
	int result2;


	
	

	// ���Ѱ�
	Add(num1, num2);

	// �A��
	Min(num1, num2);
	
	// ���� ��
	result1 = Mul(num1, num2);
	printf("���� �� : %d\n", result1);
	
	// ���� ��
	result2 = Div(num1, num2);
	printf("���� �� : %d\n", result2);
	*/


	//int num1, num2;
	//char ch;

	//	/*printf("�Է� �ϼ��� : ");
	//	scanf("%d %c %d", &num1, &p, &num2);

	//	if (p == '+') {
	//		result1 = ins1(num1, num2);
	//		printf("���� �� : %d\n", result1);
	//	}
	//	else if (p == '-') {
	//		result2 = ins2(num1, num2);
	//		printf("�A �� : %d\n", result2);
	//	}
	//	else if (p == '*') {
	//		result3 = ins3(num1, num2);
	//		printf("���� �� : %d\n", result3);
	//	}
	//	else if (p == '/') {
	//		result4 = ins4(num1, num2);
	//		printf("���� �� : %d\n", result4);
	//	}
	//	else {
	//		printf("�ٽ� �Է� �ϼ���");
	//	}*/


	//	printf("���� �Է� : ");
	//	scanf("%d %c %d", &num1, &ch, &num2);

	//	Calc(num1, ch, num2);

	int kor, math, eng;
	double result1;
	char grade;
	int result2;
	int result3;
	
	

	printf("����, ����, ���� �Է� : ");
	scanf("%d %d %d", &kor, &math, &eng);
	
	result2 = total(kor, math, eng);
	printf("���� : %d\n", result2);

	result1 = ave(total);
	printf("��� : %.2f\n", result1);

	grade = Grade(ave);
	printf("��� : %c\n", grade);

	return 0;
	
}