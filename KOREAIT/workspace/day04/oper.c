#include <stdio.h>

void main(){
	// 정수 2개를 입력받고 대소 비교하기

	int num1 = 0, num2 = 0, result = 0;
	printf("정수 2개를 입력하세요\n");
	scanf_s("%d %d", &num1, &num2);	// , - 구분점을 넣을 수 있다.
	//printf("%d %d\n", num1, num2);

	/*result = num1 > num2 ? num1 : num2;
	printf("큰 수 : %d\n", result);*/
	//num1 > num2 ? printf("큰 수  : %d\n", num1) : printf("큰 수 : %d\n", num2);
	//대소 비교는 그대로 놔누고 같으면 "같다"출력하기
	num1 > num2 ? printf("큰 수  : %d\n", num1) : num1 == num2? printf("두 수는 같다\n") : printf("큰 수 : %d\n", num2);


	return 0;
}