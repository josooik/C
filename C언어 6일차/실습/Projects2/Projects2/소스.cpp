#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int num = 0;
	int com = 0;
	char strs[] = {'가위', '바위', '보'};

	printf("============= 가위바위보 게임 =============\n");
	printf("가위(1), 바위(2), 보(3), 종료(0) 중에서 숫자를 입력하세요.\n");
	printf("시작 : 숫자입력 후 Enter >> ");
	scanf_s("%d", &num);
	printf("\n");

	while (num != 0)
	{
		srand(time(NULL));
		com = rand() % 3 + 1;

		printf("가위(1), 바위(2), 보(3), 종료(0) 중에서 숫자를 입력하세요.\n");
		printf("시작 : 숫자입력 후 Enter >> ");
		scanf_s("%d", &num);

		printf("\n");

		if (num > 0 && num < 4)
		{
			if (num > com)
			{
				printf("컴퓨터 : %d <--> %d : 당신\n", com, num);
				printf("결과 : 당신이 이겼습니다.\n");
				printf("\n");
			}

			else if (num < com)
			{
				printf("컴퓨터 : %d <--> %d : 당신\n", com, num);
				printf("결과 : 당신이 졌습니다.\n");
				printf("\n");
			}

			else if (num == com)
			{
				printf("컴퓨터 : %d <--> %d : 당신\n", com, num);
				printf("결과 : 비겼습니다.\n");
				printf("\n");
			}
		}
		
	}

	printf("\n");
	printf("게임을 종료합니다.\n");
	printf("\n");

	return 0;
}