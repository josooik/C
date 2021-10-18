#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <windows.h>
#include <conio.h>

void setcolor(unsigned short text, unsigned short back)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text | (back << 4));
}

int main(void)
{
	int x[4] = {0, }, n = 0;
	int strike = 0, ball = 0;
	int random[4] = { 0, };

	srand(time(NULL)); // 난수 초기화

	setcolor(3, 0);
	printf("ramdom 값 : ");
	

	for (int i = 0; i < 3; i++)
	{
		random[i] = rand() % 10;  // 0 ~ 9 사이의 숫자를 뽑아서 random 변수에 저장

		printf("%d ", random[i]);
	}

	setcolor(7, 0);
	printf("\n");

	while (1)
	{
		printf("\n");
		setcolor(1, 0);
		printf("----------------------\n");
		setcolor(7, 0);
		printf("%d번째 도전입니다.\n", n + 1);
		printf("\n");

		printf("3개의 숫자를 입력하세요 : ");
		scanf_s("%d %d %d", &x[0], &x[1], &x[2]);

		printf("\n");

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (random[i] == x[j])
				{
					if (i == j)
					{
						strike++;
					}
					else
					{
						ball++;
					}
				}
			}
		}

		setcolor(2, 0);
		printf("%d strike, %d ball\n", strike, ball);

		if (strike == 3)
		{
			setcolor(7, 0);
			printf("\n");
			printf("게임 종료\n");
			break;
		}

		strike = 0;
		ball = 0;
		n++;
	}
	_getch();
	
}
