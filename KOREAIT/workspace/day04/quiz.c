#include <stdio.h>
// 퀴즈 게임 만들기
void main() {
	// Q. 다음 중 프로그래밍 언어가 아닌 것은?
	// 1. JAVA
	// 2. Python
	// 3. C언어
	// 4. 망둥어

	
	int choice = 0;
	int answer = 4;

	printf("Q. 다음 중 프로그래밍 언어가 아닌 것은 ? \n");
	printf("1.JAVA\n2.PYTHON\n3.C언어\n4.망둥어\n");
	scanf_s("%d", &choice);

	choice == answer ? printf("정답!\n") : printf("오답!\n");

}