#include <stdio.h>

void main() {
	// 1 ~ 3 ������ �� �� �Է��� �� �˾� ���߱�
	int num = 0;
	printf("1~3���� �� �ϳ��� ���� �Է� : ");
	scanf_s("%d", &num);

	switch (num){
		case 1:
			printf("�Է��Ͻ� ���ڴ� %d�Դϴ�.\n", num);
			break;
		case 2:
			printf("�Է��Ͻ� ���ڴ� %d�Դϴ�.\n", num);
			break;
		case 3:
			printf("�Է��Ͻ� ���ڴ� %d�Դϴ�.\n", num);
			break;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�\n");
	}
	

	return 0;
}