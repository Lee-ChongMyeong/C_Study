#include <stdio.h>

void main() {

	int data1 = 0;
	int data2 = 0;
	int result = 0;

	printf("ù��° ������ �Է��ϼ���\n");
	scanf_s("%d", &data1);	// & : ����(�ּ�)������
							// data1�̶�� ��������� �ּҰ�
//	printf("%d", data1);		

	printf("�ι��� ������ �Է��ϼ���\n");
	scanf_s("%d", &data2);
//	printf("%d", data2);

	result = data1 + data2;

	printf("�� �� : %d\n", result);
	
}