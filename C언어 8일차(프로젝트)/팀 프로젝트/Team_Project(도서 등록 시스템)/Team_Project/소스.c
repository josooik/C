#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>

typedef struct _book {
    int book_id; //å id
    int book_year;  //���ǳ⵵
    char book_name[20];  //å�̸�
    char auther[12];  //����
    int price;  //����
    char com_name[20];//���ǻ��̸�
} BOOK;

BOOK book_info[200] = { 0, };
int c_idx = 0;


int input_book();
int new_book(int members);
void update_book_count(int members);
int search_book(int members);
void print_book(int members);
int book_del(int members);


int main(void)
{
    int i = 0, sel = 1, idx = 0;
    int members;
    char book_names[1000] = { 0, };
    members = input_book();  //������ �Է�

    while (sel != 0)
    {
        system("cls");  //ȭ�� �����
        printf("<���� �뿩���� ���α׷�>\n");
        printf("1. ���� ���\n");
        printf("2. ���� ���� ��ȸ\n");
        printf("3. ��ü ���� ��� ��ȸ\n");
        printf("4. ���� ����\n");
        printf("0. ����\n");
        printf("---------------------\n");
        printf("�׸��� �����ϼ���: ");
        scanf("%d", &sel);

        switch (sel)
        {
        case 1:
            members = new_book(members);
            update_book_count(members);
            break;
        case 2:
            search_book(members);
            break;
        case 3:
            print_book(members);
            break;
        case 4://book_del ���� ���
            members = book_del(members);
        }
        _getch();
    }
    return 0;
}

//���۽� ����

int input_book()
{
    int members;
    char line[150];
    char* ptr;
    int word_cnt;

    FILE* c_fp = fopen("book_info.txt", "r");

    if (c_fp == NULL) {
        //char buffer[10];
        printf("book_info.txt �� ���� �����մϴ�.\n");
        c_fp = fopen("book_info.txt", "w");
        fputs("0", c_fp);
        fclose(c_fp);
        return 0;
    }

    fseek(c_fp, 0, SEEK_SET);
    fscanf(c_fp, "%d", &members);

    rewind(c_fp);


    fseek(c_fp, 1, SEEK_SET);
    for (int j = 0; j < members; j++)
    {
        fscanf(c_fp, "%d %s %s %d %d %s"
            , &book_info[j].book_id
            , book_info[j].book_name
            , book_info[j].auther
            , &book_info[j].book_year
            , &book_info[j].price
            , book_info[j].com_name);
    }

    c_idx++;
    fclose(c_fp);
    return members;

}
//�ű� �������� �Է¹޾Ƽ� ���Ͽ� �����Ѵ�.
int new_book(int members)
{
    FILE* c_fp = fopen("book_info.txt", "a+");

    //����ü �迭�� �� ������ �Է� ����.
    printf("å ��ȣ: %04d\n", members + 1);
    book_info[c_idx].book_id = members + 1;
    printf("å �̸�: ");
    scanf("%s", &book_info[c_idx].book_name);
    printf("å ����: ");
    scanf("%s", &book_info[c_idx].auther);
    printf("å ���ǳ⵵: ");
    scanf("%d", &book_info[c_idx].book_year);
    printf("å ����: ");
    scanf("%d", &book_info[c_idx].price);
    printf("å ���ǻ� �̸�: ");
    scanf("%s", &book_info[c_idx].com_name);


    fprintf(c_fp, "\n%d %s %s %d %d %s"
        , book_info[c_idx].book_id
        , book_info[c_idx].book_name
        , book_info[c_idx].auther
        , book_info[c_idx].book_year
        , book_info[c_idx].price
        , book_info[c_idx].com_name
    );

    c_idx++;
    fclose(c_fp);
    return (members + 1);
}

void update_book_count(int members)
{
    FILE* c_fp = fopen("book_info.txt", "r+");

    if (c_fp == NULL) {
        printf("������ �����ϴ�. �����մϴ�.\n");
        return 0;
    }

    fseek(c_fp, 0, SEEK_SET);
    fprintf(c_fp, "%d", members);
    fclose(c_fp);
}
//å�̸����� å�� �˻��Ѵ�.
int search_book(int members)
{
    //FILE* c_fp = fopen("book_info.txt", "r");

    int i = 0;
    char book_names[20];
    int y = 0;
    printf("ã���ô� ���� �̸� :");
    scanf("%s", book_names);

    for (i = 0; i < members; i++)
    {
        if (strcmp(book_names, book_info[i].book_name) == 0)
        {
            printf("%d %s %s %d %d %s\n"
                , book_info[i].book_id
                , book_info[i].book_name
                , book_info[i].auther
                , book_info[i].book_year
                , book_info[i].price
                , book_info[i].com_name);
        }
        else
        {
            y++;
        }
    }
    if (y == members)
        printf("��ġ�ϴ� å�� �����ϴ�.\n");

    //fclose(c_fp);
    return 0;
}

void print_book(int members)
{
    FILE* c_fp = fopen("book_info.txt", "r");
    fseek(c_fp, 1, SEEK_SET);
    for (int j = 0; j < members; j++)
    {
        fscanf(c_fp, "%d %s %s %d %d %s"
            , &book_info[j].book_id
            , book_info[j].book_name
            , book_info[j].auther
            , &book_info[j].book_year
            , &book_info[j].price
            , book_info[j].com_name);
    }

    for (int i = 0; i < members; i++)
    {
        printf("%d %s %s %d %d %s\n"
            , book_info[i].book_id
            , book_info[i].book_name
            , book_info[i].auther
            , book_info[i].book_year
            , book_info[i].price
            , book_info[i].com_name);
    }

}


int book_del(int members)
{
    char books_name[20];

    printf("������ ������ �Է��Ͻÿ�:");
    scanf("%s", books_name);
    int y = 0;
    FILE* c_fp = fopen("book_info.txt", "w+");
    fprintf(c_fp, "%d", members);
    for (int i = 0; i < members; i++)
    {
        if (strcmp(books_name, book_info[i].book_name) == 0)
        {
            for (int j = i; j < members - 1; j++)
            {

                // book_info[j+1].book_id = book_info[j+1].book_id-1;// �о�ֱ� 
                strcpy(book_info[j].auther, book_info[j + 1].auther);
                strcpy(book_info[j].book_name, book_info[j + 1].book_name);
                book_info[j].book_year = book_info[j + 1].book_year;
                strcpy(book_info[j].com_name, book_info[j + 1].com_name);
                book_info[j].price = book_info[j + 1].price;
                fprintf(c_fp, "\n%d %s %s %d %d %s"
                    , book_info[j].book_id
                    , book_info[j].book_name
                    , book_info[j].auther
                    , book_info[j].book_year
                    , book_info[j].price
                    , book_info[j].com_name
                );
            }

            members--;
            fseek(c_fp, 0, SEEK_SET);
            fprintf(c_fp, "%d", members);
            printf("å:%s�� ���������� �����Ǿ����ϴ�.", books_name);

            break;
        }
        else
        {
            fprintf(c_fp, "\n%d %s %s %d %d %s"
                , book_info[i].book_id
                , book_info[i].book_name
                , book_info[i].auther
                , book_info[i].book_year
                , book_info[i].price
                , book_info[i].com_name);
            y++;
        }

    }

    if (y == members)
        printf("��ġ�ϴ� å�� �����ϴ�.\n");


    rewind(c_fp);
    fclose(c_fp);
    return members;

}