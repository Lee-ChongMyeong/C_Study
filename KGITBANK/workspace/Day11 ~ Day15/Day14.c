#include <stdio.h>

//---- 구조체 ----
// 여러 개의 멤버들을 모아서 하나의 새로운 자료형을 만드는 방식
// 구조체 변수의 멤버에 접근할 때는 구조체변수명.멤버명 형식으로 접근한다.
//			ex) struct Data d;
//				d.data1 = 10;
// 구조체의 크기는 구조체 멤버들을 모두 더한 크기이다.
// 
// 기본 구조체 정의:
//	struct 구조체이름 {
//		멤버;
//	}

// 기본 구조체 정의:
//struct Data {
//	int data1;
//	int data2;
//	int data3;
//};

// 별칭을 이용한 구조체 정의
// 별칭을 이용해서 정의할 때는 구조체 이름, 별칭 모두 사용 가능
//typedef struct Data {
//	int data1;
//	int data2;
//}Da;

// 익명 구조체 정의
// 익명 구조체를 사용하면 구조체 이름으로 변수 선언 X, 별칭만 사용 가능
//typedef struct {
//	int data1;
//	int data2;
//}Da;

//---- 구조체 포인터 ----
// 구조체 포인터를 이용해서 역참조를 진행할 때는 기본적으로 ->(애로우)를 사용해서 진행할 수 있다.
// 별도로 *를 사용할 수 있는데 이때는 우선순위 때문에 괄호로 묶어줘야 한다.
//			ex)	(*d).data1	==	d->data1


//typedef struct {
//	int kor, mat, eng, total;
//	double avg;
//	char grade;
//}Student;
//
//void Total(int kor, int mat, int eng, int* total)
//{
//	*total = kor + mat + eng;
//}
//
//void Avg(int total, double* avg)
//{
//	*avg = total / 3.0;
//}
//
//void Grade(double avg, char* grade)
//{
//	switch ((int)avg / 10)
//	{
//	case 10:
//	case 9:
//		*grade = 'A';
//		break;
//	case 8:
//		*grade = 'B';
//		break;
//	case 7:
//		*grade = 'C';
//		break;
//	case 6:
//		*grade = 'D';
//		break;
//	default:
//		*grade = 'F';
//		break;
//	}
//}

//typedef struct {
//	int data1;
//	int data2;
//}Data;
//
//void Func(Data* d)
//{
//	(*d).data1 = 11;
//	d->data2 = 22;
//}

typedef struct {
	int kor, mat, eng, total;
	double avg;
	char grade;
}Student;

void Total(Student* st)
{
	st->total =  st->kor + st->mat + st->eng;
}

void Avg(Student* st)
{
	st->avg = st->total / 3.0;
}

void Grade(Student* st)
{
	switch ((int)st->avg / 10)
	{
	case 10:
	case 9:
		st->grade = 'A';
		break;
	case 8:
		st->grade = 'B';
		break;
	case 7:
		st->grade = 'C';
		break;
	case 6:
		st->grade = 'D';
		break;
	default:
		st->grade = 'F';
		break;
	}
}

int main()
{
	/*struct Data d;
	Da d2;

	d.data1 = 10;
	d.data2 = 20;

	printf("%d %d\n", d.data1, d.data2);
	printf("d의 크기: %d\n", sizeof(d));*/

	/*Student st;

	printf("국어, 수학, 영어 성적 입력: ");
	scanf("%d %d %d", &st.kor, &st.mat, &st.eng);

	Total(st.kor, st.mat, st.eng, &st.total);
	Avg(st.total, &st.avg);
	Grade(st.avg, &st.grade);

	printf("총합: %d\n", st.total);
	printf("평균: %.2f\n", st.avg);
	printf("등급: %c\n", st.grade);*/

	/*Data d;

	d.data1 = 10;
	d.data2 = 20;

	Func(&d);

	printf("%d %d\n", d.data1, d.data2);*/

	Student st;

	printf("국어, 수학, 영어 성적 입력: ");
	scanf("%d %d %d", &st.kor, &st.mat, &st.eng);

	Total(&st);
	Avg(&st);
	Grade(&st);

	printf("총합: %d\n", st.total);
	printf("평균: %.2f\n", st.avg);
	printf("등급: %c\n", st.grade);

	return 0;
}