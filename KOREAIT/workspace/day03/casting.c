#include <stdio.h>

void main() {
	// �ڵ� �� ��ȯ
	int data = 3.8;
	double data2 = 5;

	printf("== �ڵ� ����ȯ ==\n");
	printf("%d\n", data);
	printf("%.1lf\n", data2);

	printf("==================================\n");

	printf("%d\n", 11 / 9);
	printf("%.3lf\n", 11.0 / 9);

	// ���� �� ��ȯ
	printf("== ���� ����ȯ ==\n");
	printf("%lf\n", (double)3 / 2);		//1.5000
	printf("%.2f\n", (int)8.43 + 2.59);	// 10.59
	printf("%d\n", (int)(8.43 + 2.59));	// 11
	printf("%d\n", (int)(8.43) + (int)(2.59));	// 10	
	 

	return 0;
}