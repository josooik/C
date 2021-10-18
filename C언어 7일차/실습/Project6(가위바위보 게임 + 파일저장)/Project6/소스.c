#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <windows.h>

#define _CRT_SECURE_NO_WARNINGS

void setcolor(unsigned short text, unsigned short back)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text | (back << 4));
}

int main(void)
{
	int num = 0;
	int com = 0;
	int count = 0;
	int count1 = 0;
	int win = 0;
	int low = 0;
	int same = 0;
	int i = 0;
	char buffer[11] = { 0, };
	char* save;
	int now = 0;

	char str[] = { '가위', '바위', '보' };


	FILE* fp = fopen("josooik.txt", "r");
	if (fp == NULL)
	{
		FILE* fp = fopen("josooik.txt", "w");
		fclose(fp);
	}
	else if (fp != NULL)
	{
		fseek(fp, 0, SEEK_END);
		now = ftell(fp);
		save = (char*)malloc(now + 1);
		memset(save, 0, (now + 1));

		fseek(fp, 6, SEEK_SET);
		fread(save, 1, 1, fp);
		count = *save - '0';
		printf("%d\n", count);

		for (int i = 0; i < now + 1; i++)
		{
			fseek(fp, now + 1, SEEK_SET);
			fread(save, 1, 1, fp);
		}

	}

	printf("============= 가위바위보 게임 =============\n");
	printf("\n");

	printf("가위 바위 보  횟수 입력 : ");
	scanf_s("%d", &count1);
	printf("\n");

	//FILE* fp = fopen("josooik.txt", "a+");

	while (i < count1)
	{
		srand((unsigned)time(NULL));
		com = rand() % 3 + 1;

		printf("%d번째 가위(1), 바위(2), 보(3), 종료(0) 중에서 숫자를 입력하세요.\n", i + 1);
		printf("시작 : 숫자입력 후 Enter >> ");
		scanf_s("%d", &num);

		printf("\n");
	
		if (num == 0)
		{
			break;
		}
		
		if (num > 0 && num < 4)
		{

			if (num == 1 && com == 3 || num == 2 && com == 1 || num == 3 && com == 2)
			{
				printf("컴퓨터 : %d <--> %d : 당신\n", com, num);
				setcolor(1, 0);
				printf("결과 : 당신이 이겼습니다.\n");
				setcolor(7, 0);
				printf("\n");
				win += 1;
			}

			else if (num == 1 && com == 2 || num == 2 && com == 3 || num == 3 && com == 1)
			{
				printf("컴퓨터 : %d <--> %d : 당신\n", com, num);
				setcolor(4, 0);
				printf("결과 : 당신이 졌습니다.\n");
				setcolor(7, 0);
				printf("\n");
				low += 1;
			}

			else if (num == com)
			{
				printf("컴퓨터 : %d <--> %d : 당신\n", com, num);
				setcolor(2, 0);
				printf("결과 : 비겼습니다.\n");
				setcolor(7, 0);
				printf("\n");
				same += 1;
			}
		}
		i++;
	}


	//FILE* fp1 = fopen("josooik.txt", "r+");

	printf("게임을 종료합니다.\n");

	printf("\n");

	printf("게임 횟수 : %02d회 | 승리 : %02d | 패배 : %02d | 비김 : %02d\n", count, win, low, same);

	FILE* fp = fopen("josooik.txt", "r+");
	if (fp == NULL)
	{
		FILE* fp = fopen("josooik.txt", "w");
		count++;
		fprintf(fp, "count %d\n", count);
		fprintf(fp, "%02d. 게임 진행횟수 : %02d회 | 승리 : %02d | 패배 : %02d | 비김 : %02d\n", count, i, win, low, same);
		fclose(fp);
	}

	else if (fp != NULL)
	{
		count++;
		fseek(fp, 0, SEEK_SET);
		fprintf(fp, "count %d\n", count);
		fclose(fp);

		FILE* fp = fopen("josooik.txt", "a");
		fseek(fp, 0, SEEK_END);
		fprintf(fp, "%02d. 게임 진행횟수 : %02d회 | 승리 : %02d | 패배 : %02d | 비김 : %02d\n", count, i, win, low, same);
		fclose(fp);
	}
	
	//fprintf(fp, "count %d\n", count++);

	//fprintf(fp, "%2d. 게임 횟수 : %02d회 | 승리 : %02d | 패배 : %02d | 비김 : %02d\n", i, win, low, same);


	//fseek(fp1, 6, SEEK_SET);
	//fscanf(fp1, "%d", buffer, &j);
	//fwrite(buffer, strlen(buffer), j, fp1);

	//fclose(fp);
	//fclose(fp1);

	return 0;
}