#include <stdio.h>
#include <stdlib.h>

//---- 포인터와 배열의 관계 ----
// 포인터와 배열은 밀접한 관계를 갖고 있으나, 분명한 차이점이 있다.
// 배열은 선언하게되면 기본적으로 배열 자기 자신의 시작 주소를 갖고 있다.

//---- 동적 할당 ----
// 메모리 공간의 크기를 지정해서 할당 받고 그 공간을 사용 후, 원하는 시점에서 공간을 해제하는 방식
// 메모리 공간을 할당받을 때는 malloc()함수를 사용해서 할당 받을 수 있다.
// 이때, 반드시 stdlib.h 헤더파일을 선언해줘야 한다.
// malloc()함수 원형 : 주소를 저장할 변수 = (저장할 변수의 자료형)malloc(크기);
// 동적 할당을 통해서 할당받은 메모리 공간은 Heap영역에 해당한다.
// 동적 할당받은 메모리 공간을 해제할 때는 free(해제할 공간의 주소); 형식으로 해제할 수 있다.
// 한 번의 동적 할당에는 반드시 한 번의 동적해제가 진행돼야 한다.

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

	printf("d의 크기: %d\n", sizeof(d));
	printf("pd의 크기: %d\n", sizeof(pd));

	printf("\npd의 값: %p\n", pd);*/

	/*char str[10];

	printf("str의 주소: %p\n", &str);
	printf("str의 값: %p\n", str);

	printf("입력: ");
	scanf("%s", &str);

	printf("출력: %s\n", str);*/

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