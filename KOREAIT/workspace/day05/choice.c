#include <stdio.h>

void main() {
	// 상황극
	// 이상형이 밤을 먹으러 가자고 한다.

	int choice = 0;

	printf("나랑 밥 먹으러 갈래?\n");
	printf("1.그래 가자\n2.생각해볼게\n3.싫어!\n4.밥은 무슨~ 술마시러 가자\n");
	scanf_s("%d", &choice);

	switch (choice) {
	case 1:
		printf("넌 너무 쉬워 잘가~\n");
		break;

	case 2:
		printf("재수 없어~ 잘가~\n");
		break;

	case 3:
		printf("다른 사람 생겼니?\n");
		break;
	
	case 4:
		printf("그럴까?\n");
		break;
		
	default:
		printf("뭐라는 거야?\n");
	}

}