#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>

//구현한 내용
/*
1. 구조체 설계 (프로그램 요구사항)
2. 고객 정보 읽어오기 (파일 입력)
3. 신규 고객 등록
4. 고객 조회
6. 전체 고객 조회
*/

//고객정보 구조체
typedef struct _customer {
    int id;  //고객번호
    char name[20];  //고객이름
    char phone[12];  //전화번호
    char address[50];  //주소
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

    members = input_customer();  //고객정보 입력

    while (sel != 0)
    {
        system("cls");  //화면 지우기
        printf("<도서 대여관리 프로그램>\n");
        printf("1. 신규 고객 등록\n");
        printf("2. 고객 정보 조회\n");
        printf("3. 전체 고객 정보 조회\n");
        printf("0. 종료\n");
        printf("---------------------\n");
        printf("항목을 선택하세요: ");
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
                printf("일치하는 고객이 없습니다.\n");
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

//전화번호로 고객정보를 검색한다.
int search_customer()
{
    int i;
    char phone[30];
    printf("전화번호: ");
    scanf("%s", phone);

    for (i = 0; i < c_idx; i++)
    {
        if (strcmp(phone, customer_info[i].phone) == 0)
            return i;
    }
    return -1;
}

//신규 고객정보를 입력받아서 파일에 저장한다.
int new_customer(int members)
{
    FILE* c_fp = fopen("customer_info.txt", "a");

    //구조체 배열에 고객 정보를 입력 받음.
    printf("고객 번호: %04d\n", members + 1);
    customer_info[c_idx].id = members + 1;
    printf("고객 이름: ");
    scanf("%s", &customer_info[c_idx].name);
    printf("전화번호: ");
    scanf("%s", &customer_info[c_idx].phone);
    printf("주소: ");
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

//고객정보를 파일에서 입력받는다.
int input_customer()
{
    int members;
    char line[150];
    char* ptr;
    int word_cnt;

    FILE* c_fp = fopen("customer_info.txt", "r");

    if (c_fp == NULL) {
        char buffer[10];
        printf("customer_info.txt 을 새로 생성합니다.\n");
        c_fp = fopen("customer_info.txt", "w");
        fputs("members 0", c_fp);
        fclose(c_fp);
        return 0;
    }

    fseek(c_fp, 8, SEEK_SET);
    fscanf(c_fp, "%d", &members);
    rewind(c_fp);
    //printf("members : %d\n", members);

    //고객정보 입력
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
        printf("파일이 없습니다. 종료합니다.\n");
        return 0;
    }

    fseek(c_fp, 8, SEEK_SET);
    fprintf(c_fp, "%d", members);
    fclose(c_fp);
}