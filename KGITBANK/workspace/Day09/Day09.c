#include <stdio.h>

//---- 2차원 배열 ----
// 1차원 배열을 또 다시 배열로 선언함으로써 여러 개의 배열을 다시 배열로 만드는 방식
// 2차원 배열 선언 방법: 자료형 배열명[행 크기][열 크기];
// 2차원 배열을 초기화 할 때는 {}(중괄호)와 개행을 적절히 사용해준다.
//		ex)		int arr[3][3] = {
//					{ 1, 2, 3 },
//					{ 4, 5, 6 },
//					{ 7, 8, 9 } };
// 2차원 배열을 사용하고 접근할 때는 보통 이중 반복문을 이용해서 접근한다.
// 

int main()
{
	/*int arr[3][3];

	arr[0][1] = 10;

	printf("%d\n", arr[0][1]);*/

	/*int arr[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9} };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}*/

	/*// Q1)	2차원 배열을 통해 정수형 공간 10개의 1차원 배열을 또 다시 10개 선언하고
	//		각 공간에 1 ~ 100까지의 값을 할당 한 뒤 출력을 진행해보세요.

	int arr[10][10];
	int cnt = 1;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			arr[i][j] = i * 10 + j + 1;
		}
	}

	//for (int i = 0; i < 10; i++)
	//{
	//	for (int j = 0; j < 10; j++)
	//	{
	//		printf("%3d ", arr[i][j]);
	//	}
	//	printf("\n");
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", arr[i][i]);
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	for (int j = 0; j < 10; j++)
	//	{
	//		printf("%3d ", arr[j][i]);
	//	}
	//	printf("\n");
	//}*/


	return 0;
}