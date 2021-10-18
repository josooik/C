/*
#include <stdio.h>

int main()
{
	int i = 10;
	char c = 'E';
	float f = 12.3f;

	printf("i의 주소 : %p %d\n", &i, &i);
	printf("c의 주소 : %p %d\n", &c, &c);
	printf("f의 주소 : %p %d\n", &f, &f);

	return 0;

}


#include <stdio.h>

int main()
{
	int i = 10;
	int *p; // 포인터 변수 p 선언
	p = &i; // 변수 i의 주소가 포인터 p로 대입

	printf("i의 주소 : %u %u\n", i, &i);

	return 0;

}

#include<stdio.h>

int main(void)
{
	int i = 10;
	double f = 12.3;
	int *pi = NULL;

	double *pf = NULL;
	pi = &i;
	pf = &f;

	printf("%u %u\n", pi, &i);
	printf("%u %u\n", pf, &f);
	return 0;
}

#include<stdio.h>

int main(void)
{
	int i;
	int *p;

	scanf_s("%d", &i);
	p = &i;

	printf("%d \n", *p);
	return 0;
}

#include<stdio.h>

int main(void)
{
	char *pc;
	int *pi;
	double* pd;

	pc = (char*)10000;
	pi = (int*)10000;
	pd = (double*)10000;

	printf("증가전 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

	pc++;
	pi++;
	pd++;
	printf("증가후 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	printf("pc+2 = %d, pi+2 = %d, pd+2 = %d\n", pc+2, pi+2, pd+2);
	return 0;
}

#include<stdio.h>

int main()
{
	int i[5] = { 10, 20, 30, 40, 50 };
	int *p;
	p = &i[0];

	printf("%d\n", *p++);
	printf("%d\n", ++*p);
	printf("%d\n", *(++p));

	return 0;
}


#include<stdio.h>

int main(void)
{
	int i = 10;
	int *pi = &i;

	printf("i = %d, pi = %p\n", i, pi);
	(*pi)++; // pi가 가리키는 위치의 값을 증가
	printf("i = %d, pi = %p\n", i, pi);

	printf("i = %d, pi = %p\n", i, pi);
	*pi++; // pi가 가리키는 위치에서 값을 가져온 후 pi증가
	printf("i = %d, pi = %p\n", i, pi);

	return 0;
}


#include<stdio.h>

int main()
{
	int ar[] = { 10, 20, 30, 40, 50, 0 };
	int *ptr = ar;
	int sum = 0;

	while (*ptr)
		sum += *ptr++;

	printf("sum = %d\n", sum);
}

#include<stdio.h>

int main()
{
	int aa[3];
	int *p;
	int i, hap = 0;

	for (i = 0; i < 3; i++)
	{
		printf(" %d 번째 숫자 : ", i + 1);
		scanf_s("%d", &aa[i]);
	}

	p = aa;

	for (i = 0; i < 3; i++)
		hap += *(p + i);

	printf("입력 숫자의 합 = > %d\n", hap);
}

#include<stdio.h>

void modify(int* ptr)
{
	*ptr = 99;
}

int main(void)
{
	int number = 1;

	modify(&number);
	printf("number = %d\n", number);

	return 0;
}

#include<stdio.h>
void swap(int x, int y);

int main(void)
{
	int a = 100, b = 200;
	printf("a = %d, b = %d\n", a, b);

	swap(a, b);

	printf("a = %d, b = %d\n", a, b);

	return 0;
}

void swap(int x, int y)
{
	int tmp;
	printf("x = %d y = %d\n", x, y);

	tmp = x;
	x = y;
	y = tmp;

	printf("x = %d y = %d\n", x, y);
}

#include<stdio.h>
void swap(int x, int y);

int main(void)
{
	int a = 100, b = 200;
	printf("a = %d, b = %d\n", a, b);

	swap(&a, &b);

	printf("a = %d, b = %d\n", a, b);

	return 0;
}

void swap(int *px, int *py)
{
	int tmp;

	tmp = *px;
	*px = *py;
	*py = tmp;

}

#include<stdio.h>

int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* temp;

	printf("*ptr1 = %d, *ptr2 = %d\n", *ptr1, *ptr2);

	*ptr1 += 10;
	*ptr2 -= 10;

	printf("*ptr1 = %d, *ptr2 = %d\n", *ptr1, *ptr2);

	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("*ptr1 = %d, *ptr2 = %d\n", *ptr1, *ptr2);
}

#include<stdio.h>

int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };

	printf("배열의 이름 = %u\n", a);
	printf("첫 번쨰 원소의 주소 = %u\n", &a[0]);
	
	return 0;
}

#include<stdio.h>

int main(void)
{
	int ar[] = { 11, 12, 13, 14, 15 };
	int* p1, * p2, * p3;

	p1 = &ar[0];
	p2 = &ar[4];
	p3 = p1 + (p2 - p1) / 2;

	printf("중간의 요소 = %d\n", *p3);
}


#include<stdio.h>

void sub(int b[], int n);

int main(void)
{
	int a[3] = { 1, 2, 3 };

	printf("%d %d %d\n", a[0], a[1], a[2]);

	sub(a, 3);
	printf("%d %d %d\n", a[0], a[1], a[2]);

	return 0;
}

void sub(int b[], int n)
{
	b[0] = 4;
	b[1] = 5;
	b[2] = 6;
}
*/
