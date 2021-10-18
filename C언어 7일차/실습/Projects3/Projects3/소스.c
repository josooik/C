/* 

// * ���� ����� ����

// - FILE* ������ �̸� = fopen(���ϸ�, �����̸�);
// - �����ϸ�(������ ����� �о� ���̸�) ������ ��ȯ
// - �����ϸ� NULL ��ȯ
FILE* fopen(const char* filename, const char* mode);

// - ���Ͽ� ������ �ۼ�
// - fprintf(���� ������, ����, ��1, ��2,....)
// - �����ϸ� �� ���ڿ��� ���� ��ȯ, �����ϸ� ������ ��ȯ
int fprintf(FILE* const _Stream, char const* c
onst_format, ...)

// fclose(����������)
// �����ϸ� 0 ��ȯ �����ϸ� EOF(-1) ��ȯ
int fclose(FILE* _Stream);

* ����� ��Ʃ��� �ɼ� ����
1. #define _CRT_SECURE_NO_WARNINGS �߰�
2. ������Ʈ -> �Ӽ� -> �Ϲ� -> (C / C++) -> �Ϲ� -> SDL�˻� -> �ƴϿ�
*/

/*
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// ���� ����
int main()
{

	//FILE* �������̸� = fopen(���ϸ�, ���ϸ��);
	FILE * fp = fopen("hello.txt", "w"); // ���� ����
		
	fprintf(fp, "%s %d\n", "Hello", 2021);

	fclose(fp);

	return 0;
}

#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// ���� ���
int main()
{

	//FILE* �������̸� = fopen(���ϸ�, ���ϸ��);
	//FILE* fp = fopen("hello.txt", "w");

	fprintf(stdout, "%s %d\n", "Hello1", 2021); // ����â ���

	//fclose(fp);

	return 0;
}

#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// ���� �о����
int main()
{
	char str[10];
	int num;

	//FILE* �������̸� = fopen(���ϸ�, ���ϸ��);
	FILE* fp = fopen("hello.txt", "r"); // ���� �б�

	fscanf(fp, "%s %d\n", str, &num);
	printf("%s %d\n", str, num);

	fclose(fp);

	return 0;
}

#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// ���� ����
int main()
{
	//FILE* �������̸� = fopen(���ϸ�, ���ϸ��);
	FILE* fp = fopen("hello1.txt", "w"); // ���� ����

	fputs("Hellow World!\n", fp);
	fputs("Good\n", fp);

	fclose(fp);

	return 0;
}

#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// ���� ����
int main()
{
	int i;

	//FILE* �������̸� = fopen(���ϸ�, ���ϸ��);
	FILE* fp = fopen("hello2.txt", "w"); // ���� ����

	for (i = 0; i < 10; i++)
	{
		fputs("Hello World!!!!\n", fp);
	}

	fclose(fp);

	return 0;
}

#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// ���� ����
int main()
{
	int i;

	//FILE* �������̸� = fopen(���ϸ�, ���ϸ��);
	FILE* fp = fopen("hello3.txt", "w"); // ���� ����

	for (i = 0; i < 10; i++)
	{
		fprintf(fp, "Hello %dth Day!!!\n", i + 1);
	}

	fclose(fp);

	return 0;
}

#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS

// ���� ����
int main()
{
	char* str = "Hello, World!!!!";

	//FILE* �������̸� = fopen(���ϸ�, ���ϸ��);
	FILE* fp = fopen("hello4.txt", "w"); // ���� ����

	//fwrite(����, ����ũ��, ����Ƚ��, ��������Ʈ);
	fwrite(str, strlen(str), 1, fp);

	fclose(fp);

	return 0;
}

#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS

// ���� ����
int main()
{
	char buffer[200];

	//FILE* �������̸� = fopen(���ϸ�, ���ϸ��);
	FILE* fp = fopen("hello3.txt", "r"); // ���� �б�

	//���� ���ٸ� ����
	//fgets(����, ����ũ��, ��������Ʈ);
	fgets(buffer, sizeof(buffer), fp);

	printf("%s\n", buffer);

	fclose(fp);

	return 0;
}


#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS

// ���� ����
int main()
{
	char buffer[200] = { 0, }; // �迭 �ʱ�ȭ.

	//FILE* �������̸� = fopen(���ϸ�, ���ϸ��);
	FILE* fp = fopen("hello3.txt", "r"); // ���� �б�

	//fread(����, �б� ũ��, ���� Ƚ��, ��������Ʈ);
	//�б� ���� : �б�Ƚ����ȯ, ���� : ������ �б� Ƚ������ ���� �� ��ȯ
	fread(buffer, sizeof(buffer), 1, fp);

	printf("%s\n", buffer);

	fclose(fp);

	return 0;
}


#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS

// ���� ����
int main()
{
	int size;
	FILE* fp = fopen("hello1.txt", "r");

	//fseek(��������Ʈ, �̵��� ũ��, ������);
	//���� : 1, ���� : 0
	//SEEK_SET : ���� �Ǿպ��� �̵��� ����
	//SEEK_CUR : ���� ��ġ�������� �̵��� ����
	//SEEK_END : ���� �� ���������� �̵��� ����
	fseek(fp, 0, SEEK_END);
	
	size = ftell(fp);
	
	printf("%d\n", size);

	fclose(fp);

	return 0;

}


#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS

// ���� ����
int main()
{
	char* buffer;
	int size, count;
	FILE* fp = fopen("hello2.txt", "r");

	//fseek(��������Ʈ, �̵��� ũ��, ������);
	//���� : 1, ���� : 0
	//SEEK_SET : ���� �Ǿպ��� �̵��� ����
	//SEEK_CUR : ���� ��ġ�������� �̵��� ����
	//SEEK_END : ���� �� ���������� �̵��� ����
	fseek(fp, 0, SEEK_END);

	size = ftell(fp);

	buffer = (char*)malloc(size + 1); // ���ڿ� �������� '\0'����
	memset(buffer, 0, (size + 1)); // ���۰��� 0���� �ʱ�ȭ

	fseek(fp, 0, SEEK_SET); // ��������Ʈ ó������ �̵�
	count = fread(buffer, size, 1, fp);

	printf("%s\nsize : %d, count : %d\n", buffer, size, count);

	fclose(fp);
	free(buffer);

	return 0;
}


#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS

// ���� ����
int main()
{
	char buffer[20] = { 0, };
	
	FILE* fp = fopen("hello5.txt", "r");

	//fseek(��������Ʈ, �̵��� ũ��, ������);
	//���� : 1, ���� : 0
	//SEEK_SET : ���� �Ǿպ��� �̵��� ����
	//SEEK_CUR : ���� ��ġ�������� �̵��� ����
	//SEEK_END : ���� �� ���������� �̵��� ����
	//Hellow World!!!
	fseek(fp, 2, SEEK_SET); // ���������͸� ó������ 2����Ʈ��ŭ �̵�

	fread(buffer, 3, 1, fp); // 3����Ʈ��ŭ ����, fp�� 3����Ʈ��ŭ 
	printf("%s\n", buffer); // ���ۿ� 'llo' �������
	memset(buffer, 0, sizeof(buffer));

	fseek(fp, 3, SEEK_CUR); // ���������� ���� ��ġ���� 3����Ʈ��ũ �̵�
	fread(buffer, 5, 1, fp); // 5����Ʈ��ŭ ����, fp�� 5����Ʈ��ŭ 
	printf("%s\n", buffer); // ���ۿ� 'orld!' �������
	
	fclose(fp);
	
	return 0;
}
*/

#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

// ���� ����
int main()
{
	char buffer[20] = { 0, };
	char *str = "Abcde";

	FILE* fp = fopen("hello5.txt", "r+");

	//fseek(��������Ʈ, �̵��� ũ��, ������);
	//���� : 1, ���� : 0
	//SEEK_SET : ���� �Ǿպ��� �̵��� ����
	//SEEK_CUR : ���� ��ġ�������� �̵��� ����
	//SEEK_END : ���� �� ���������� �̵��� ����
	//Hellow World!!!
	fseek(fp, 6, SEEK_SET); // ���������͸� ó������ 2����Ʈ��ŭ �̵�

	fwrite(str, strlen(str), 1, fp); // 3����Ʈ��ŭ ����, fp�� 3����Ʈ��ŭ 

	rewind(fp);
	fread(buffer, 20, 1, fp);

	printf("%s\n", buffer); // ���ۿ� 'llo' �������
	
	fclose(fp);

	return 0;
}


