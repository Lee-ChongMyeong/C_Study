#include <stdio.h>

void main() {

	int answer = 0 ;
	int answer1 = 1, answer2 = 2, answer3 = 3, answer4 = 4;

	printf("이 상자안에는 무엇이 들어 있었을까요?\n");
	printf("1.꽃\n2.손수건\n3.깜짝상자\n4.보석\n\n");

	printf("입력하세요 : ");
	scanf("%d", &answer);

	answer == answer1 ? printf("당신은 거짓말을 못해서 안합니다.\n") :
		answer == answer2 ? printf("당신은 너무 정직한 사람입니다.\n") :
		answer == answer3 ? printf("당신은 거짓말을 하는 사람입니다.\n") :
		answer == answer4 ? printf("당신은 가끔씩은 거짓말을 핣니다.\n") :
		printf("잘못 입력하셨습니다");

	printf(answer);


}