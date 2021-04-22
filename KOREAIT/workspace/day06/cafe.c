#include <stdio.h>
/*
	카페
	투썸플레이스 VIP

	메뉴
	아메리카노	8000
	카페라떼		16000			
	레몬에이드	20000
	샌드위치		50000
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
		printf("어서오세요 투썸 VTP입니다.\n");
		printf("=====================================\n		메뉴 \n===================================== \n");
		printf("①.아메리카노(8000원)\n②카페라뗴(16000원)\n③레몬에이드(20000원)\n④샌드위치(50000원)\n⑤나가기\n");
		printf("=====================================\n");
		scanf_s("%d", &choice);
		if (choice == 5) {
			printf("안녕히 가세요\n");
			break;
		}

		switch (choice) {
		case 1:
			if (money - amePrice >= 0) {
				money -= amePrice;
				// money = money - amePrice
				income += amePrice;
				//income = income + amePrice;
				printf("아메리카노 주문 완료\n");
				noMoneyCheck = 1;
			}

			break;
		case 2:
			if (money - lattePrice >= 0) {
				money -= lattePrice;
				// money = money - amePrice
				income += lattePrice;
				//income = income + amePrice;
				printf("카페라떼 주문 완료\n");
				noMoneyCheck = 1;
			}

			break;
		case 3:
			if (money - lemonPrice >= 0) {
				money -= lemonPrice;
				// money = money - amePrice
				income += lemonPrice;
				//income = income + amePrice;
				printf("레몬에이드 주문 완료\n");
				noMoneyCheck = 1;
			}

			break;
		case 4:
			if (money - swPrice >= 0) {
				money -= swPrice;
				// money = money - amePrice
				income += swPrice;
				//income = income + amePrice;
				printf("샌드위치 주문 완료\n");
				noMoneyCheck = 1;
			}

			break;
		default:
			printf("잘못 입력 하셨습니다.\n");
			noMoneyCheck = 1;
			errCheck = 1;
		}
		if (noMoneyCheck != 1 && errCheck != 1) {
			printf("잔액부족\n");
		}
		else if (errCheck != 1) {
			printf("현재 잔액 : %d\n", money);
			printf("현재 수익 : %d\n", income);
		}


	}
}