#include<stdio.h>
#include <conio.h>

int main(void)
{
	int a[30][30] = { 0, };
	int num = 1, x = 0, y = 0;
	int i, j, k;
	int n, sign = 1;

	printf("배열 사이즈를 입력하시오 : ");
	scanf_s("%d", &n);

	printf("\n");

	for (k = 0; k < n; ++k)
	{
		a[y][x] = num++;
		x += sign;
	}

	x -= 1;

	for (i = n - 1; i > 0; --i)
	{
		for (j = 0; j < i; ++j)
		{
			y += sign;
			a[y][x] = num++;
		}
		sign *= -1;

		for (k = 0; k < i; ++k)
		{
			x += sign;
			a[y][x] = num++;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%3d", a[i][j]);
		}

		printf("\n\n");
	}
	
	printf("문자를 입력해주세요>> ");

	_getch();

	return 0;
	
}
