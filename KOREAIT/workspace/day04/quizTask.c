#include <stdio.h>

void main() {

	int choice = 0;
	int answer = 4;
	int answer1 = 4;
	int answer2 = 2;

	/*printf("Q. ������ ���̵��� �ƴ� ���� ? \n");
	printf("1.BTS\n2.IKON\n3.WINNER\n4.KL\n");
	scanf_s("%d", &choice);
	
	choice == answer ? printf("����") : printf("����");*/

	printf("Q. ������ ���̵��� �ƴ� ���� ? \n");
	printf("1.BTS\n2.IKON\n3.WINNER\n4.KL\n");
	scanf_s("%d", &choice);

	choice == answer1 || choice == answer2 ? printf("����") : printf("����");

	return 0;
}