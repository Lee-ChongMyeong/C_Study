#include <string.h>
#include <stdio.h>

// ---- ���ڿ� �Է¹޴� ��� ----
// scanf() �Լ��� ���� ���ڿ��� �Է� ���� ���� �迭�̸� �տ� &�� �迭�� �ڿ� �ε����� �ۼ����� �ʴ´�.
// ���ڿ��� ������ �׻� ���ڿ��� ���� �˷��ִ� NULL ���ڰ� ����.
// ���ڿ��� �迭�� ������ ���� �ݵ�� NULL ������ ũ����� ����ؾ� �Ѵ�.
// NULL ���ڸ� ǥ���� ���� ���� 0, ���� '\0', NULL�� ǥ���� �� �ִ�.
// ���ڿ��� ���� �迭�� �ʱ�ȭ �� ���� ""(ū ����ǥ)�ȿ� ���ڿ��� �ۼ����ָ� �ȴ�.
//		ex) char str[6] = "Hello";
// ���ڿ��� ���� �迭�� NULL ���ڷ� �ʱ�ȭ �� ����
// char str[10] = { 0, }; �� ���� �ۼ��ϸ� �ȴ�.
// 
//


void main() {



	//Q) Hello�Է�, Hello ���

	/*char str[5];

	printf("�Է� : ");
	for (int i = 0; i < 5; i++) {
		scanf_s("%c\n", &str[i]);
	}

	printf("��� : ");
	for (int i = 0; i < 5; i++) {
		printf("%c\n", str[i]);
	}*/

	/*char str[6];

	printf("�Է� : ");
	scanf("%s", str);

	str[2] = '\0';
	
	printf("��� : %s\n", str);*/
	
	/*char str[6] = {"Hello"};

	printf("��� : %s\n", str);*/

	/*char str[10] = { 0, };

	printf("�Է� : ");
	scanf("%s", str);
	
	str[5] = 'a';

	printf("��� : %s\n", str);*/

	//Q2 �̸�, ����, �ּ�, Ű �����Ը� �Է� �ް� �Ʒ��� ���� ��µǴ� ���α׷��� ����ÿ�


	/*char name[20];
	int age = 0;
	char adr[100];
	double hei = 0;
	double wei = 0;

	printf("�Է��ϼ���\n");

	printf("�̸� : ");
	scanf("%s", name);

	printf("���� : ");
	scanf("%d", &age);
	
	printf("�ּ� : ");

	scanf("%s", adr);
	
	printf("Ű : ");
	scanf("%lf", &hei);
	
	printf("������ : ");
	scanf("%lf", &wei);
	printf("\n");

	printf("���\n");
	printf("----------------------------\n");
	printf("�̸� : %s\n", name);
	printf("���� : %d\n", age);
	printf("�ּ� : %s\n", adr);
	printf("Ű : %.1fcm\t ������ : %.2fkg\n", hei, wei);*/
	
	//Q1 
	/*char alpa1[6];
	
	printf("�Է� : ");
	scanf("%s", alpa1);

	printf("��� : %d\n", strlen(alpa1));*/

	//char alpa1[100];
	//int len = 0, index = 0;

	//printf("�Է� : ");
	//scanf("%s", alpa1);

	//while (1) {
	//	if (alpa1[index] != NULL){
	//		len++;
	//	}
	//	else {
	//		break;
	//	}
	//	index++;
	//}

	/*char alpa1[100];
	int len = 0;

	printf("�Է� : ");
	scanf("%s", alpa1);*/

	/*while (1) {
		if (alpa1[len] != NULL) {
			len++;
		}
		else {
			break;
		}
		
	}*/

	//while (alpa1[len] != NULL) {	// while(alpa[len]
	//	len++;
	//}

	//printf("��� : %d\n", len);

	//Q2

	/*while (1) {
		char alpa2[20];
		char alpa3[20];

		printf("�Է� : ");
		scanf("%s", alpa2);

		printf("�Է� : ");
		scanf("%s", alpa3);

		printf("\n");

		if (strcmp(alpa2, alpa3)==0) {
			printf("��� : 0\n");
		}
		else {
			printf("��� : 1\n");
		}
		printf("\n");

		printf("------------------------------------- \n");
	}*/

	/*
	while (1) {

		char alpa2[20];
		char alpa3[20];
		int check = 0, index = 0;


		printf("�Է� : ");
		scanf("%s", alpa2);

		printf("�Է� : ");
		scanf("%s", alpa3);

		printf("\n");

		while (1)
		{
			if (alpa2[index] != alpa3[index]) {
				check = 1;
				break;
			}
			else if (alpa2[index] == NULL && alpa3[index] == NULL) {
				break;
			}
			index++;
		}
		*/
		/*
		while (!(alpa2[index] == NULL && alpa3[index] == NULL))
		{
			if (alpa2[index] != alpa3[index]) {
				check = 1;
				break;
			}
			
			index++;
		}
		
		*/
		
		/*
		printf("��� : %d\n", check);


		
		printf("\n");

		printf("------------------------------------- \n");
	}*/


	//Q3
	char str1[100];
	char str2[100] = { 0, };
	int index = 0;

	printf("�Է� : ");
	scanf("%s", str1);

	/*
		Ʋ���� Ǯ��.
		while (1) {
		if (!(str1[index] == NULL )) {
			
			str2[index] == str1[index];
		}
		else if (str1[index] == NULL) {
			
			break;
		}
		index++;
	}*/

	while (1) {
		str2[index] = str1[index];
		index++;

		if (str1[index] == NULL) {
			break;
		}
	}
	
	printf("��� : %s\n", str2);


	//Q4 �Է� : str1, �Է� : str2 
	char str3[100] = { 0, };
	char str4[100];
	int len = 0;
	int index2 = 0;

	printf("�Է� : ");
	scanf("%s", str3);
	printf("�Է� : ");
	scanf("%s", str4);

	while (str3[len] != NULL) {
		len++;
	}
	
	while (1) {
		str3[index2 + len] = str4[index2];
		index2++;

		if (str4[index2] == NULL) {
			break;
		}
	}

	printf("��� : %s\n", str3);

	return 0;
}

