#include <stdio.h>
#include <Windows.h>


// ---- �ݺ��� ----
// while() ���� ���� : 
//
//		�ʱ��;
//
//		while (���ǽ�)
//		{
//			���ӹ��� �� ��ȭ��;
//		}
//
// while()������ �ʱ���� while�� �ٱ��� �����ؾ� �ϰ�, ��ȭ���� ���� ����� ���� �����Ѵ�.
// while()������ ���ѷ����� ����� ���� ���ǽĿ� 1�� �ۼ��� �ָ� �ȴ�. 
// while()������ ���� ������ �� ���ϋ��� {}(�߰�ȣ)�� ������ �� �� �ִ�.
// ������ ���� ���忡 ��ȭ���� ���� �ۼ��Ǳ� ������ {} (�߰�ȣ)�� �����ϴ� ���� ���� ����.
// 
// do ~ while() ���� ����:
//
//		�ʱ��;
//
//		do
//		{
//			���� ���� �� ��ȭ��;
//		} while(���ǽ�);
//
// do ~ while()���� while���� ��ü������ ��������� ���� ������ �ּ� �� ���� �����Ų�ٴ� Ư¡�� ���� �ִ�.
// do ~ while()������ ���� ������ ����ϰ� ���� ���� while���� ���������� ���ǽĿ� 1�� �ۼ����ָ� �ȴ�. 
//
// ---- ��Ÿ �Լ� ----
// system() : system("��ɾ�"), " (ū ����ǥ)�ȿ� �ۼ��Ǵ� ��ɾ ��������ִ� �Լ�
// Sleep() : Sleep(������ �ð�), �ð� ���� 1/1000�� �̴�.
// �ܼ�â�� ��� ����ִ� �Լ�, ���� �شٰ� �� �� �ִ�.
// system �Լ���, Sleep()�Լ��� ����ϱ� ���ؼ� windows.h ��������� ���� ������Ѵ�.
//
//

int main() {

	/*int i = 0;

	while (i < 10)
	{
		printf("Hello world\n");
		i++;
	}*/

	/*while (1)
	{
		printf("Hello world!\n");
	}*/


	//Q1
	/*int i = 65;

	while (i < 90) {
		printf("%c", i);
		i++;
	}*/

	/*char i = 'A';

	printf("��� : ");
	while (i <= 'Z')
	{
		printf("%c ", i);
		i++;
	}

	printf("\n");*/

	/*//Q2
	char cha;
//	int j = 97;
	char j = 'a';

	printf("�Է� : ");
	scanf_s("%c", &cha);

	printf("��� : ");
	while (j <= cha) {
		printf("%c ", j);
		j++;
	}
	printf("\n");


	//Q3
	int num;

	while(1) {
		printf("�Է� : ");
		scanf_s("%d", &num);

		printf("��� : %d\n", num);

		if (num == 9) {
			break;
		}

	}
	*/

	/*int i = 7;

	do
	{
		printf("Hello world!\n");
		i -= 2;
	} while (i <= 5);*/

	/*
	// Q1
	int num;

	do {
		printf("�Է� : ");
		scanf_s("%d", &num);

		printf("��� : %d\n", num);

	} while (num % 2 != 0);

	printf("¦���� �ԷµǾ� ���α׷��� �����մϴ�.\n");
	*/

	/*printf("ABCD\n");

	system("cls");

	printf("EFGH\n");*/

	/*printf("ABCD\n");

	Sleep(2000);

	printf("EFGH\n");*/


	//Q1 ī�� �ܾ��� ���� �� ����� �� �ִ� ���α׷��� ����ÿ�
	// ī�� �ܾ� : 
	// 1. ī�� �ܾ� ����		-> ���� �ݾ� �Է� :	-> 2500	->  2500���� �Ϸ�.	-> ī�� �ܾ� �ٲ�
	// 2. ī�� �ܾ� ���		-> ��� �ݾ� �Է� :  -> 2000 -> 2000�� ����ϰ� (��) ���ҽ��ϴ�.  -> ī�� �ܾ� �ٲ� 
	// �ʰ� �ݾ� ��� : �ܾ��� �����մϴ�.	-> �ٽ� 2�� ȭ������ ���ư���.
	// 3. ����
	// �Է� : 

	int money = 10000;
	int choice = 0;
	int cMoney = 0;
	int uMoney = 0;


	while (choice != 3) {

		printf("ī�� �ܾ� : %d\n", money);
		printf("��ī�� �ܾ� ����\n��ī�� �ܾ� ���\n������\n");

		printf("�Է� : ");
		scanf_s("%d", &choice);

		printf("\n");

		switch (choice) {

		case 1:
			system("cls");
			printf("ī�� �ܾ� : %d\n", money);
			printf("���� �ݾ� �Է� : ");
			scanf_s("%d", &cMoney);
			money += cMoney;
			printf("%d�� �����ؼ� %d�� ��밡���մϴ�.\n", cMoney, money);
			break;


		case 2:
			
			
			while (1) {
				system("cls");
				printf("ī�� �ܾ� : %d\n", money);
				printf("��� �ݾ� �Է� : ");
				scanf_s("%d", &uMoney);

				if (money - uMoney >= 0) {
					money -= uMoney;
					printf("%d�� ����ϰ� %d�� ���ҽ��ϴ�.\n", uMoney, money);
				
					
					break;
				}
				else {
					printf("�ܾ��� �����մϴ�.\n");
					Sleep(2000);
				}
			}
			break;
				

		case 3:
			printf("���α׷��� �����մϴ�.");
			break;

		default:
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ��Է����ּ���.");
			break;

		}
		Sleep(2000);
		system("cls");
	}

	return 0;


}