#include <stdio.h>

void main(){
	// ���� 2���� �Է¹ް� ��� ���ϱ�

	int num1 = 0, num2 = 0, result = 0;
	printf("���� 2���� �Է��ϼ���\n");
	scanf_s("%d %d", &num1, &num2);	// , - �������� ���� �� �ִ�.
	//printf("%d %d\n", num1, num2);

	/*result = num1 > num2 ? num1 : num2;
	printf("ū �� : %d\n", result);*/
	//num1 > num2 ? printf("ū ��  : %d\n", num1) : printf("ū �� : %d\n", num2);
	//��� �񱳴� �״�� ������ ������ "����"����ϱ�
	num1 > num2 ? printf("ū ��  : %d\n", num1) : num1 == num2? printf("�� ���� ����\n") : printf("ū �� : %d\n", num2);


	return 0;
}