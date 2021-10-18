/*
#include<stdio.h>

int main()
{
	int a, b, c, d;
	int hap;

	printf("1번째 숫자를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("2번째 숫자를 입력하세요 : ");
	scanf_s("%d", &b);
	printf("3번째 숫자를 입력하세요 : ");
	scanf_s("%d", &c);
	printf("4번째 숫자를 입력하세요 : ");
	scanf_s("%d", &d);

	hap = a + b + c + d;

	printf("\n");
	printf("합계 == > %d \n", hap);
}


#include<stdio.h>

int main()
{
	int aa[4];
	int hap;

	printf("1번째 숫자를 입력하세요 : ");
	scanf_s("%d", &aa[0]);
	printf("2번째 숫자를 입력하세요 : ");
	scanf_s("%d", &aa[1]);
	printf("3번째 숫자를 입력하세요 : ");
	scanf_s("%d", &aa[2]);
	printf("4번째 숫자를 입력하세요 : ");
	scanf_s("%d", &aa[3]);

	hap = aa[0] + aa[1] + aa[2] + aa[3];
	
	printf("\n");
	printf("합계 == > %d \n", hap);
}


#include<stdio.h>

int main(void)
{
	int i;
	int scores[5];

	scores[0] = 10;
	scores[1] = 20;
	scores[2] = 30;
	scores[3] = 40;
	scores[4] = 50;

	for (i = 0; i < 5; i++)
	{
		printf("scores[%d] = %d \n", i, scores[i]);
	}

	return 0;
}


#include<stdio.h>

int main()
{
	int aa[4];
	int hap = 0;
	int i;

	for (i = 0; i < 4; i++)
	{
		printf("%d번째 숫자를 입력하세요 : ", i + 1);
		scanf_s("%d", &aa[i]);
	}

	hap = aa[0] + aa[1] + aa[2] + aa[3];

	printf("합계 == > %d \n", hap);
}

#include<stdio.h>

int main()
{
	int aa[4];
	int hap = 0;
	int i;

	for (i = 0; i < 4; i++)
	{
		printf("%d번째 숫자를 입력하세요 : ", i + 1);
		scanf_s("%d", &aa[i]);
		hap += aa[i];
	}

	printf("합계 == > %d \n", hap);
}


#include<stdio.h>
#define STUDENTS 5

int main(void)
{
	int scores[STUDENTS];
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++)
	{
		printf("학생들의 성적을 입력하시오 : ");
		scanf_s("%d", &scores[i]);
	}

	for (i = 0; i < STUDENTS; i++)
	{
		sum += scores[i];
	}

	average = sum / STUDENTS;

	printf("성적 평균 = %d \n", average);

	return 0;
}


#include<stdio.h>
int main(void)
{
	int scores[5] = { 31, 63, 62, 87, 14 };

	int i;

	for (i = 0; i < 5; i++)
	{
		printf("scores[%d] = %d \n", i, scores[i]);
	}

	return 0;
}


#include<stdio.h>

int main()
{
	int scores[10] = { 95, 100, 98, 78, 65, 55, 78, 52, 97, 98 };
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d ", scores[i]);
	}

	printf("\n");

	return 0;
}


#include<stdio.h>

int main()
{
	int scores[] = { 31, 63, 62, 87, 14 };
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("scores[%d] = %d \n", i, scores[i]);
	}

	return 0;
}


#include<stdio.h>

int main(void)
{
	int scores[5] = { 31, 63 };
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("scores[%d] = %d \n", i, scores[i]);
	}

	return 0;
}


#include<stdio.h>

int main(void)
{
	int scores[5] = { 0 };
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("scores[%d] = %d \n", i, scores[i]);
	}

	return 0;
}


#include<stdio.h>

int main(void)
{
	int scores[5];

	int i;

	for (i = 0; i < 5; i++)
	{
		printf("scores[%d] = %d \n", i, scores[i]);
	}
	
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h> // time() 함수
#define SIZE 6

int main(void)
{
	int freq[SIZE] = { 0 };
	int i;
	srand((unsigned)time(NULL)); // 난수 발생초기화

	for (i = 0; i < 10000; i++)
	{
		freq[rand() % 6]++; // 0 ~ 5까지의 난수 발생
	}

	printf("=================\n");
	printf(" 면          빈도\n");
	printf("=================\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%2d          %5d\n", i + 1, freq[i]);
	}
	
	return 0;

}


#include<stdio.h>

int main(void)
{
	int aa[100], bb[100];
	int i;

	for (i = 0; i < 100; i++)
	{
		aa[i] = i * 2;
		printf("aa[%d] = %d 입력됨 \n", i, aa[i]);
	}

	for (i = 0; i < 100; i++)
	{
		bb[i] = aa[99 - i];
	}

	printf("bb[0]는 %d, bb[99]는 %d 입력됨 \n", bb[0], bb[99]);
}


#include<stdio.h>

int main(void)
{
	int scores[] = { 10, 20, 30, 40, 50 };
	int count;

	// sizeof() => 배열의 크기(요소의 개수) = sizeof(전체 배열 이름) / sizeof(배열의 데이터 형식)
	// sizeof(scores) => scores배열 갯수 5개 X 개당 4바이트 = 20바이트
	// sizeof(int) => int(정수형 4바이트)
	// count = sizeof(scores) / sizeof(int) =>  20바이트 / 4바이트 = 5개
	count = sizeof(scores) / sizeof(int);

	printf("배열 scores[]의 요소의 개수는 %d 입니다. \n", count);
}


#include<stdio.h>

int main(void)
{
	int scores[] = { 1, 2, 3, 4, 5, 6 };
	int i, size;

	size = sizeof(scores) / sizeof(scores[0]);

	printf("sizeof(scores) : %d \n", sizeof(scores));
	printf("sizeof(scores[0]) : %d \n", sizeof(scores[0]));
	printf("size = sizeof(scores) / sizeof(scores[0]) : %d \n", size);

	for (i = 0; i < size; i++)
	{
		printf("%d ", scores[i]);
	}

	return 0;
}


#include<stdio.h>
#define SIZE 26

int main(void)
{
	int i;
	char codes[SIZE];

	for (i = 0; i < SIZE; i++)
	{
		codes[i] = 'a' + i;
	}

	for (i = 0; i < SIZE; i++)
	{
		printf("%c ", codes[i]);
	}

	printf("\n");

	return 0;
}


#include<stdio.h>

int main(void)
{
	char ss[8] = "Basic-C";
	int i;

	//ss[5] = '#';

	for (i = 0; i < 8; i++)
	{
		printf("ss[%d] == > %c \n", i, ss[i]);
	}

	printf("문자열 배열 ss == > %s \n", ss);
}


#include<stdio.h>

int main(void)
{
	char ss[5] = "abcd";
	char tt[5];
	int i;

	for (i = 0; i < 4; i++)
	{
		tt[i] = ss[3 - i];
	}

	tt[4] = '\0';

	printf("거꾸로 출력한 결과 == > %s \n", tt);
}


#include<stdio.h>

int main(void)
{
	int len = 0;
	char s[100];

	printf("문자열을 입력하시오 : ");
	scanf_s("%s", s, sizeof(s));

	while (s[len] != '\0')
		len++;

	printf("문자열 \"%s\"의 길이 : %d \n", s, len);
	
	return 0;
}


#include<stdio.h>
#include<string.h> 

int main(void)
{
	int len = 0;
	char s[10];

	printf("문자열을 입력하시오 : ");
	scanf_s("%s", s, sizeof(s));

	printf("sizeof(s) : %d \n", sizeof(s));

	len = strlen(s);

	printf("문자열 \"%s\"의 길이 : %d \n", s, len);

	return 0;
}


#include<stdio.h>
#include<string.h>

int main(void)
{
	char ss[4];

	strcpy_s(ss, "XYZ");

	printf("문자열 ss의 내용 == > %s \n", ss);
}


#include<stdio.h>
#include<string.h>

int main(void)
{
	char ss[7] = "XYZ";

	strcat_s(ss, "ABC");

	printf("이어진 문자열 ss의 내용 == > %s \n", ss);

}


#include<stdio.h>
#include<string.h>

int main(void)
{
	char ss[] = "XYZ";
	char tt[] = "xyz";
	int r;

	r = strcmp(ss, tt);

	printf("두 문자열의 비교결과 == > %d \n", r);
}

#include<stdio.h>
#include<string.h>

int main(void)
{
	char ss[20];
	char tt[20];
	int r1, r2;

	puts("첫번쨰 문자열을 입력하세요.");
	gets_s(ss);

	puts("두번째 문자열을 입력하세요.");
	gets_s(tt);

	r1 = strlen(ss);
	r2 = strlen(tt);

	printf("첫번째 문자열의 길이 == > %d \n", r1);
	printf("두번째 문자열의 길이 == > %d \n", r2);

	if (strcmp(ss, tt) == 0)
		puts("두 문자열의 내용이 같습니다. \n");
	else
		puts("두 문자열의 내용이 다릅니다. \n");
}


#include<stdio.h>
#define SIZE 6

int main(void)
{
	int i;
	int a[SIZE] = { 1, 2, 3, 4, 5 };
	int b[SIZE] = { 1, 2, 3, 4, 5, 6 };

	for (i = 0; i < SIZE; i++)
	{
		if (a[i] != b[i])
		{
			printf("a[]와 b[]는 같지 않습니다. \n");
			return 0;
		}
	}
	
	printf("a[]와 b[]는 같습니다. \n");
	return 0;
}


#include<stdio.h>
#define SIZE 10

int main(void)
{
	int prices[SIZE] = { 12, 3, 19, 6, 18, 8, 12, 4, 1, 19 };
	int i, maximum;
	printf("[ ");

	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", prices[i]);
	}

	printf(" ]\n");

	maximum = prices[0];
	for (i = 1; i < SIZE; i++)
	{
		if (prices[i] > maximum)
			maximum = prices[i];
	}

	printf("최대값은 %d입니다. \n", maximum);

	return 0;
}


#include<stdio.h>
#define SIZE 10

int main(void)
{
	int prices[SIZE] = { 12, 3, 19, 6, 18, 8, 12, 4, 1, 19 };
	int i, minimum;
	printf("[ ");

	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", prices[i]);
	}

	printf(" ]\n");

	minimum = prices[0];
	for (i = 1; i < SIZE; i++)
	{
		if (prices[i] < minimum)
			minimum = prices[i];
	}

	printf("최소값은 %d입니다. \n", minimum);

	return 0;
}


#include<stdio.h>
#define SIZE 10

int main(void)
{
	int key, i;
	int list[SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	
	printf("[ ");

	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", list[i]);
	}

	printf("] \n");

	printf("탐색할 값을 입력하시오 : ");
	scanf_s("%d", &key);

	for (i = 0; i < SIZE; i++)
	{
		if (list[i] == key)
		{
			printf("탐색 성공 인덱스 = %d\n", i);
			break;
		}
	}

	return 0;
}


#include<stdio.h>

int main()
{
	int aa[3][4];

	aa[0][0] = 1; aa[0][1] = 2; aa[0][2] = 3; aa[0][3] = 4;
	aa[1][0] = 5; aa[1][1] = 6; aa[1][2] = 7; aa[1][3] = 8;
	aa[2][0] = 9; aa[2][1] = 10; aa[2][2] = 11; aa[2][3] = 12;

	printf("aa[0][0]부터 aa[2][3]까지 출력 \n");
	printf("%3d %3d %3d %3d \n", aa[0][0], aa[0][1], aa[0][2], aa[0][3]);
	printf("%3d %3d %3d %3d \n", aa[1][0], aa[1][1], aa[1][2], aa[1][3]);
	printf("%3d %3d %3d %3d \n", aa[2][0], aa[2][1], aa[2][2], aa[2][3]);
}
*/

#include<stdio.h>

int main()
{
	int aa[3][4];
	int i, k;
	int val = 1;

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 4; k++)
		{
			aa[i][k] = val;
			val++;
		}
	}

	printf("aa[0][0]부터 aa[3][4]까지 출력 \n");

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 4; k++)
		{
			printf("%3d", aa[i][k]);
		}

		printf("\n");
	}
}
