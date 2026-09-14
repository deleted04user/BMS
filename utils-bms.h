#ifndef UTILS_BMS_H
#define UTILS_BMS_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>

typedef struct creation_date {
    int day;
    int month;
    int year;
} c_date;

typedef struct account {
    int id_account;
    int id_client;
    int balance;
    c_date date;
    struct {
        c_date date_op;
        int op;
    };
    struct account *next_account;
} account;

typedef struct client {
    char last_name[50];
    char first_name[50];
    char phone_num[12];
    char profession[50];
    int id_client;
    struct client *next_client;
} client;

int rand_ms(void);
int generate_id(void);
void center(const char *text, int cols);
void p_exit(int seconds);
void terminal_size(int *cols);
void actual_time(c_date *date);
void add_client(client **first_client);
void *search_client_id(client *first_client, int id);
void *search_client_last_name(client *first_client, const char *last_name);
void delete_last_client(client **head);
void free_all(client **client_start, account **account_start);
void delete_client(client **head_client);
void menu(int menu_number);
void modify_client(client **first_client, int id, int choice);
void read_clients(client **first_client);
void clients_list(client *first_client);
void save_client(client *head);
void save_accounts(account *account_start);
void delete_last_account(account **head);
void read_accounts(account **account_start);
void add_account(account **head_account, client *head_client);
void consultation(account *head_account, client *head_client, int client_id, int cols);
void withdraw(account **head);
void transfer(account **head);
void delete_account(account **head);

#endif
