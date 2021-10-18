/* 

// * 파일 입출력 사용법

// - FILE* 포인터 이름 = fopen(파일명, 파일이름);
// - 성공하면(파일을 제대로 읽어 들이면) 포인터 반환
// - 실패하면 NULL 반환
FILE* fopen(const char* filename, const char* mode);

// - 파일에 내용을 작성
// - fprintf(파일 포인터, 서식, 값1, 값2,....)
// - 성공하면 쓴 문자열의 길이 반환, 실패하면 음수를 반환
int fprintf(FILE* const _Stream, char const* c
onst_format, ...)

// fclose(파일포인터)
// 성공하면 0 반환 실패하면 EOF(-1) 반환
int fclose(FILE* _Stream);

* 비쥬얼 스튜디오 옵션 설정
1. #define _CRT_SECURE_NO_WARNINGS 추가
2. 프로젝트 -> 속성 -> 일반 -> (C / C++) -> 일반 -> SDL검사 -> 아니오
*/

/*
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// 파일 쓰기
int main()
{

	//FILE* 포인터이름 = fopen(파일명, 파일모드);
	FILE * fp = fopen("hello.txt", "w"); // 파일 쓰기
		
	fprintf(fp, "%s %d\n", "Hello", 2021);

	fclose(fp);

	return 0;
}

#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// 파일 출력
int main()
{

	//FILE* 포인터이름 = fopen(파일명, 파일모드);
	//FILE* fp = fopen("hello.txt", "w");

	fprintf(stdout, "%s %d\n", "Hello1", 2021); // 도스창 출력

	//fclose(fp);

	return 0;
}

#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// 파일 읽어오기
int main()
{
	char str[10];
	int num;

	//FILE* 포인터이름 = fopen(파일명, 파일모드);
	FILE* fp = fopen("hello.txt", "r"); // 파일 읽기

	fscanf(fp, "%s %d\n", str, &num);
	printf("%s %d\n", str, num);

	fclose(fp);

	return 0;
}

#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// 파일 생성
int main()
{
	//FILE* 포인터이름 = fopen(파일명, 파일모드);
	FILE* fp = fopen("hello1.txt", "w"); // 파일 쓰기

	fputs("Hellow World!\n", fp);
	fputs("Good\n", fp);

	fclose(fp);

	return 0;
}

#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// 파일 생성
int main()
{
	int i;

	//FILE* 포인터이름 = fopen(파일명, 파일모드);
	FILE* fp = fopen("hello2.txt", "w"); // 파일 쓰기

	for (i = 0; i < 10; i++)
	{
		fputs("Hello World!!!!\n", fp);
	}

	fclose(fp);

	return 0;
}

#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// 파일 생성
int main()
{
	int i;

	//FILE* 포인터이름 = fopen(파일명, 파일모드);
	FILE* fp = fopen("hello3.txt", "w"); // 파일 쓰기

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

// 파일 생성
int main()
{
	char* str = "Hello, World!!!!";

	//FILE* 포인터이름 = fopen(파일명, 파일모드);
	FILE* fp = fopen("hello4.txt", "w"); // 파일 쓰기

	//fwrite(버퍼, 쓰기크기, 쓰기횟수, 파일포인트);
	fwrite(str, strlen(str), 1, fp);

	fclose(fp);

	return 0;
}

#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS

// 파일 생성
int main()
{
	char buffer[200];

	//FILE* 포인터이름 = fopen(파일명, 파일모드);
	FILE* fp = fopen("hello3.txt", "r"); // 파일 읽기

	//파일 한줄만 읽음
	//fgets(버퍼, 버퍼크기, 파일포인트);
	fgets(buffer, sizeof(buffer), fp);

	printf("%s\n", buffer);

	fclose(fp);

	return 0;
}


#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS

// 파일 생성
int main()
{
	char buffer[200] = { 0, }; // 배열 초기화.

	//FILE* 포인터이름 = fopen(파일명, 파일모드);
	FILE* fp = fopen("hello3.txt", "r"); // 파일 읽기

	//fread(버퍼, 읽기 크기, 읽은 횟수, 파일포인트);
	//읽기 성공 : 읽기횟수반환, 실패 : 지정된 읽기 횟수보다 작은 값 반환
	fread(buffer, sizeof(buffer), 1, fp);

	printf("%s\n", buffer);

	fclose(fp);

	return 0;
}


#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS

// 파일 생성
int main()
{
	int size;
	FILE* fp = fopen("hello1.txt", "r");

	//fseek(파일포인트, 이동할 크기, 기준점);
	//성공 : 1, 실패 : 0
	//SEEK_SET : 파일 맨앞부터 이동을 시작
	//SEEK_CUR : 현재 위치에서부터 이동을 시작
	//SEEK_END : 파일 맨 끝에서부터 이동을 시작
	fseek(fp, 0, SEEK_END);
	
	size = ftell(fp);
	
	printf("%d\n", size);

	fclose(fp);

	return 0;

}


#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS

// 파일 생성
int main()
{
	char* buffer;
	int size, count;
	FILE* fp = fopen("hello2.txt", "r");

	//fseek(파일포인트, 이동할 크기, 기준점);
	//성공 : 1, 실패 : 0
	//SEEK_SET : 파일 맨앞부터 이동을 시작
	//SEEK_CUR : 현재 위치에서부터 이동을 시작
	//SEEK_END : 파일 맨 끝에서부터 이동을 시작
	fseek(fp, 0, SEEK_END);

	size = ftell(fp);

	buffer = (char*)malloc(size + 1); // 문자열 마지막에 '\0'포함
	memset(buffer, 0, (size + 1)); // 버퍼값을 0으로 초기화

	fseek(fp, 0, SEEK_SET); // 파일포인트 처음으로 이동
	count = fread(buffer, size, 1, fp);

	printf("%s\nsize : %d, count : %d\n", buffer, size, count);

	fclose(fp);
	free(buffer);

	return 0;
}


#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS

// 파일 생성
int main()
{
	char buffer[20] = { 0, };
	
	FILE* fp = fopen("hello5.txt", "r");

	//fseek(파일포인트, 이동할 크기, 기준점);
	//성공 : 1, 실패 : 0
	//SEEK_SET : 파일 맨앞부터 이동을 시작
	//SEEK_CUR : 현재 위치에서부터 이동을 시작
	//SEEK_END : 파일 맨 끝에서부터 이동을 시작
	//Hellow World!!!
	fseek(fp, 2, SEEK_SET); // 파일포인터를 처음에서 2바이트만큼 이동

	fread(buffer, 3, 1, fp); // 3바이트만큼 읽음, fp가 3바이트만큼 
	printf("%s\n", buffer); // 버퍼에 'llo' 들어있음
	memset(buffer, 0, sizeof(buffer));

	fseek(fp, 3, SEEK_CUR); // 파일포인터 현재 위치에서 3바이트만크 이동
	fread(buffer, 5, 1, fp); // 5바이트만큼 읽음, fp가 5바이트만큼 
	printf("%s\n", buffer); // 버퍼에 'orld!' 들어있음
	
	fclose(fp);
	
	return 0;
}
*/

#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

// 파일 생성
int main()
{
	char buffer[20] = { 0, };
	char *str = "Abcde";

	FILE* fp = fopen("hello5.txt", "r+");

	//fseek(파일포인트, 이동할 크기, 기준점);
	//성공 : 1, 실패 : 0
	//SEEK_SET : 파일 맨앞부터 이동을 시작
	//SEEK_CUR : 현재 위치에서부터 이동을 시작
	//SEEK_END : 파일 맨 끝에서부터 이동을 시작
	//Hellow World!!!
	fseek(fp, 6, SEEK_SET); // 파일포인터를 처음에서 2바이트만큼 이동

	fwrite(str, strlen(str), 1, fp); // 3바이트만큼 읽음, fp가 3바이트만큼 

	rewind(fp);
	fread(buffer, 20, 1, fp);

	printf("%s\n", buffer); // 버퍼에 'llo' 들어있음
	
	fclose(fp);

	return 0;
}


