#include <stdio.h>
#include "Day13.h"

// ---- ������ ���� ���� ---- 
// ���� ���� : '���' ���ο��� ����� ������, ��� ���ο����� ��ȿ�ϰ� ����� ������ ��ü
// ���� ���� : �Լ� �ܺο��� ����� ������, ���α׷��� ����� �� ����
// ���� ���� : ���������� ���� ������ Ư���� ��� ������ ����

// ���� ���� : �������ο� ���ο� �������� ���� �̸��� ������ ����Ǹ�
//			  �ܺο� �ִ� �������� ���ο� �ִ� ������ �� ���� �켱������ ���� �ȴ�.
// ���� ���� : ���������� ������ �ʱ�ȭ�� �������� ������ 0���� �ʱ�ȭ �ȴ�.
//			  ���������� ���������� �̸��� ���ٸ�, �ش� ������ ����� 
//			  ���������� �� ���� �켱 ������ ���� �ȴ�.
// ���� ���� : ���������� ���������� Ư���� ��� ������ ����.
//			  ���������� Ư���� ���α׷��� ����ɶ� ������ �����ȴٴ� Ư���� ������ �ִ�. 
//			  ���� ������ Ư���� ��� ���ο����� ��ȿ�ϴٴ� Ư���� ���� �ִ�.
//
// ���� ���� ���� ��� : static �ڷ��� ������;
// 

//int num;
//
//void Func() {
//	printf("num�� �� : %d\n", num);
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
	(*num)++; // ++ �� *���� �켱������ ����
}



void Total(kor, mat, eng) {
	printf("�� �� : %d\n", kor, mat, eng);

}

void Avg(tot) {
	printf("�� �� : %.2f\n", tot/3.0);
}

void Grade(avg) {

	switch (avg) {
		case 10:
		case 9:
			printf("��� : A");
			break;
		case 8:
			printf("��� : B");
			break;
		case 7:
			printf("��� : C");
			break;
		case 6:
			printf("��� : D");
			break;
		default:
			printf("��� : F");



	}
}



int main()
{
	/*int num = 5;
	int num2 = 7;

	{
		int num = 3;
		printf("num�� �� : %d\n", num);
		printf("num2�� �� : %d\n", num2);
	}*/

	/*int num = 4;

	printf("num�� �� : %d\n", num);
	
	Func();*/

	//Func();
	//Func();

	////printf("n1�� �� : %d\n", n1);
		
	/*int num = 2;

	Func(&num);

	printf("num�� �� : %d\n", num);*/


	int kor, mat, eng = 0;
	int tot;
	double avg;

	printf("����, ����, ���� �Է� : ");
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