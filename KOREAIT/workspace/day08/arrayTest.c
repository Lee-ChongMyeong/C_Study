#include <stdio.h>
#define arDataSIZE 3


void main() {

	int arData[arDataSIZE] = { 1, 2, 3 };
	// 4 * 3 = 12
	// int length = sizeof(arData) / sizeof(int);


	/*
	printf("%p\n", arData);
	printf("%p\n", arData + 1);
	printf("%p\n", arData + 2);
	// 4�� ���� == 1ĭ�� ������.

	printf("%p\n", &arData[0]);
	printf("%p\n", &arData[1]);
	printf("%p\n", &arData[2]);
	// �迭�� �����ʹ�.
	*/

	for (int i = 0; i < arDataSIZE; i++) {
		// printf("%d\n", *(arData + i));
		printf("%d\n", arData[i]);
	}
}