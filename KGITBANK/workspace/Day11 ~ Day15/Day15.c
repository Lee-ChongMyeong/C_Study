#include <stdio.h>
#include <stdlib.h>

//---- �����Ϳ� �迭�� ���� ----
// �����Ϳ� �迭�� ������ ���踦 ���� ������, �и��� �������� �ִ�.
// �迭�� �����ϰԵǸ� �⺻������ �迭 �ڱ� �ڽ��� ���� �ּҸ� ���� �ִ�.

//---- ���� �Ҵ� ----
// �޸� ������ ũ�⸦ �����ؼ� �Ҵ� �ް� �� ������ ��� ��, ���ϴ� �������� ������ �����ϴ� ���
// �޸� ������ �Ҵ���� ���� malloc()�Լ��� ����ؼ� �Ҵ� ���� �� �ִ�.
// �̶�, �ݵ�� stdlib.h ��������� ��������� �Ѵ�.
// malloc()�Լ� ���� : �ּҸ� ������ ���� = (������ ������ �ڷ���)malloc(ũ��);
// ���� �Ҵ��� ���ؼ� �Ҵ���� �޸� ������ Heap������ �ش��Ѵ�.
// ���� �Ҵ���� �޸� ������ ������ ���� free(������ ������ �ּ�); �������� ������ �� �ִ�.
// �� ���� ���� �Ҵ翡�� �ݵ�� �� ���� ���������� ����ž� �Ѵ�.

//typedef struct {
//	int data1;
//	int data2;
//	int data3;
//}Data;

int main()
{
	/*Data d;
	Data* pd;

	pd = &d;

	printf("d�� ũ��: %d\n", sizeof(d));
	printf("pd�� ũ��: %d\n", sizeof(pd));

	printf("\npd�� ��: %p\n", pd);*/

	/*char str[10];

	printf("str�� �ּ�: %p\n", &str);
	printf("str�� ��: %p\n", str);

	printf("�Է�: ");
	scanf("%s", &str);

	printf("���: %s\n", str);*/

	/*char str1[10] = "Hello";
	char* str2 = "Abcde";

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	str1[0] = 'B';
	str2[0] = 'F';

	printf("str1: %c%c%c%c%c\n", str1[0], str1[1], str1[2], str1[3], str1[4]);
	printf("str2: %c%c%c%c%c\n", str2[0], str2[1], str2[2], str2[3], str2[4]);

	printf("str2: %c%c%c%c%c\n", *str2, *(str2 + 1), *(str2 + 2), *(str2 + 3), *(str2 + 4));
	printf("str1: %c%c%c%c%c\n", *str1, *(str1 + 1), *(str1 + 2), *(str1 + 3), *(str1 + 4));*/

	/*int* ptr;

	ptr = (int*)malloc(4);

	*ptr = 10;

	printf("%d\n", *ptr);

	free(ptr);*/

	int* ptr;
	ptr = (int*)malloc(8);

	ptr[0] = 10;
	ptr[1] = 20;

	printf("%d %d\n", ptr[0], ptr[1]);

	free(ptr);

	return 0;
}