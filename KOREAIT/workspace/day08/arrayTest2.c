#include <stdio.h>
#define arDataSIZE 5
#define arAlphaSIZE 5


void main() {

	//int arData[5];
	//int arData[arDataSIZE] = { 0, }; // 0���� �ʱ�ȭ ��Ű�� ���
	char arAlpha[arAlphaSIZE] = {' ',};  // ���� �ʱ�ȭ

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

	// A ~ E���� ������� �� �ֱ� (for �� ���)

	for (int i = 0; i < arAlphaSIZE; i++) {
		arAlpha[i] = (char)(65 + i);
	}
	for (int i = 0; i < arAlphaSIZE; i++) {
		printf("%c\n", arAlpha[i]);
	}


}