#include <stdio.h>

void main() {
	int num1 = 0;
	int num2 = 0;

	printf("ù���� ���� : ");
	scanf_s("%d", &num1);
	printf("�ι��� ���� : ");
	scanf_s("%d", &num2);

	if (num1 > num2) {
		printf("%d��(��) �� Ů�ϴ�.", num1);
	}
	else if (num1 != num2) {
		printf("%d��(��) �� Ů�ϴ�.", num2);
	}
	else {
		printf("�� ���� �����ϴ�.");
	}

}