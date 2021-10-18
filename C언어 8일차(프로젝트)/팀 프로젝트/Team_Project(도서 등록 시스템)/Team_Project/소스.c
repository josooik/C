#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>

typedef struct _book {
    int book_id; //책 id
    int book_year;  //출판년도
    char book_name[20];  //책이름
    char auther[12];  //저자
    int price;  //가격
    char com_name[20];//출판사이름
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
    members = input_book();  //고객정보 입력

    while (sel != 0)
    {
        system("cls");  //화면 지우기
        printf("<도서 대여관리 프로그램>\n");
        printf("1. 도서 등록\n");
        printf("2. 도서 정보 조회\n");
        printf("3. 전체 도서 목록 조회\n");
        printf("4. 도서 삭제\n");
        printf("0. 종료\n");
        printf("---------------------\n");
        printf("항목을 선택하세요: ");
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
        case 4://book_del 구현 요망
            members = book_del(members);
        }
        _getch();
    }
    return 0;
}

//시작시 실행

int input_book()
{
    int members;
    char line[150];
    char* ptr;
    int word_cnt;

    FILE* c_fp = fopen("book_info.txt", "r");

    if (c_fp == NULL) {
        //char buffer[10];
        printf("book_info.txt 을 새로 생성합니다.\n");
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
//신규 고객정보를 입력받아서 파일에 저장한다.
int new_book(int members)
{
    FILE* c_fp = fopen("book_info.txt", "a+");

    //구조체 배열에 고객 정보를 입력 받음.
    printf("책 번호: %04d\n", members + 1);
    book_info[c_idx].book_id = members + 1;
    printf("책 이름: ");
    scanf("%s", &book_info[c_idx].book_name);
    printf("책 저자: ");
    scanf("%s", &book_info[c_idx].auther);
    printf("책 출판년도: ");
    scanf("%d", &book_info[c_idx].book_year);
    printf("책 가격: ");
    scanf("%d", &book_info[c_idx].price);
    printf("책 출판사 이름: ");
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
        printf("파일이 없습니다. 종료합니다.\n");
        return 0;
    }

    fseek(c_fp, 0, SEEK_SET);
    fprintf(c_fp, "%d", members);
    fclose(c_fp);
}
//책이름으로 책을 검색한다.
int search_book(int members)
{
    //FILE* c_fp = fopen("book_info.txt", "r");

    int i = 0;
    char book_names[20];
    int y = 0;
    printf("찾으시는 도서 이름 :");
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
        printf("일치하는 책이 없습니다.\n");

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

    printf("삭제할 도서를 입력하시오:");
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

                // book_info[j+1].book_id = book_info[j+1].book_id-1;// 밀어넣기 
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
            printf("책:%s가 정상적으로 삭제되었습니다.", books_name);

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
        printf("일치하는 책이 없습니다.\n");


    rewind(c_fp);
    fclose(c_fp);
    return members;

}