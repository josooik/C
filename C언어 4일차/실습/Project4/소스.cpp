/*
#include<stdio.h>

int main()
{
	int a, b, c, d;
	int hap;

	printf("1��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("2��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &b);
	printf("3��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &c);
	printf("4��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &d);

	hap = a + b + c + d;

	printf("\n");
	printf("�հ� == > %d \n", hap);
}


#include<stdio.h>

int main()
{
	int aa[4];
	int hap;

	printf("1��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &aa[0]);
	printf("2��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &aa[1]);
	printf("3��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &aa[2]);
	printf("4��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &aa[3]);

	hap = aa[0] + aa[1] + aa[2] + aa[3];
	
	printf("\n");
	printf("�հ� == > %d \n", hap);
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
		printf("%d��° ���ڸ� �Է��ϼ��� : ", i + 1);
		scanf_s("%d", &aa[i]);
	}

	hap = aa[0] + aa[1] + aa[2] + aa[3];

	printf("�հ� == > %d \n", hap);
}

#include<stdio.h>

int main()
{
	int aa[4];
	int hap = 0;
	int i;

	for (i = 0; i < 4; i++)
	{
		printf("%d��° ���ڸ� �Է��ϼ��� : ", i + 1);
		scanf_s("%d", &aa[i]);
		hap += aa[i];
	}

	printf("�հ� == > %d \n", hap);
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
		printf("�л����� ������ �Է��Ͻÿ� : ");
		scanf_s("%d", &scores[i]);
	}

	for (i = 0; i < STUDENTS; i++)
	{
		sum += scores[i];
	}

	average = sum / STUDENTS;

	printf("���� ��� = %d \n", average);

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
#include <time.h> // time() �Լ�
#define SIZE 6

int main(void)
{
	int freq[SIZE] = { 0 };
	int i;
	srand((unsigned)time(NULL)); // ���� �߻��ʱ�ȭ

	for (i = 0; i < 10000; i++)
	{
		freq[rand() % 6]++; // 0 ~ 5������ ���� �߻�
	}

	printf("=================\n");
	printf(" ��          ��\n");
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
		printf("aa[%d] = %d �Էµ� \n", i, aa[i]);
	}

	for (i = 0; i < 100; i++)
	{
		bb[i] = aa[99 - i];
	}

	printf("bb[0]�� %d, bb[99]�� %d �Էµ� \n", bb[0], bb[99]);
}


#include<stdio.h>

int main(void)
{
	int scores[] = { 10, 20, 30, 40, 50 };
	int count;

	// sizeof() => �迭�� ũ��(����� ����) = sizeof(��ü �迭 �̸�) / sizeof(�迭�� ������ ����)
	// sizeof(scores) => scores�迭 ���� 5�� X ���� 4����Ʈ = 20����Ʈ
	// sizeof(int) => int(������ 4����Ʈ)
	// count = sizeof(scores) / sizeof(int) =>  20����Ʈ / 4����Ʈ = 5��
	count = sizeof(scores) / sizeof(int);

	printf("�迭 scores[]�� ����� ������ %d �Դϴ�. \n", count);
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

	printf("���ڿ� �迭 ss == > %s \n", ss);
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

	printf("�Ųٷ� ����� ��� == > %s \n", tt);
}


#include<stdio.h>

int main(void)
{
	int len = 0;
	char s[100];

	printf("���ڿ��� �Է��Ͻÿ� : ");
	scanf_s("%s", s, sizeof(s));

	while (s[len] != '\0')
		len++;

	printf("���ڿ� \"%s\"�� ���� : %d \n", s, len);
	
	return 0;
}


#include<stdio.h>
#include<string.h> 

int main(void)
{
	int len = 0;
	char s[10];

	printf("���ڿ��� �Է��Ͻÿ� : ");
	scanf_s("%s", s, sizeof(s));

	printf("sizeof(s) : %d \n", sizeof(s));

	len = strlen(s);

	printf("���ڿ� \"%s\"�� ���� : %d \n", s, len);

	return 0;
}


#include<stdio.h>
#include<string.h>

int main(void)
{
	char ss[4];

	strcpy_s(ss, "XYZ");

	printf("���ڿ� ss�� ���� == > %s \n", ss);
}


#include<stdio.h>
#include<string.h>

int main(void)
{
	char ss[7] = "XYZ";

	strcat_s(ss, "ABC");

	printf("�̾��� ���ڿ� ss�� ���� == > %s \n", ss);

}


#include<stdio.h>
#include<string.h>

int main(void)
{
	char ss[] = "XYZ";
	char tt[] = "xyz";
	int r;

	r = strcmp(ss, tt);

	printf("�� ���ڿ��� �񱳰�� == > %d \n", r);
}

#include<stdio.h>
#include<string.h>

int main(void)
{
	char ss[20];
	char tt[20];
	int r1, r2;

	puts("ù���� ���ڿ��� �Է��ϼ���.");
	gets_s(ss);

	puts("�ι�° ���ڿ��� �Է��ϼ���.");
	gets_s(tt);

	r1 = strlen(ss);
	r2 = strlen(tt);

	printf("ù��° ���ڿ��� ���� == > %d \n", r1);
	printf("�ι�° ���ڿ��� ���� == > %d \n", r2);

	if (strcmp(ss, tt) == 0)
		puts("�� ���ڿ��� ������ �����ϴ�. \n");
	else
		puts("�� ���ڿ��� ������ �ٸ��ϴ�. \n");
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
			printf("a[]�� b[]�� ���� �ʽ��ϴ�. \n");
			return 0;
		}
	}
	
	printf("a[]�� b[]�� �����ϴ�. \n");
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

	printf("�ִ밪�� %d�Դϴ�. \n", maximum);

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

	printf("�ּҰ��� %d�Դϴ�. \n", minimum);

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

	printf("Ž���� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &key);

	for (i = 0; i < SIZE; i++)
	{
		if (list[i] == key)
		{
			printf("Ž�� ���� �ε��� = %d\n", i);
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

	printf("aa[0][0]���� aa[2][3]���� ��� \n");
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

	printf("aa[0][0]���� aa[3][4]���� ��� \n");

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 4; k++)
		{
			printf("%3d", aa[i][k]);
		}

		printf("\n");
	}
}
