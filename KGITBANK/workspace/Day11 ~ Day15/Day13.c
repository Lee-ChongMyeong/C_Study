#include <stdio.h>

//---- ������ ���� ���� ----
// ���� ����: ���� ���ο� ���ο� �������� ���� �̸��� ������ ����Ǹ�
//			 �ܺο� �ִ� �������� ���ο� �ִ� ������ �� ���� �켱������ ���� �ȴ�.
// ���� ����: ���� ������ ������ �ʱ�ȭ�� �������� ������ 0���� �ʱ�ȭ �ȴ�.
//			 ���� ������ ���� ������ �̸��� ���ٸ� �ش� ������ �����
//			 ���� ������ �� ���� �켱������ ���� �ȴ�.
// ���� ����: ���� ������ ���� ������ Ư���� ��� ������ �ִ�.
//			 ���� ������ Ư���� ���α׷��� ����ɶ� ������ �����ȴٴ� Ư���� ���� �ִ�.
//			 ���� ������ Ư���� ��� ���ο����� ��ȿ�ϴٴ� Ư���� ���� �ִ�.
// ���� ���� ���� ���: static �ڷ��� ������;

//int num;
//
//void Func()
//{
//	printf("num�� ��: %d\n", num);
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

		printf("num�� ��: %d\n", num);
		printf("num2�� ��: %d\n", num2);
	}

	printf("num�� ��: %d\n", num);
	printf("num3�� ��: %d\n", num3);*/

	/*int num = 4;

	printf("num�� ��: %d\n", num);

	Func();*/

	/*Func();
	Func();

	//printf("n1�� ��: %d\n", n1);*/

	/*int num = 2;

	Func(&num);

	printf("num�� ��: %d\n", num);*/

	int kor, mat, eng, total;
	double avg;
	char grade;

	printf("����, ����, ���� ���� �Է�: ");
	scanf("%d %d %d", &kor, &mat, &eng);

	Total(kor, mat, eng, &total);
	Avg(total, &avg);
	Grade(avg, &grade);

	printf("����: %d\n", total);
	printf("���: %.2f\n", avg);
	printf("���: %c\n", grade);

	return 0;
}