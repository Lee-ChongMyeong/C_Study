// �̸�, ����, Ű, ����(A ~ F)
// ������ ��� ����ϱ�
// ��½� �̸� : ���� : ....�� ����ϱ�
// �̸��� ���ڿ��̹Ƿ� const char* name = ....

#include <stdio.h>

main() {

	const char* name = "���Ѹ�";
	int age = 10;
	double height = 185.35;
	char grade = 'A';

	printf("%s\n", name);
	printf("���� : %d��\n", age);
	printf("Ű : %.2lf\n", height);
	printf("���� : %c\n", grade);


	return 0;
}
