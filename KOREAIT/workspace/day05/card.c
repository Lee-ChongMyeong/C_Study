#include <stdio.h>

void main() {
	// 어린이 13		500원
	// 청소년 19		1000원
	// 성인 150		1200원

	// 나이를 입력받고 그 나이에 맞는 메세지 출력
	// 음수 혹은 150초과인 나이를 입력했을 때 "잘못 입력하셨습니다". 출력
	// money 변수에 만 원 넣고, 각 나이에 맞는 금액 차감하고 현재 잔액 출력하기


	/*int age;
	int money = 10000;

	int chil = 500;
	int tee = 1000;
	int adu = 1200;

	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);

	if (age > 150) {
		printf("잘못 입력하셨습니다\n");
	}
	else if (age >= 20) {
		printf("성인\n");
		printf("현재 잔액 : %d\n", money-adu);
	}
	else if (age >= 14) {
		printf("청소년\n");
		printf("현재 잔액 : %d\n", money-tee);
	}
	else if (age >=0){
		printf("어린이\n");
		printf("현재 잔액 : %d\n", money-chil);
	}
	else {
		printf("잘못 입력하셨습니다.\n");
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

	printf("나이를 입력하세요 \n");
	scanf_s("%d", &age);


	if (age <= childrenMaxAge) {
		//nested if
		if (age > 0){
			printf("어린이 입니다.\n");
			money = money - cMoney;
		}
		else {
			printf("잘못 입력하셨습니다.\n");
			check = 1;
		}
	}
	else if (age <= teenagerMaxAge) {
		printf("청소년 입니다.");
		money = money - tMoney;
	}
	else if (age <= adultMaxAge) {
		printf("어른 입니다.");
		money = money - tMoney;
	}
	else {
		printf("잘못 입력하셨습니다.\n");
		check = 1;
	}

	if (check != 1) {
		printf("현재 잔액 : %d원\n", money);
	}
	


	

}