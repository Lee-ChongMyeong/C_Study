#include <stdio.h>

void main() {

	int answer = 0 ;
	int answer1 = 1, answer2 = 2, answer3 = 3, answer4 = 4;

	printf("�� ���ھȿ��� ������ ��� �־������?\n");
	printf("1.��\n2.�ռ���\n3.��¦����\n4.����\n\n");

	printf("�Է��ϼ��� : ");
	scanf("%d", &answer);

	answer == answer1 ? printf("����� �������� ���ؼ� ���մϴ�.\n") :
		answer == answer2 ? printf("����� �ʹ� ������ ����Դϴ�.\n") :
		answer == answer3 ? printf("����� �������� �ϴ� ����Դϴ�.\n") :
		answer == answer4 ? printf("����� �������� �������� ���ϴ�.\n") :
		printf("�߸� �Է��ϼ̽��ϴ�");

	printf(answer);


}