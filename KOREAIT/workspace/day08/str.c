#include <stdio.h>
#include <string.h>

void main() {

	char word[6] = "korea";
	//word = "japan"; ����

	strcpy_s(word, sizeof(word), "japan");
	printf("%s\n", word);
	printf("%d\n", strlen(word));	// �ι��ڸ� ������ ����

	if(strcmp(word, "japan") == 0) {
		printf("�� ���ڿ��� �����ϴ�.\n");
	}

	


}