#include <stdio.h>
#include "Day06.h"

// ---- �ݺ��� ----
// ���ǽ��� ���ϸ鼭 ���� ��� ���� ������ �����Ű�� ��ȭ���� ���� ���ǽ��� �� �ٽ� ���ϴ� ����
// for(), while(), do ~ while() 3������ ����
//
// for ���� �⺻ ����:
//		for (�ʱ��; ���ǽ�; ��ȭ��)
//		{
//			���� ����;
//		}
//	�ʱ�� -> ���ǽ� -> ���ӹ��� -> ��ȭ�� -> ���ǽ� -> ���ӹ��� -> ��ȭ�� -> ... ������ ����ȴ�.
//	for������ ���ѷ����� ����ϰ� ���� ���� �ʱ��, ���ǽ�, ��ȭ���� �����ϸ� �ȴ�.
//			ex) for(;;) 
//	for������ ���� ������ �� �� �϶��� {}(�߰�ȣ)�� ������ �� �ִ�.
//
//	---- ��Ÿ ���� ----
//  break: �ش� ������ ������ �Ǹ� �ݺ����� Ż��.
//  continue : �ش� ������ ������ �Ǹ� continue���� �Ʒ� �ִ� ���� ������ �������� �ʰ� ����ȴ�.  


int main() {

	/*
	for (int i = 0; i < 10; i++) {
		printf("Hello World!\n");
	}

	// printf("i�� �� : %d\n", i);
	*/

	/*for (; ;) {
		printf("Hello world!\n");
	}*/
	
	/*for (int i = 0; i < 10; i++)
	{
		if (i == 5)
			break;

		printf("Hello world! i : %d\n", i);
	}

	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
			continue;

		printf("Hello world! i : %d\n", i);
	}*/


	////Q1

	//printf("��� : ");
	///*for (int i = 65; i <= 90; i++) {
	//	printf("%c", i);
	//}*/

	//for (char i = 'A'; i <= 'Z'; i++)
	//	printf("%c", i);

	//printf("\n");

	
	////Q2

	//char num;

	//printf("���ĺ��� �Է��ϼ��� : ");
	//scanf_s("%c", &num);


	///*for (int i = 'a'; i <= num; i++) {
	//	printf("%c ", i);
	//}*/

	//for (char i = 'a'; i <= num; i++) {
	//	printf("%c ", i);
	//}

	//printf("\n");
	


	/*
	//Q3

	int num1;

	for (; ;) {

		printf("�Է� : ");
		scanf_s("%d", &num1);

		if (num1 == 9) {
			printf("9�� �ԷµǾ� ���α׷��� �����մϴ�.\n");
			break;
		}

		printf("��� : %d\n", num1);
	}
	*/



	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("i : %d, j : %d ", i, j);
		}
		printf("\n");
	}*/

	//Q1
	for (int i = 0; i < 5; i++) {
		
		for (int j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	//Q2 
	for (int i = 0; i < 5; i++){

		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	//Q3
	for (int i = 1; i < 6; i++) {

		for (int j = 0; j < 6-i; j++) {
			printf(" ");
		}
		for (int k = 0; k < i*2-1; k++) {
			printf("*");
		}


		printf("\n");
	}
	printf("\n");

	//Q4

	for (int i = 1; i < 6; i++) {

		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int k = 0; k < (6-i) * 2 - 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}