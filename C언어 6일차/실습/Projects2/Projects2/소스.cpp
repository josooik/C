#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int num = 0;
	int com = 0;
	char strs[] = {'����', '����', '��'};

	printf("============= ���������� ���� =============\n");
	printf("����(1), ����(2), ��(3), ����(0) �߿��� ���ڸ� �Է��ϼ���.\n");
	printf("���� : �����Է� �� Enter >> ");
	scanf_s("%d", &num);
	printf("\n");

	while (num != 0)
	{
		srand(time(NULL));
		com = rand() % 3 + 1;

		printf("����(1), ����(2), ��(3), ����(0) �߿��� ���ڸ� �Է��ϼ���.\n");
		printf("���� : �����Է� �� Enter >> ");
		scanf_s("%d", &num);

		printf("\n");

		if (num > 0 && num < 4)
		{
			if (num > com)
			{
				printf("��ǻ�� : %d <--> %d : ���\n", com, num);
				printf("��� : ����� �̰���ϴ�.\n");
				printf("\n");
			}

			else if (num < com)
			{
				printf("��ǻ�� : %d <--> %d : ���\n", com, num);
				printf("��� : ����� �����ϴ�.\n");
				printf("\n");
			}

			else if (num == com)
			{
				printf("��ǻ�� : %d <--> %d : ���\n", com, num);
				printf("��� : �����ϴ�.\n");
				printf("\n");
			}
		}
		
	}

	printf("\n");
	printf("������ �����մϴ�.\n");
	printf("\n");

	return 0;
}