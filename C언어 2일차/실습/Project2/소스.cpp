/*
#include<stdio.h>

int main(void)
{
	int num = 0;

	while (num < 5)
	{
		printf("Hello Word %d\n", num);
		num++;
	}
}

#include<stdio.h>

int main(void)
{
	int dan = 0, num = 1;
	printf("몇단 ? : ");
	scanf_s("%d", &dan);

	while (num <= 9)
	{
		printf("%d X %d = %d\n", dan, num, dan * num);
		num++;
	}

	return 0;
}

#include<stdio.h>

int main()
{
	int dan = 2, num = 1;
	while (dan < 9)
	{
		while (num <= 9)
		{
			printf("%d X %d = %d\n", dan, num, dan * num);
			num++;
		}
		dan++;
	}
}

#include<stdio.h>

int main()
{
	int num = 0;
	do {
		printf("Hello World!!!!\n");
		num++;
	} while (num < 3);

	return 0;
}

#include<stdio.h>

int main(void)
{
	int total = 0, num = 0;
	
	do {
		printf("정수 입력(0 to Quit): ");
		scanf_s("%d", &num);
		total = total + num;
	} while (num != 0);

	printf("total = %d", total);
}

#include<stdio.h>

int main(void)
{
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		printf("Hi~ \n");
	}

	return 0;
}

#include<stdio.h>

int main(void)
{
	int i = 0, num = 0, sum = 0;

	printf("0부터 num까지의 덧셈,  num은 : ");
	scanf_s("%d", &num);

	for (i = 0; i <= num; i++)
	{
		sum += i;
	}

	printf("0부터 %d까지의 합 : %d\n", num, sum);
	return 0;
}

#include<stdio.h>

int main(void)
{
	double total = 0.0;
	double input = 0.0;
	int num = 0;

	for (; input >= 0.0; num++)
	{
		total += input;
		printf("실수 입력(minus to quit!): ");
		scanf_s("%lf", &input);
	}

	printf("평균 : %f \n", total / (num - 1));
}

#include<stdio.h>

int main(void)
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%3d X %d = %2d", i, j, i * j);
		}

		printf("\n");
	}
	return 0;
}

#include<stdio.h>

int main(void)
{
	int num = 0;
	int i = 0, j = 0;

	printf("0.종료 1.+, 2.-, 3.*, 4./ 5.%%  중 선택 : ");
	scanf_s("%d", &num);

	while (num != 0)
	{
		printf("0.종료 1.+, 2.-, 3.*, 4./ 5.%%  중 선택 : ");
		scanf_s("%d", &num);

		printf("첫번째 수를 입력하세요 : ");
		scanf_s("%d", &i);

		printf("두번째 수를 입력하세요 : ");
		scanf_s("%d", &j);

		if (num == 1)
		{
			printf("%d + %d = %d\n", i, j, i + j);
		}

		else if (num == 2)
		{
			printf("%d - %d = %d\n", i, j, i - j);
		}

		else if (num == 3)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}

		else if (num == 4)
		{
			printf("%d / %d = %d\n", i, j, i / j);
		}

		else if (num == 5)
		{
			printf("%d %% %d = %d\n", i, j, i % j);
		}
	}
}
*/                                                                                                         

#include<stdio.h>

int main(void)
{
	int num = 0;
	int i = 0, j = 0;

	printf("0.종료 1.+, 2.-, 3.*, 4./ 5.%%  중 선택 : ");
	scanf_s("%d", &num);

	printf("첫번째 수를 입력하세요 : ");
	scanf_s("%d", &i);

	printf("두번째 수를 입력하세요 : ");
	scanf_s("%d", &j);

	switch(num)
	{
		case 0:
			printf("종료\n");
			break;
		case 1:
			printf("%d + %d = %d\n", i, j, i + j);
			break;

		case 2:
			printf("%d - %d = %d\n", i, j, i - j);
			break;

		case 3:
			printf("%d * %d = %d\n", i, j, i * j);
			break;

		case 4:
			printf("%d / %d = %d\n", i, j, i / j);
			break;

		case 5:
			printf("%d %% %d = %d\n", i, j, i % j);
			break;

		default:
			printf("0 ~ 5 까지 다시 입력하세요")
	}
}
