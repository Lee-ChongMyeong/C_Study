#include <stdio.h>

void main() {

// ���� 2���� �޾Ƽ�, ��� ������ ����ϱ�
// %(��ⷯ��) 10%3 : 1
// 10 , 3 �Է½� 3.33�� ����ϱ�.

	/*
	int data1 = 0;
	int data2 = 0;

	printf("���� 1 : ");
	scanf_s("%d", &data1);

	printf("���� 2 : ");
	scanf_s("%d", &data2);

	int data3 = data1 / data2;
	int data4 = data1 % data2;

	printf("�� : %d ", data3);
	printf("������ : %d ", data4);
	*/

	int data1 = 0;
	int data2 = 0;
	int value = 0;
	int theRest = 0;
	double result = 0.0;

	printf("ù���� ������ �Է��ϼ���\n");
	scanf_s("%d", &data1);
	
	printf("�ι��� ������ �Է��ϼ���\n");
	scanf_s("%d", &data2);

	value = data1/data2;
	theRest = data1 % data2;
	result = (double)data1 / data2;
	
	printf("�� : %d\n������ : %d\n����� : %.2lf\n", value, theRest, result);
	




	
	return 0;
}
