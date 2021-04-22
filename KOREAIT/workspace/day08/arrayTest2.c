#include <stdio.h>
#define arDataSIZE 5
#define arAlphaSIZE 5


void main() {

	//int arData[5];
	//int arData[arDataSIZE] = { 0, }; // 0으로 초기화 시키는 방법
	char arAlpha[arAlphaSIZE] = {' ',};  // 문자 초기화

	/*for (int i = 0; i < arDataSIZE; i++) {
		arData[i] = i + 1;
	}
	for (int i = 0; i < arDataSIZE; i++) {
		printf("%d\n", arData[i]);
	}

	for (int i = 0; i < arDataSIZE; i++) {
		arData[i] = 5 - i;
	}
	for (int i = 0; i < arDataSIZE; i++) {
		printf("%d\n", arData[i]);
	}*/

	// A ~ E까지 순서대로 값 넣기 (for 문 사용)

	for (int i = 0; i < arAlphaSIZE; i++) {
		arAlpha[i] = (char)(65 + i);
	}
	for (int i = 0; i < arAlphaSIZE; i++) {
		printf("%c\n", arAlpha[i]);
	}


}