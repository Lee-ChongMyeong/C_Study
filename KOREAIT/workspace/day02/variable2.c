#include <stdio.h>

void main() {
	// ����, �Ǽ�, ���� �� 3���� ���� ���� ��
	// �� ������� ����ϱ�

	int data1 = 10;
	float data2 = 10.45F;
	double data3 = 100.99;
	char data4 = 'A';
	const char* data5 = "ABC";

	printf("%d\n", data1);
	printf("%o\n", data1);
	printf("%x\n", data1);
	printf("%lf\n", data2);
	printf("%.1lf\n", data3);
	printf("%c\n", data4);
	printf("%s\n", data5);



	return 0;
}