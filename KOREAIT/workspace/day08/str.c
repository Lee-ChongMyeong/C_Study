#include <stdio.h>
#include <string.h>

void main() {

	char word[6] = "korea";
	//word = "japan"; 오류

	strcpy_s(word, sizeof(word), "japan");
	printf("%s\n", word);
	printf("%d\n", strlen(word));	// 널문자를 제외한 길이

	if(strcmp(word, "japan") == 0) {
		printf("두 문자열은 같습니다.\n");
	}

	


}