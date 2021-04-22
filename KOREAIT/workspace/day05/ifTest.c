#include <stdio.h>

void main() {
	int num1 = 0;
	int num2 = 0;

	printf("첫번쨰 정수 : ");
	scanf_s("%d", &num1);
	printf("두번쨰 정수 : ");
	scanf_s("%d", &num2);

	if (num1 > num2) {
		printf("%d이(가) 더 큽니다.", num1);
	}
	else if (num1 != num2) {
		printf("%d이(가) 더 큽니다.", num2);
	}
	else {
		printf("두 수가 같습니다.");
	}

}