#include <stdio.h>

// ---- ���� ������ ----
// �ٸ� �����ڵ���� �ٸ��� �ǿ����ڰ� 3�� �̴�.
// ���� �������� ���� : ���ǽ� ? ���� ���� ��ȯ �� : ������ ���� ��ȯ��
//
// ---- size of ������ ----
// �Ѱ��� ���� ũ�⸦ �����ִ� ������
// sizeof() �������� ���� : sizeof(ũ�⸦ ������ ��);

// ---- ���ǹ� ----
// ���ǽ��� ���ϰ� �ش� ���ǽ��� ���̸� ���ӹ����� ����, �����̸� Ż��
// if ~ else, switch ~ case �� ���� ����
//
// if ~ else ���� : 
//		if (���ǽ�)			// ���ǹ��� ����
//		{
//			���ӹ��� ;
//		}
//		else if (���ǽ�)		// ���ǹ��� �߰�
//		{
//			���� ����;
//		}
//		else				// ������
//		{
//			���� ����;		
//		}
//		if ~else������ ���ǽ� �ڿ� ;(�����ݷ�)�� �ۼ��ϰ� �Ǹ� ���� ������ ������� �ȴ�.
//		if ~else������ ���� ������ �� �� �϶��� {}(�߰�ȣ)�� ������ �� �ִ�.

// switch ~case�� ���� : 
//		switch (���� ��)
//		{
//			case �ش� �� :		// �� ����
//				���� ����;
//				break;
//			default:			// ������
//				���ӹ���;
//				break;
//		}
//	switch ~case ������ break ������ �ش� ������ Ż���ϴ� �뵵�� ����.
//	������ ���α׷��Ӱ� �ǵ������� break�� �ۼ����� �ʴ� ��쵵 �ִ�.
//	switch ~case ������ ���� �� �������� ����, ������ ��ȯ�� �� �ִ� ��, ������ ����� ������ �ۼ��� �� �ִ�.
//

int main()
{
	// printf("���� ��� : %d\n", 10 != 3 ? 10 : 20 );

	//Q1
	/*int num1 = 0;

	printf("�Է��ϼ��� : ");
	scanf("%d", &num1);
	printf("%s\n", num1 >= 14 ? "14���� ũ�ų� ������" : "14���� ������");*/

	

	//Q2
	/*int num2 = 0;

	printf("�Է��ϼ��� : ");
	scanf_s("%d", &num2);
	printf("%s\n", num2 % 3 == 0 ? "��" : "����");*/

	// 3 -> 0 
	// 4 -> 1
	// 5 -> 2
	// 6 -> 0
	// 7 -> 1

	/*printf("ũ�� : %d\n", sizeof(5));
	printf("ũ�� : %d\n", sizeof(5.12345));*/

	/*int num;

	printf("�Է� : ");
	scanf("%d", &num);

	if (num > 10)
	{
		printf("num�� 10���� Ů�ϴ�.\n");
	}
	else if (num > 5)
	{
		printf("num�� 5���� Ů�ϴ�.\n");
	}
	else
	{
		printf("num�� 5���� �۽��ϴ�.\n");
	}*/

	/*int num;

	printf("�Է� : ");
	scanf("%d", &num);

	if (num == 5)
	{
		printf("num�� 5�Դϴ�.\n");
	}*/

	////Q1
	//int num1;

	//printf("�Է� : ");
	//scanf("%d", &num1);
	//if (num1 >= 14) {
	//	printf("14���� ũ�ų� ���� ��");
	//}
	//else{
	//	printf("14���� ���� ��");
	//}


	////Q2
	//int num2;

	//printf("�Է� : ");
	//scanf("%d", &num2);
	//if (num2 % 3 == 0) {
	//	printf("��");
	//}
	//else {
	//	printf("����");
	//}

	/*int kor = 0;
	int math = 0;
	int eng = 0;
	double average;

	printf("���� ���� : ");
	scanf("%d", &kor);

	printf("���� ���� : ");
	scanf("%d", &eng);
	
	printf("���� ���� : ");
	scanf("%d", &math);

	average = (kor + math + eng) / 3.0;

	printf("��� : %.2lf\n", average);

	printf("��� : ");
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

	printf("�Է� : ");
	scanf("%d", &num);

	switch (num)
	{
		case 1:
			printf("num�� 1�Դϴ�.\n");
			break;
		case 2:
			printf("num�� 2�Դϴ�.\n");
			break;
		case 3:
			printf("num�� 3�Դϴ�.\n");
			break;
		case 4:
			printf("num�� 4�Դϴ�.\n");
			break;
		default:
			printf("1 ~ 4�� �ϳ��� �Է� �� �ּ���. \n");
	}*/


	/*int num;

	printf("�Է� : ");
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

	printf("�Է� : ");
	scanf("%d", &num1);

	//	switch (num1 >= 14 ? 1 : 0)
	switch (num1 >= 14)
	{
	case 1:
		printf("14���� ũ�ų� ���� ��\n");
		break;
	default:
		printf("14���� ���� ��\n ");
	}

	//Q2
	int num2;

	printf("�Է� : ");
	scanf("%d", &num2);

	switch (num2 % 3) {
	case 0:
		printf("��\n");
		break;
	default:
		printf("����\n");
	}
	*/

	//Q1
	
	int kor = 0;
	int mat = 0;
	int eng = 0;
	double avg;

	printf("���� : ");
	scanf("%d", &kor);

	printf("���� : ");
	scanf("%d", &mat);

	printf("���� : ");
	scanf("%d", &eng);

	avg = (kor + mat + eng) / 3.0;

	printf("��� : %.2lf\n", avg);
	printf("��� : ");

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