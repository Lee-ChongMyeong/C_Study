#include <stdio.h>

void main() {


	/*for (int i = 0; i < 5; i++) {
		printf("%d. ���Ѹ�\n", i + 1);
	}*/
	
	//1 ~ 100 ���� ����ϱ�

	for (int i = 1; i <= 100; i++) {
		printf("%d ", i);
	}

	printf("\n");

	// 100 ~ 1���� ����ϱ�
	for (int i = 100; i >=1; i--) {
		printf("%d ", i);
	}

	printf("\n");

	// 1 ~ 100���� ¦���� ����ϱ�
	for (int i = 1; i <= 50; i++) {
		printf("%d ", 2 * i);
	}

	printf("\n");
	// 1 ~ 100���� Ȧ���� ����ϱ� 
	for (int i = 1; i <= 50; i++) {
		printf("%d ", 2 * i - 1);
	}

	printf("\n");

	// 1 ~ 10���� �� ����ϱ�
	int sum1 = 0;
	for (int i = 1; i <= 10; i++) {
		sum1 += i;
	}
	printf("1~10���� �� : %d", sum1);

	printf("\n");


	// 1 ~ 100���� �� ����ϱ�
	int sum2 = 0;
	for (int i = 1; i <= 100; i++) {
		sum2 += i;
	}
	printf("1~100���� �� : %d", sum2);

	printf("\n");

	// 1 ~ 100���� 4������ ����ϱ� (1,2,3,4)
	for (int i = 1; i <= 100; i++) {

		if (i <= 4) {
			printf("%d ", i);
		}
		else {
			break;
		}
	}
		printf("\n");

		//1 ~ 100���� 100 ~70���� ����ϱ� (100, 99, 98, ,,,70)
	for (int i = 100; i >= 1; i--) {

		if (i >= 70) {
			printf("%d ", i);
		}
		else {
			break;
			}
	}

	
	return 0;
}