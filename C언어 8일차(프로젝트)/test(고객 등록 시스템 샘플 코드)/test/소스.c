#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>

//������ ����
/*
1. ����ü ���� (���α׷� �䱸����)
2. �� ���� �о���� (���� �Է�)
3. �ű� �� ���
4. �� ��ȸ
6. ��ü �� ��ȸ
*/

//������ ����ü
typedef struct _customer {
    int id;  //����ȣ
    char name[20];  //���̸�
    char phone[12];  //��ȭ��ȣ
    char address[50];  //�ּ�
} CUSTOMER;



int input_customer();
int new_customer(int members);
int search_customer();
void update_member_count(int members);

CUSTOMER customer_info[200];
int c_idx = 0;

int main(void)
{
    int i, sel = 1, idx;
    int members;

    members = input_customer();  //������ �Է�

    while (sel != 0)
    {
        system("cls");  //ȭ�� �����
        printf("<���� �뿩���� ���α׷�>\n");
        printf("1. �ű� �� ���\n");
        printf("2. �� ���� ��ȸ\n");
        printf("3. ��ü �� ���� ��ȸ\n");
        printf("0. ����\n");
        printf("---------------------\n");
        printf("�׸��� �����ϼ���: ");
        scanf("%d", &sel);

        switch (sel)
        {
        case 1:
            members = new_customer(members);
            update_member_count(members);
            break;
        case 2:
            idx = search_customer();
            if (idx == -1)
                printf("��ġ�ϴ� ���� �����ϴ�.\n");
            else
            {
                printf("%d, %s, %s, %s\n"
                    , customer_info[idx].id
                    , customer_info[idx].name
                    , customer_info[idx].phone
                    , customer_info[idx].address);
            }
            break;
        case 3:
            for (i = 2; i < c_idx; i++)
            {
                printf("%d, %s, %s, %s\n"
                    , customer_info[i].id
                    , customer_info[i].name
                    , customer_info[i].phone
                    , customer_info[i].address);
            }
            break;
        }
        _getch();
    }
    return 0;
}

//��ȭ��ȣ�� �������� �˻��Ѵ�.
int search_customer()
{
    int i;
    char phone[30];
    printf("��ȭ��ȣ: ");
    scanf("%s", phone);

    for (i = 0; i < c_idx; i++)
    {
        if (strcmp(phone, customer_info[i].phone) == 0)
            return i;
    }
    return -1;
}

//�ű� �������� �Է¹޾Ƽ� ���Ͽ� �����Ѵ�.
int new_customer(int members)
{
    FILE* c_fp = fopen("customer_info.txt", "a");

    //����ü �迭�� �� ������ �Է� ����.
    printf("�� ��ȣ: %04d\n", members + 1);
    customer_info[c_idx].id = members + 1;
    printf("�� �̸�: ");
    scanf("%s", &customer_info[c_idx].name);
    printf("��ȭ��ȣ: ");
    scanf("%s", &customer_info[c_idx].phone);
    printf("�ּ�: ");
    scanf("%s", &customer_info[c_idx].address);

    fprintf(c_fp, "\n%d,%s,%s,%s"
        , customer_info[c_idx].id
        , customer_info[c_idx].name
        , customer_info[c_idx].phone
        , customer_info[c_idx].address);

    c_idx++;
    return (members + 1);
    fclose(c_fp);
}

//�������� ���Ͽ��� �Է¹޴´�.
int input_customer()
{
    int members;
    char line[150];
    char* ptr;
    int word_cnt;

    FILE* c_fp = fopen("customer_info.txt", "r");

    if (c_fp == NULL) {
        char buffer[10];
        printf("customer_info.txt �� ���� �����մϴ�.\n");
        c_fp = fopen("customer_info.txt", "w");
        fputs("members 0", c_fp);
        fclose(c_fp);
        return 0;
    }

    fseek(c_fp, 8, SEEK_SET);
    fscanf(c_fp, "%d", &members);
    rewind(c_fp);
    //printf("members : %d\n", members);

    //������ �Է�
    while (fscanf(c_fp, "%s", line) > 0)
    {
        word_cnt = 0;
        //printf("%s\n", line);
        ptr = strtok(line, ",");
        while (ptr != NULL)
        {
            word_cnt++;
            switch (word_cnt)
            {
            case 1:  //int id
                customer_info[c_idx].id = atoi(ptr);
                break;
            case 2: //char name
                strcpy(customer_info[c_idx].name, ptr);
                break;
            case 3:  //char phone
                strcpy(customer_info[c_idx].phone, ptr);
                break;
            case 4:  //char address
                strcpy(customer_info[c_idx].address, ptr);
                break;
            }
            //printf("%s\n", ptr);
            ptr = strtok(NULL, ",");
        }
        c_idx++;
    }

    fclose(c_fp);
    return members;
}
void update_member_count(int members)
{
    FILE* c_fp = fopen("customer_info.txt", "r+");

    if (c_fp == NULL) {
        printf("������ �����ϴ�. �����մϴ�.\n");
        return 0;
    }

    fseek(c_fp, 8, SEEK_SET);
    fprintf(c_fp, "%d", members);
    fclose(c_fp);
}