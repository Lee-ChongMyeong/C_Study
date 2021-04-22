// 이름, 나이, 키, 학점(A ~ F)
// 변수에 담고 출력하기
// 출력시 이름 : 나이 : ....로 출력하기
// 이름은 문자열이므로 const char* name = ....

#include <stdio.h>

main() {

	const char* name = "이총명";
	int age = 10;
	double height = 185.35;
	char grade = 'A';

	printf("%s\n", name);
	printf("나이 : %d살\n", age);
	printf("키 : %.2lf\n", height);
	printf("학점 : %c\n", grade);


	return 0;
}
