#include <stdio.h>

void main() {

	char pw[7] = "a1b2c3";
	char en_pw[7] = "";

	for (int i = 0; i < 7; i++) {
		en_pw[i] = (char)(pw[i] - 4);
	}

	printf("기존 PW\n");
	for (int i = 0; i < 7; i++) {
		printf("%c", pw[i]);
	}

	printf("\n\n암호화 된 PW\n");

	for (int i = 0; i < 7; i++) {
		printf("%c", en_pw[i]);
	}

	printf("\n\n");

	return 0;
}