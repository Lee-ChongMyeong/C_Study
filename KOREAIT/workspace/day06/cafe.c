#include <stdio.h>
/*
	ī��
	�����÷��̽� VIP

	�޴�
	�Ƹ޸�ī��	8000
	ī���		16000			
	�����̵�	20000
	������ġ		50000
*/

void main() {
	
	int amePrice = 8000;
	int lattePrice = 16000;
	int lemonPrice = 20000;
	int swPrice = 500000;
	int choice = 0;
	int money = 100000000;
	int income = 0;
	int noMoneyCheck = 0;
	int errCheck = 0;

	while (1) {
		printf("������� ���� VTP�Դϴ�.\n");
		printf("=====================================\n		�޴� \n===================================== \n");
		printf("��.�Ƹ޸�ī��(8000��)\n��ī����(16000��)\n�鷹���̵�(20000��)\n�������ġ(50000��)\n�볪����\n");
		printf("=====================================\n");
		scanf_s("%d", &choice);
		if (choice == 5) {
			printf("�ȳ��� ������\n");
			break;
		}

		switch (choice) {
		case 1:
			if (money - amePrice >= 0) {
				money -= amePrice;
				// money = money - amePrice
				income += amePrice;
				//income = income + amePrice;
				printf("�Ƹ޸�ī�� �ֹ� �Ϸ�\n");
				noMoneyCheck = 1;
			}

			break;
		case 2:
			if (money - lattePrice >= 0) {
				money -= lattePrice;
				// money = money - amePrice
				income += lattePrice;
				//income = income + amePrice;
				printf("ī��� �ֹ� �Ϸ�\n");
				noMoneyCheck = 1;
			}

			break;
		case 3:
			if (money - lemonPrice >= 0) {
				money -= lemonPrice;
				// money = money - amePrice
				income += lemonPrice;
				//income = income + amePrice;
				printf("�����̵� �ֹ� �Ϸ�\n");
				noMoneyCheck = 1;
			}

			break;
		case 4:
			if (money - swPrice >= 0) {
				money -= swPrice;
				// money = money - amePrice
				income += swPrice;
				//income = income + amePrice;
				printf("������ġ �ֹ� �Ϸ�\n");
				noMoneyCheck = 1;
			}

			break;
		default:
			printf("�߸� �Է� �ϼ̽��ϴ�.\n");
			noMoneyCheck = 1;
			errCheck = 1;
		}
		if (noMoneyCheck != 1 && errCheck != 1) {
			printf("�ܾ׺���\n");
		}
		else if (errCheck != 1) {
			printf("���� �ܾ� : %d\n", money);
			printf("���� ���� : %d\n", income);
		}


	}
}