#include <stdio.h>
void main() {

	int arHo[3] = { 0, };
	int length = sizeof(arHo) / sizeof(int);
	int sum = 0;
	double avg = 0.0;

	for (int i = 0; i < length; i++) {
		printf("%dȣ ������ �Է��ϼ���(���� : ����)\n", i+1);
		scanf_s("%d", arHo + i);
		sum += arHo[i];
		
	}
	avg = (double)sum / length;
	printf("1�� �� ���� : %d����\n", sum);
	printf("1�� ��� ���� : %.2lf����\n", avg);


	// ���� ��� �����, �� �����(�Ƶ�ٽ� ������, ������, ȫ����)
	// const char* arName = {"������", "������", "ȫ����"};


}