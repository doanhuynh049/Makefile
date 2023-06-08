
#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
#include <string.h>
#ifndef LIST_H
#define LIST_H

// create information struct for User
struct info{
    char name[50];
    char number_phone[15];
    char mail[100];
};

// Functions to add information 
void insert_name(char* name);
void insert_numberphone(char *number_phone);
void insert_mail(char *mail);
void add_List(struct info List[], int number_list);
void add_new_contact_info(char data_address[],struct info List[],int number_list);

//function to print information
void output_name(char *name);
void output_Number_Phone(char *number_phone);
void output_Mail(char *mail);
void show(struct info List);
void show_list(struct info List[], int number_list);


#endif