#include <stdio.h>
#include <Windows.h>


// ---- 반복문 ----
// while() 문의 원형 : 
//
//		초기식;
//
//		while (조건식)
//		{
//			종속문장 및 변화식;
//		}
//
// while()문에서 초기식은 while문 바깥에 존재해야 하고, 변화식은 종속 문장과 같이 존재한다.
// while()문에서 무한루프를 사용할 때는 조건식에 1을 작성해 주면 된다. 
// while()문에서 종속 문장이 한 줄일떄는 {}(중괄호)를 생략해 줄 수 있다.
// 하지만 종속 문장에 변화식이 같이 작성되기 때문에 {} (중괄호)를 생략하는 경우는 거의 없다.
// 
// do ~ while() 문의 원형:
//
//		초기식;
//
//		do
//		{
//			종속 문장 및 변화식;
//		} while(조건식);
//
// do ~ while()문은 while문과 전체적으로 비슷하지만 종속 문장을 최소 한 번은 실행시킨다는 특징을 갖고 있다.
// do ~ while()문에서 무한 루프를 사용하고 싶을 때는 while문과 마찬가지로 조건식에 1을 작성해주면 된다. 
//
// ---- 기타 함수 ----
// system() : system("명령어"), " (큰 따옴표)안에 작성되는 명령어를 실행시켜주는 함수
// Sleep() : Sleep(멈춰질 시간), 시간 단위 1/1000초 이다.
// 콘솔창을 잠깐 재워주는 함수, 멈춰 준다고 볼 수 있다.
// system 함수를, Sleep()함수를 사용하기 위해서 windows.h 헤더파일을 선언 해줘야한다.
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

	printf("출력 : ");
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

	printf("입력 : ");
	scanf_s("%c", &cha);

	printf("출력 : ");
	while (j <= cha) {
		printf("%c ", j);
		j++;
	}
	printf("\n");


	//Q3
	int num;

	while(1) {
		printf("입력 : ");
		scanf_s("%d", &num);

		printf("출력 : %d\n", num);

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
		printf("입력 : ");
		scanf_s("%d", &num);

		printf("출력 : %d\n", num);

	} while (num % 2 != 0);

	printf("짝수가 입력되어 프로그램을 종료합니다.\n");
	*/

	/*printf("ABCD\n");

	system("cls");

	printf("EFGH\n");*/

	/*printf("ABCD\n");

	Sleep(2000);

	printf("EFGH\n");*/


	//Q1 카드 잔액을 충전 및 사용할 수 있는 프로그램을 만드시오
	// 카드 잔액 : 
	// 1. 카드 잔액 충전		-> 충전 금액 입력 :	-> 2500	->  2500충전 완료.	-> 카드 잔액 바뀜
	// 2. 카드 잔액 사용		-> 사용 금액 입력 :  -> 2000 -> 2000원 사용하고 (얼마) 남았습니다.  -> 카드 잔액 바뀜 
	// 초과 금액 사용 : 잔액이 부족합니다.	-> 다시 2번 화면으로 돌아가기.
	// 3. 종료
	// 입력 : 

	int money = 10000;
	int choice = 0;
	int cMoney = 0;
	int uMoney = 0;


	while (choice != 3) {

		printf("카드 잔액 : %d\n", money);
		printf("①카드 잔액 충전\n②카드 잔액 사용\n③종료\n");

		printf("입력 : ");
		scanf_s("%d", &choice);

		printf("\n");

		switch (choice) {

		case 1:
			system("cls");
			printf("카드 잔액 : %d\n", money);
			printf("충전 금액 입력 : ");
			scanf_s("%d", &cMoney);
			money += cMoney;
			printf("%d원 충전해서 %d원 사용가능합니다.\n", cMoney, money);
			break;


		case 2:
			
			
			while (1) {
				system("cls");
				printf("카드 잔액 : %d\n", money);
				printf("사용 금액 입력 : ");
				scanf_s("%d", &uMoney);

				if (money - uMoney >= 0) {
					money -= uMoney;
					printf("%d원 사용하고 %d원 남았습니다.\n", uMoney, money);
				
					
					break;
				}
				else {
					printf("잔액이 부족합니다.\n");
					Sleep(2000);
				}
			}
			break;
				

		case 3:
			printf("프로그램을 종료합니다.");
			break;

		default:
			printf("잘못 입력하셨습니다. 다시입력해주세요.");
			break;

		}
		Sleep(2000);
		system("cls");
	}

	return 0;


}