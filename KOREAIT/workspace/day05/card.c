#include <stdio.h>

void main() {
	// ��� 13		500��
	// û�ҳ� 19		1000��
	// ���� 150		1200��

	// ���̸� �Է¹ް� �� ���̿� �´� �޼��� ���
	// ���� Ȥ�� 150�ʰ��� ���̸� �Է����� �� "�߸� �Է��ϼ̽��ϴ�". ���
	// money ������ �� �� �ְ�, �� ���̿� �´� �ݾ� �����ϰ� ���� �ܾ� ����ϱ�


	/*int age;
	int money = 10000;

	int chil = 500;
	int tee = 1000;
	int adu = 1200;

	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &age);

	if (age > 150) {
		printf("�߸� �Է��ϼ̽��ϴ�\n");
	}
	else if (age >= 20) {
		printf("����\n");
		printf("���� �ܾ� : %d\n", money-adu);
	}
	else if (age >= 14) {
		printf("û�ҳ�\n");
		printf("���� �ܾ� : %d\n", money-tee);
	}
	else if (age >=0){
		printf("���\n");
		printf("���� �ܾ� : %d\n", money-chil);
	}
	else {
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}*/

	int childrenMaxAge = 13;
	int teenagerMaxAge = 19;
	int adultMaxAge = 150;
	int cMoney = 500;
	int tMoney = 1000;
	int aMoney = 1200;
	int age = 0;
	int money = 10000;
	//flag
	int check = 0;

	printf("���̸� �Է��ϼ��� \n");
	scanf_s("%d", &age);


	if (age <= childrenMaxAge) {
		//nested if
		if (age > 0){
			printf("��� �Դϴ�.\n");
			money = money - cMoney;
		}
		else {
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			check = 1;
		}
	}
	else if (age <= teenagerMaxAge) {
		printf("û�ҳ� �Դϴ�.");
		money = money - tMoney;
	}
	else if (age <= adultMaxAge) {
		printf("� �Դϴ�.");
		money = money - tMoney;
	}
	else {
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
		check = 1;
	}

	if (check != 1) {
		printf("���� �ܾ� : %d��\n", money);
	}
	


	

}