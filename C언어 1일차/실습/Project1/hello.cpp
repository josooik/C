/*
#include<stdio.h>

int main()
{
	printf("hello word \n");
	return 0;
}


#include<stdio.h>

int main(void)
{
	int score;
	score = 90;
	printf("%d \n", score);
}

#include<stdio.h>

int main(void)
{
	short num1 = 32767;
	short num2 = 10;
	short result;

	result = num1 + num2;
	printf("num1 + num2 = %d \n", result);
	return 0;
}


// char���� -1288 ~ 127, unsigned char���� 0 ~ 255
#include<stdio.h>

int main(void)
{
	unsigned char num1, num2, reuslt;
	num1 = 255, num2 = 1;
	reuslt = num1 + num2;
	printf("num1 + num2 = %d \n", reuslt);
	return 0;
}

#include<stdio.h>

int main(void)
{
	int n1 = 1;
	double n2 = 2.123;
	char n3 = 'a';
	
	printf("ù��° : %d, �ι�° : %f ����° : %c \n", n1, n2, n3);
}


#include<stdio.h>

int main(void)
{
	int num = 0;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num);
	printf("������ : %d \n", num);
}


#include<stdio.h>

int main(void)
{
	int num1, num2;

	printf("ù��° ������ �Է��ϼ��� : ");
	scanf_s("%d", &num1);

	printf("�ι�° ������ �Է��ϼ��� : ");
	scanf_s("%d", &num2);

	printf("%d - %d = %d \n", num1, num2, num1 - num2);
}


#include<stdio.h>
int main(void)
{
	int num1, num2;

	printf("ù��° ������ �Է��ϼ��� : ");
	scanf_s("%d", &num1);

	printf("�ι�° ������ �Է��ϼ��� : ");
	scanf_s("%d", &num2);

	printf("%d X %d = %d \n", num1, num2, num1 * num2);
}

#include<stdio.h>
int main(void)
{
	int num1, num2;

	printf("ù��° ������ �Է��ϼ��� : ");
	scanf_s("%d", &num1);

	printf("�ι�° ������ �Է��ϼ��� : ");
	scanf_s("%d", &num2);

	printf("%d / %d = %d \n", num1, num2, num1 / num2);
}

#include<stdio.h>

int main()
{
	char name[255] = "";
	printf("����� �̸���? : ");

	// sizeof �����ڴ� ������ ��, �ڷ����� ũ�⸦ �˷���
	scanf_s("%s", name, sizeof(name));
	printf("����� �̸��� %s �Դϴ�.", name);
	return 0;
}

#include<stdio.h>

int main()
{
	char name[255]="";
	printf("����� �̸���? : ");
	scanf("%s", name);
	printf("����� �̸��� %s �ԴѴ�.", name);
	return 0;
}

#include <stdio.h>

int main()
{
	int i, j, tmp;
	int binArr[5];
	for (i = 8; i <= 20; i++) {
		tmp = i;
		for (j = 0; j < 5; j++) {
			binArr[4 - j] = tmp % 2;
			tmp = tmp >> 1;
		}

		printf("%d : ������(", i);
		for (j = 0; j < 5; j++)
			printf("%d", binArr[j]);
		printf(") 16����(% X)\n", i);
	}
}
*/

#include <stdio.h>

int main()
{
	int i, j, tmp;
	int binArr[8];
	for (i = 8; i <= 20; i++) {
		tmp = i;
		for (j = 0; j < 8; j++) {
			binArr[7 - j] = tmp % 2;
			tmp = tmp >> 1;
		}

		printf("%02d: ������(", i);
		for (j = 0; j < 8; j++) {
			printf("%d", binArr[j]);
		}
		printf(") 16����(%02X)\n", i);
	}
}