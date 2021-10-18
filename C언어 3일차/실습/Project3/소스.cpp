/*
#include<stdio.h>

void print_starts()
{
	int i;
	for (i = 0; i < 30; i++)
	{
		printf("*");
	}
	printf("\n");
}

int main()
{
	print_starts();
	printf("Hello Word\n");
	print_starts();

	return 0;
}

#include<stdio.h>

int max(int x, int y)
{
	if (x > y) return(x);
	else return (y);
}

int main(void)
{
	int a, b;

	printf("첫번째 정수를 입력하시오 : ");
	scanf_s("%d", &a);

	printf("두번째 정수를 입력하시오 : ");
	scanf_s("%d", &b);

	printf("두수 중에 더큰값은 %d 입니다.\n", max(a, b));

	return 0;
}

#include<stdio.h>

int Add(int num1, int num2)
{
	return num1 + num2;
}

int main(void)
{
	int result;

	result = Add(15, 17);
	printf("덧셈결과 1 : %d\n", result);
	
	result = Add(5, 10);
	printf("덧셈결과 2 : %d\n", result);
	return 0;
}

#include<stdio.h>

int Add(int num1, int num2)
{
	return num1 + num2;
}

void ShowAddResult(int num)
{
	printf("덧셈결과 출력 : %d \n", num);
}

int ReadNum(void)
{
	int num;
	scanf_s("%d", &num);
	return num;
}

void HowToUseThisProg(void)
{
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
	printf("자! 그럼 두개의 정수를 입력하세요. \n");
}

int main(void)
{
	int result, num1, num2;
	
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
	
	return 0;
}

#include<stdio.h>

int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);

int main(void)
{
	int num1, num2;

	printf("두 개의 정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);

	printf("%d와 %d중 절대값이 큰 정수 : %d \n", num1, num2, AbsoCompare(num1, num2));
	
	return 0;
}

int AbsoCompare(int num1, int num2)
{
	if (GetAbsoValue(num1) > GetAbsoValue(num2))
		return num1;
	else
		return num2;
}

int GetAbsoValue(int num)
{
	if (num < 0)
		return num * (-1);
	else
		return num;
}

#include<stdio.h>

int SimpleFuncOne(void)
{
	int num = 10;
	num++;

	printf("SimpleFuncOne num : %d \n", num);
	return 0;
}

int SimpleFuncTwo(void)
{
	int num1 = 20;
	int num2 = 30;
	num1++, num2--;

	printf("num1 & num2 : %d %d \n", num1, num2);
	return 0;
}

int main(void)
{
	int num = 17;

	SimpleFuncOne();
	SimpleFuncTwo();
	printf("main num : %d \n", num);
	return 0;
}

#include<stdio.h>

int main(void)
{
	int cnt;
	
	for (cnt = 0; cnt < 3; cnt++)
	{
		int num = 0;
		num++;
		printf("%d번째 반복, 지역변수 num은 %d. \n", cnt + 1, num);
	}

	if (cnt == 3)
	{
		int num = 7;

		num++;
		printf("if문 내에 존재하는 지역변수 num은 %d. \n", num);
	}

	return 0;
}

#include<stdio.h>

int main(void)
{
	int num = 1;

	if (num == 1)
	{
		int num = 7;
		num += 10;
		printf("if문 내 지역변수 num : %d \n", num);
	}

	printf("main 함수 내 지역변수 num : %d \n", num);
	
	return 0;
}

#include<stdio.h>

void Adds(int val);

int num;

int main(void)
{
	printf("num : %d \n", num);
	
	Add(3);
	printf("num : %d \n", num);

	num++;
	printf("num : %d \n", num);
	
	return 0;
}

void Adds(int val)
{
	num += val;
}

#include<stdio.h>

int Adds(int val);
int num = 1;

int main(void)
{
	int num = 5;
	printf("num : %d \n", Adds(3));
	printf("num : %d \n", num + 9);

	return 0;
}

int Adds(int val)
{
	int num = 9;

	num += val;

	return num;
}

#include<stdio.h>

void SimpleFunc(void)
{
	static int num1 = 0;
	int num2 = 0;
	num1++, num2++;

	printf("static : %d, local : %d \n", num1, num2);
}

int main(void)
{
	int i;
	
	for (i = 0; i < 3; i++)
	{
		SimpleFunc();
	}

	return 0;
}


#include<stdio.h>

void SimpleFunc(void)
{
	register int num1 = 0;
	int num2 = 0;
	num1++, num2++;

	printf("static : %d, local : %d \n", num1, num2);
}

int main(void)
{
	int i;

	for (i = 0; i < 3; i++)
	{
		SimpleFunc();
	}

	return 0;
}


#include<stdio.h>

int total = 0;

int AddToTal(int num)
{
	total += num;

	return total;
}

int main(void)
{
	int num, i;

	for (i = 0; i < 3; i++)
	{
		printf("입력%d : ", i + 1);
		scanf_s("%d", &num);

		printf("누적 : %d \n", AddToTal(num));
	}

	return 0;
}


#include<stdio.h>

void Recursiver(int num)
{
	if (num <= 0)
		return;

	printf("Recursive Call! %d \n", num);
	Recursiver(num - 1);
}

int main(void)
{
	int num = 0;
	
	printf("반복 횟수 : ");
	scanf_s("%d", &num);
	
	Recursiver(num);
	return 0;
}
*/

#include<stdio.h>

int Factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * Factorial(n - 1);
}

int main(void)
{
	printf("1! =  %d \n", Factorial(1));
	printf("2! =  %d \n", Factorial(2));
	printf("3! =  %d \n", Factorial(3));
	printf("4! =  %d \n", Factorial(4));
	printf("9! =  %d \n", Factorial(9));
	printf("0! =  %d \n", Factorial(0));

	return 0;
}