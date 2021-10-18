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


// char형은 -1288 ~ 127, unsigned char형은 0 ~ 255
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
	
	printf("첫번째 : %d, 두번째 : %f 세번째 : %c \n", n1, n2, n3);
}


#include<stdio.h>

int main(void)
{
	int num = 0;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);
	printf("정수값 : %d \n", num);
}


#include<stdio.h>

int main(void)
{
	int num1, num2;

	printf("첫번째 정수를 입력하세요 : ");
	scanf_s("%d", &num1);

	printf("두번째 정수를 입력하세요 : ");
	scanf_s("%d", &num2);

	printf("%d - %d = %d \n", num1, num2, num1 - num2);
}


#include<stdio.h>
int main(void)
{
	int num1, num2;

	printf("첫번째 정수를 입력하세요 : ");
	scanf_s("%d", &num1);

	printf("두번째 정수를 입력하세요 : ");
	scanf_s("%d", &num2);

	printf("%d X %d = %d \n", num1, num2, num1 * num2);
}

#include<stdio.h>
int main(void)
{
	int num1, num2;

	printf("첫번째 정수를 입력하세요 : ");
	scanf_s("%d", &num1);

	printf("두번째 정수를 입력하세요 : ");
	scanf_s("%d", &num2);

	printf("%d / %d = %d \n", num1, num2, num1 / num2);
}

#include<stdio.h>

int main()
{
	char name[255] = "";
	printf("당신의 이름은? : ");

	// sizeof 연산자는 변수나 값, 자료형의 크기를 알려줌
	scanf_s("%s", name, sizeof(name));
	printf("당신의 이름은 %s 입니다.", name);
	return 0;
}

#include<stdio.h>

int main()
{
	char name[255]="";
	printf("당신의 이름은? : ");
	scanf("%s", name);
	printf("당신의 이름은 %s 입닌다.", name);
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

		printf("%d : 이진수(", i);
		for (j = 0; j < 5; j++)
			printf("%d", binArr[j]);
		printf(") 16진수(% X)\n", i);
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

		printf("%02d: 이진수(", i);
		for (j = 0; j < 8; j++) {
			printf("%d", binArr[j]);
		}
		printf(") 16진수(%02X)\n", i);
	}
}