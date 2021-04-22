#include <string.h>
#include <stdio.h>

// ---- 문자열 입력받는 방법 ----
// scanf() 함수를 통해 문자열을 입력 받을 떄는 배열이름 앞에 &나 배열의 뒤에 인덱스를 작성하지 않는다.
// 문자열의 끝에는 항상 문자열의 끝을 알려주는 NULL 문자가 들어간다.
// 문자열을 배열에 저장할 때는 반드시 NULL 문자의 크기까지 고려해야 한다.
// NULL 문자를 표기할 떄는 정수 0, 문자 '\0', NULL로 표기할 수 있다.
// 문자열을 담을 배열을 초기화 할 때는 ""(큰 따옴표)안에 문자열을 작성해주면 된다.
//		ex) char str[6] = "Hello";
// 문자열을 담을 배열을 NULL 문자로 초기화 할 때는
// char str[10] = { 0, }; 과 같이 작성하면 된다.
// 
//


void main() {



	//Q) Hello입력, Hello 출력

	/*char str[5];

	printf("입력 : ");
	for (int i = 0; i < 5; i++) {
		scanf_s("%c\n", &str[i]);
	}

	printf("출력 : ");
	for (int i = 0; i < 5; i++) {
		printf("%c\n", str[i]);
	}*/

	/*char str[6];

	printf("입력 : ");
	scanf("%s", str);

	str[2] = '\0';
	
	printf("출력 : %s\n", str);*/
	
	/*char str[6] = {"Hello"};

	printf("출력 : %s\n", str);*/

	/*char str[10] = { 0, };

	printf("입력 : ");
	scanf("%s", str);
	
	str[5] = 'a';

	printf("출력 : %s\n", str);*/

	//Q2 이름, 나이, 주소, 키 몸무게를 입력 받고 아래와 같이 출력되는 프로그램을 만드시오


	/*char name[20];
	int age = 0;
	char adr[100];
	double hei = 0;
	double wei = 0;

	printf("입력하세요\n");

	printf("이름 : ");
	scanf("%s", name);

	printf("나이 : ");
	scanf("%d", &age);
	
	printf("주소 : ");

	scanf("%s", adr);
	
	printf("키 : ");
	scanf("%lf", &hei);
	
	printf("몸무게 : ");
	scanf("%lf", &wei);
	printf("\n");

	printf("출력\n");
	printf("----------------------------\n");
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("주소 : %s\n", adr);
	printf("키 : %.1fcm\t 몸무게 : %.2fkg\n", hei, wei);*/
	
	//Q1 
	/*char alpa1[6];
	
	printf("입력 : ");
	scanf("%s", alpa1);

	printf("출력 : %d\n", strlen(alpa1));*/

	//char alpa1[100];
	//int len = 0, index = 0;

	//printf("입력 : ");
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

	printf("입력 : ");
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

	//printf("출력 : %d\n", len);

	//Q2

	/*while (1) {
		char alpa2[20];
		char alpa3[20];

		printf("입력 : ");
		scanf("%s", alpa2);

		printf("입력 : ");
		scanf("%s", alpa3);

		printf("\n");

		if (strcmp(alpa2, alpa3)==0) {
			printf("출력 : 0\n");
		}
		else {
			printf("출력 : 1\n");
		}
		printf("\n");

		printf("------------------------------------- \n");
	}*/

	/*
	while (1) {

		char alpa2[20];
		char alpa3[20];
		int check = 0, index = 0;


		printf("입력 : ");
		scanf("%s", alpa2);

		printf("입력 : ");
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
		printf("출력 : %d\n", check);


		
		printf("\n");

		printf("------------------------------------- \n");
	}*/


	//Q3
	char str1[100];
	char str2[100] = { 0, };
	int index = 0;

	printf("입력 : ");
	scanf("%s", str1);

	/*
		틀리게 풀음.
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
	
	printf("출력 : %s\n", str2);


	//Q4 입력 : str1, 입력 : str2 
	char str3[100] = { 0, };
	char str4[100];
	int len = 0;
	int index2 = 0;

	printf("입력 : ");
	scanf("%s", str3);
	printf("입력 : ");
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

	printf("출력 : %s\n", str3);

	return 0;
}

