#include <stdio.h>

void main() {
	// ��Ȳ��
	// �̻����� ���� ������ ���ڰ� �Ѵ�.

	int choice = 0;

	printf("���� �� ������ ����?\n");
	printf("1.�׷� ����\n2.�����غ���\n3.�Ⱦ�!\n4.���� ����~ �����÷� ����\n");
	scanf_s("%d", &choice);

	switch (choice) {
	case 1:
		printf("�� �ʹ� ���� �߰�~\n");
		break;

	case 2:
		printf("��� ����~ �߰�~\n");
		break;

	case 3:
		printf("�ٸ� ��� �����?\n");
		break;
	
	case 4:
		printf("�׷���?\n");
		break;
		
	default:
		printf("����� �ž�?\n");
	}

}