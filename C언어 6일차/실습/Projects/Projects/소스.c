#include <stdio.h>

int main(void)
{
	enum moth {
		January = 1, February, March, April, May, June, July, Agust, September, October, November, December
	};

	enum mouth mm;

	printf("�� �Է� : ");
	scanf_s("%d", &mm);

	printf("\n");

	switch (mm)
	{
	case January: printf("%d���� January �Դϴ�.", mm); break;
	case February: printf("%d���� February �Դϴ�.", mm); break;
	case March: printf("%d���� March �Դϴ�.", mm); break;
	case April: printf("%d���� April �Դϴ�.", mm); break;
	case May: printf("%d���� May �Դϴ�.", mm); break;
	case June: printf("%d���� June �Դϴ�.", mm); break;
	case July: printf("%d���� July �Դϴ�.", mm); break;
	case Agust: printf("%d���� Agust �Դϴ�.", mm); break;
	case September: printf("%d���� September �Դϴ�.", mm); break;
	case October: printf("%d���� October �Դϴ�.", mm); break;
	case November: printf("%d���� November �Դϴ�.", mm); break;
	case December: printf("%d���� December �Դϴ�.", mm); break;

	default: printf(" �߸� �Է��Ͽ����ϴ�.");
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
	strcpy_s(s.name, sizeof(s.name), "ȫ�浿");
	s.grade = 4.3;

	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %.2f\n", s.grade);

	return 0;
}

#include<stdio.h>
#include<string.h>

// ����ü ����
typedef struct Student {
	int number;
	char name[10];
	double grade;

}Student;

int main(void)
{
	Student s;

	s.number = 2019144602;
	strcpy_s(s.name, sizeof(s.name), "ȫ�浿");
	s.grade = 4.3;

	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %.2f\n", s.grade);

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
	printf(" ���� ����(string) : ");
	gets(book1.title);
	printf(" ���ڸ�(string) : ");
	gets(book1.author);
	printf(" ��ü ��������(int) : ");
	scanf_s("%d", &book1.pages);
	printf(" ����(int) : ");
	scanf_s("%d", &book1.price);

	printf("\n");

	printf("������ : %s\n, ���ڸ� : %s\n, ��ü �������� : %d\n, ���� : %d��\n", book1.title, book1.author, book1.pages, book1.price);
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

	printf("ù��° ���� ��ǥ�� �Է��Ͻÿ�(x, y) : ");
	scanf_s("%d %d", &p1.x, &p1.y);

	printf("�ι�° ���� ��ǥ�� �Է��Ͻÿ�(x, y) : ");
	scanf_s("%d %d", &p2.x, &p2.y);

	xdiff = p1.x - p2.x;
	ydiff = p1.y - p2.y;

	dist = sqrt(xdiff * xdiff + ydiff * ydiff);
	printf("\n");
	printf("�� �������� �Ÿ��� %f�Դϴ�. \n", dist);
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

	printf("���� ����� ��ǥ�� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &r.p1.x, &r.p1.y);
	.
	printf("������ ����� ��ǥ�� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &r.p2.x, &r.p2.y);

	w = abs(r.p2.x - r.p1.x); // �ʺ�
	h = abs(r.p2.y - r.p1.y); // ����
	area = w * h; // ����
	peri = 2 * w + 2 * h; // �ѷ�

	printf("\n");

	printf("������ %d�̰� �ѷ��� %d�Դϴ�. \n", area, peri);

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
		printf("�л� �̸� == > %s\n", name[i]);
		printf("���� ���� == > %d\n", kor[i]);
		printf("���� ���� == > %d\n", eng[i]);
		printf("��� ���� == > %5.1f\n", avg[i]);
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

	printf(" -- ����ü �迭 -- \n");

	for (i = 0; i < 3; i++)
	{
		printf("�л� �̸� == > %s\n", s[i].name);
		printf("���� ���� == > %d\n", s[i].kor);
		printf("���� ���� == > %d\n", s[i].eng);
		printf("��� ���� == > %5.1f\n", s[i].avg);
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
	Score class[3] = { {"������", 95, 87, 97},
		{"�ڱ⵿", 99, 89, 80},
		{"ȫ�浿", 88, 77, 66,} };

	int i;

	for (i = 0; i < 3; i++)
	{
		class[i].total = class[i].kor + class[i].eng + class[i].math;
		class[i].avr = (float)class[i].total / 3.;

		printf("�̸� : %s, ���� : %d, ���� : %d, ���� : %d", class[i].name, class[i].kor, class[i].eng, class[i].math);
		printf(" ���� : %d, ��� : %5.1f\n\n", class[i].total, class[i].avr);
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
		printf("�й��� �Է��Ͻÿ� : ");
		scanf_s("%d", &list[i].number);

		printf("�̸��� �Է��Ͻÿ� : ");
		scanf_s("%s", &list[i].name, sizeof(list[i].name));

		printf("�й��� �Է��Ͻÿ� : ");
		scanf_s("%lf", &list[i].grade);

		printf("\n");
	}

	printf("\n===========================================================\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("�й� %d, �̸� : %s, ���� : %f\n", list[i].number, list[i].name, list[i].grade);
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

	printf("�̸� �Է� : ");
	scanf_s("%s", p->name, sizeof(p->name));

	printf("���� ���� : ");
	scanf_s("%d", &p -> kor);

	printf("���� ���� : ");
	scanf_s("%d", &p -> eng);

	p->avg = (p->kor + p->eng) / 2.0f;

	printf("\n -- ����ü ������ Ȱ�� --\n");
	printf("�л� �̸� == > %s\n", p->name);
	printf("���� ���� == > %d\n", p->kor);
	printf("���� ���� == > %d\n", p->eng);
	printf("��� ���� == > %5.1f\n", p->avg);
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
	Student s = { 2019144602, "������", 4.5 };
	Student* p;

	p = &s;

	printf("�й� : %d, �̸� : %s, ���� : %.2f \n", s.number, s.name, s.grade);
	printf("�й� : %d, �̸� : %s, ���� : %.2f \n", (*p).number, (*p).name, (*p).grade);
	printf("�й� : %d, �̸� : %s, ���� : %.2f \n", p->number, p->name, p->grade);

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
		printf("������ �Ͽ����Դϴ�. \n\n", ww);
	else
		printf("������ �Ͽ����� �ƴմϴ�. \n\n", ww);
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

	printf("�Է��� �л� �� : ");
	scanf_s("%d", &cnt);

	s = (struct student*) malloc((sizeof(struct student)) * cnt); // �л� ����ŭ �޸𸮸� �Ҵ��Ѵ� .

	for (i = 0; i < cnt; i++)
	{
		printf("�̸��� ���� �Է� : ");
		scanf_s("%s", s[i].name, sizeof(s[i].name));
		scanf_s("%d", &s[i].age);
	}

	printf("\n\n  -- �л� ��� --\n");
	for (i = 0; i < cnt; i++)
	{
		printf("�̸� : %s, ���� : %d \n", s[i].name, s[i].age);
	}

	free(s); // �޸� �����Ѵ�.
}
*/

