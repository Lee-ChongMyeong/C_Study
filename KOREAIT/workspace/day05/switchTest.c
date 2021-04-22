#include <stdio.h>

void main() {
	// 1 ~ 3 까지의 수 중 입력한 값 알아 맞추기
	int num = 0;
	printf("1~3까지 중 하나의 정수 입력 : ");
	scanf_s("%d", &num);

	switch (num){
		case 1:
			printf("입력하신 숫자는 %d입니다.\n", num);
			break;
		case 2:
			printf("입력하신 숫자는 %d입니다.\n", num);
			break;
		case 3:
			printf("입력하신 숫자는 %d입니다.\n", num);
			break;
		default:
			printf("잘못 입력하셨습니다\n");
	}
	

	return 0;
}