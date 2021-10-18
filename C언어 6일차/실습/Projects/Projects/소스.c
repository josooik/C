#include <stdio.h>

int main(void)
{
	enum moth {
		January = 1, February, March, April, May, June, July, Agust, September, October, November, December
	};

	enum mouth mm;

	printf("월 입력 : ");
	scanf_s("%d", &mm);

	printf("\n");

	switch (mm)
	{
	case January: printf("%d월은 January 입니다.", mm); break;
	case February: printf("%d월은 February 입니다.", mm); break;
	case March: printf("%d월은 March 입니다.", mm); break;
	case April: printf("%d월은 April 입니다.", mm); break;
	case May: printf("%d월은 May 입니다.", mm); break;
	case June: printf("%d월은 June 입니다.", mm); break;
	case July: printf("%d월은 July 입니다.", mm); break;
	case Agust: printf("%d월은 Agust 입니다.", mm); break;
	case September: printf("%d월은 September 입니다.", mm); break;
	case October: printf("%d월은 October 입니다.", mm); break;
	case November: printf("%d월은 November 입니다.", mm); break;
	case December: printf("%d월은 December 입니다.", mm); break;

	default: printf(" 잘못 입력하였습니다.");
	}

	printf("\n\n");

	return 0;
}


/*

#include<stdio.h>
#include<string.h>

struct student {
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student s;

	s.number = 2019144602;
	strcpy_s(s.name, sizeof(s.name), "홍길동");
	s.grade = 4.3;

	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %.2f\n", s.grade);

	return 0;
}

#include<stdio.h>
#include<string.h>

// 구조체 선언
typedef struct Student {
	int number;
	char name[10];
	double grade;

}Student;

int main(void)
{
	Student s;

	s.number = 2019144602;
	strcpy_s(s.name, sizeof(s.name), "홍길동");
	s.grade = 4.3;

	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %.2f\n", s.grade);

	return 0;
}

#include<stdio.h>

typedef struct _Point {
	int x;
	int y;
}Point;

int main(void)
{
	Point p = { 1, 2 };
	Point q = { .y = 3, .x = 1 };
	Point r = p;
	Point x = (Point){ 2, 2 };

	printf("p = (%d, %d) \n", p.x, p.y);
	printf("q = (%d, %d) \n", q.x, q.y);
	printf("r = (%d, %d) \n", r.x, r.y);
	printf("x = (%d, %d) \n", x.x, x.y);

	return 0;
}

#include<stdio.h>
#include<string.h>

typedef struct Book {
	char title[50];
	char author[35];
	int pages;
	int price;
}Book;

int main()
{
	Book book1;
	printf(" 도서 제목(string) : ");
	gets(book1.title);
	printf(" 저자명(string) : ");
	gets(book1.author);
	printf(" 전체 페이지수(int) : ");
	scanf_s("%d", &book1.pages);
	printf(" 가격(int) : ");
	scanf_s("%d", &book1.price);

	printf("\n");

	printf("도서명 : %s\n, 저자명 : %s\n, 전체 페이지수 : %d\n, 가격 : %d원\n", book1.title, book1.author, book1.pages, book1.price);
}


#include<stdio.h>
#include<math.h>

typedef struct _Point {
	int x;
	int y;
}Point;

int main(void)
{
	Point p1, p2;
	double xdiff, ydiff;
	double dist;

	printf("첫번째 점의 좌표를 입력하시오(x, y) : ");
	scanf_s("%d %d", &p1.x, &p1.y);

	printf("두번째 점의 좌표를 입력하시오(x, y) : ");
	scanf_s("%d %d", &p2.x, &p2.y);

	xdiff = p1.x - p2.x;
	ydiff = p1.y - p2.y;

	dist = sqrt(xdiff * xdiff + ydiff * ydiff);
	printf("\n");
	printf("두 점사이의 거리는 %f입니다. \n", dist);
	return 0;
}

#include<stdio.h>

typedef struct _Point {
	int x;
	int y;
}Point;

typedef struct _Rect {
	Point p1;
	Point p2;
}Rect;

int main(void)
{
	Rect r;
	int w, h, area, peri;

	printf("왼쪽 상단의 좌표를 입력하시오 : ");
	scanf_s("%d %d", &r.p1.x, &r.p1.y);
	.
	printf("오른쪽 상단의 좌표를 입력하시오 : ");
	scanf_s("%d %d", &r.p2.x, &r.p2.y);

	w = abs(r.p2.x - r.p1.x); // 너비
	h = abs(r.p2.y - r.p1.y); // 높이
	area = w * h; // 면적
	peri = 2 * w + 2 * h; // 둘레

	printf("\n");

	printf("면적은 %d이고 둘레는 %d입니다. \n", area, peri);

	return 0;
}


#include<stdio.h>
#include<string.h>

void main(void)
{
	char name[3][10];
	int i, kor[3], eng[3];
	float avg[3];

	strcpy_s(name[0], sizeof(name[0]), "Kim");
	kor[0] = 90;
	eng[0] = 80;
	avg[0] = (kor[0] + eng[0]) / 2.0f;

	strcpy_s(name[1], sizeof(name[1]), "Lee");
	kor[1] = 70;
	eng[1] = 60;
	avg[1] = (kor[1] + eng[1]) / 2.0f;

	strcpy_s(name[2], sizeof(name[2]), "Park");
	kor[2] = 50;
	eng[2] = 40;
	avg[2] = (kor[2] + eng[2]) / 2.0f;

	for (i = 0; i < 3; i++)
	{
		printf("학생 이름 == > %s\n", name[i]);
		printf("국어 점수 == > %d\n", kor[i]);
		printf("영어 점수 == > %d\n", eng[i]);
		printf("평균 점수 == > %5.1f\n", avg[i]);
		printf("\n");
	}
}


#include<stdio.h>
#include<string.h>

typedef struct _Student {
	char name[10];
	int kor;
	int eng;
	float avg;
}Student;

int main(void)
{
	Student s[3];

	int i;

	strcpy_s(s[0].name, sizeof(s[0].name), "Kim");
	s[0].kor = 90;
	s[0].eng = 80;
	s[0].avg = (s[0].kor + s[0].eng) / 2.0f;

	strcpy_s(s[1].name, sizeof(s[1].name), "Ledd");
	s[1].kor = 70;
	s[1].eng = 60;
	s[1].avg = (s[1].kor + s[1].eng) / 2.0f;

	strcpy_s(s[2].name, sizeof(s[2].name), "Park");
	s[2].kor = 50;
	s[2].eng = 40;
	s[2].avg = (s[2].kor + s[2].eng) / 2.0f;

	printf(" -- 구조체 배열 -- \n");

	for (i = 0; i < 3; i++)
	{
		printf("학생 이름 == > %s\n", s[i].name);
		printf("국어 점수 == > %d\n", s[i].kor);
		printf("영어 점수 == > %d\n", s[i].eng);
		printf("평균 점수 == > %5.1f\n", s[i].avg);
		printf("\n");
	}
}

#include<stdio.h>

typedef struct _Score {
	char name[30];
	int kor;
	int eng;
	int math;
	int total;
	float avr;
}Score;

int main(void)
{
	Score class[3] = { {"강아지", 95, 87, 97},
		{"박기동", 99, 89, 80},
		{"홍길동", 88, 77, 66,} };

	int i;

	for (i = 0; i < 3; i++)
	{
		class[i].total = class[i].kor + class[i].eng + class[i].math;
		class[i].avr = (float)class[i].total / 3.;

		printf("이름 : %s, 국어 : %d, 영어 : %d, 수학 : %d", class[i].name, class[i].kor, class[i].eng, class[i].math);
		printf(" 총점 : %d, 평균 : %5.1f\n\n", class[i].total, class[i].avr);
	}
}


#include<stdio.h>
#define SIZE 3

typedef struct _Student
{
	int number;
	char name[20];
	double grade;
}Student;

int main(void)
{
	Student list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("학번을 입력하시오 : ");
		scanf_s("%d", &list[i].number);

		printf("이름을 입력하시오 : ");
		scanf_s("%s", &list[i].name, sizeof(list[i].name));

		printf("학번을 입력하시오 : ");
		scanf_s("%lf", &list[i].grade);

		printf("\n");
	}

	printf("\n===========================================================\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("학번 %d, 이름 : %s, 학점 : %f\n", list[i].number, list[i].name, list[i].grade);
	}
	printf("\n===========================================================\n");
	return 0;
}

#include<windows.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 100

typedef struct _Point {
	int x;
	int y;
}Point;

int main(void)
{
	Point p[SIZE];
	int i;

	srand((unsigned)time(NULL));

	for (int i = 0; i < SIZE; i++)
	{
		p[i].x = rand() % 500;
		p[i].y = rand() % 500;
	}

	HDC hdc = GetWindowDC(GetForegroundWindow());

	for (int i = 0; i < SIZE; i++)
		Ellipse(hdc, p[i].x, p[i].y, p[i].x + 10, p[i].y + 10);

	return 0;
}

#include<stdio.h>

int main(void)
{
	struct student {
		char name[10];
		int kor;
		int eng;
		float avg;
	};

	struct student s;
	struct student* p;

	p = &s;

	printf("이름 입력 : ");
	scanf_s("%s", p->name, sizeof(p->name));

	printf("국어 점수 : ");
	scanf_s("%d", &p -> kor);

	printf("영어 점수 : ");
	scanf_s("%d", &p -> eng);

	p->avg = (p->kor + p->eng) / 2.0f;

	printf("\n -- 구조체 포인터 활용 --\n");
	printf("학생 이름 == > %s\n", p->name);
	printf("국어 점수 == > %d\n", p->kor);
	printf("영어 점수 == > %d\n", p->eng);
	printf("평균 점수 == > %5.1f\n", p->avg);
}

#include <stdio.h>

typedef struct _Student
{
	int number;
	char name[20];
	double grade;
}Student;

int main(void)
{
	Student s = { 2019144602, "조수익", 4.5 };
	Student* p;

	p = &s;

	printf("학번 : %d, 이름 : %s, 학점 : %.2f \n", s.number, s.name, s.grade);
	printf("학번 : %d, 이름 : %s, 학점 : %.2f \n", (*p).number, (*p).name, (*p).grade);
	printf("학번 : %d, 이름 : %s, 학점 : %.2f \n", p->number, p->name, p->grade);

	return 0;
}

#include <stdio.h>

typedef struct _Point {
	int x;
	int y;
} Point;

Point translate(Point p, Point delta)
{
	Point new_p;
	new_p.x = p.x + delta.x;
	new_p.y = p.y + delta.y;

	return new_p;
}

int main(void)
{
	Point p = { 2, 3 };
	Point delta = { 10, 10 };
	Point result;

	result = translate(p, delta);

	printf("(%d, %d) + (%d, %d) -> (%d, %d)\n", p.x, p.y, delta.x, delta.y, result.x, result.y);

	return 0;
}

#include<stdio.h>

int main(void)
{
	enum week {sun, mon, tue, wed, thuu, fri, sat};

	enum week ww;

	ww = sat;

	if (ww == sun)
		printf("오늘은 일요일입니다. \n\n", ww);
	else
		printf("오늘은 일요일이 아닙니다. \n\n", ww);
}

#include<stdio.h>
#include<malloc.h>

int main(void)
{
	struct student {
		char name[10];
		int age;
	};

	struct student* s;

	int cnt, i;

	printf("입력할 학생 수 : ");
	scanf_s("%d", &cnt);

	s = (struct student*) malloc((sizeof(struct student)) * cnt); // 학생 수만큼 메모리를 할당한다 .

	for (i = 0; i < cnt; i++)
	{
		printf("이름과 나이 입력 : ");
		scanf_s("%s", s[i].name, sizeof(s[i].name));
		scanf_s("%d", &s[i].age);
	}

	printf("\n\n  -- 학생 명단 --\n");
	for (i = 0; i < cnt; i++)
	{
		printf("이름 : %s, 나이 : %d \n", s[i].name, s[i].age);
	}

	free(s); // 메모리 해제한다.
}
*/

