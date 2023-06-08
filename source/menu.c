
#include "../include/menu.h"
#include "../include/list.h"
#include "../include/search.h"
#include "../include/edit.h"

void display_menu(){
    printf("\n\n\t\t**** Welcome to C Practice ****\n");
    printf("\t\t\tMain menu\n");
    printf("\t\t-----------------------------------\n");
    printf("\t\t1. Add a new contact info\n");
    printf("\t\t2. List all existing contacts\n");
    printf("\t\t3. Search a contact info (N/A)\n");
    printf("\t\t4. Edit a contact info (N/A)\n");
    printf("\t\t5. Delete a contact\n");
    printf("\t\t6. Exit\n");
    printf("\t\t-----------------------------------\n");
}

void Menu_1(struct info List[],int number_list){
    char database_address[]="Database_information.csv";
    add_new_contact_info(database_address,List,number_list);
}

void Menu_2(struct info List[], int number_list){
    show_list(List,number_list);
}

void Menu_3(struct info List[], int number_list){
    search(List,number_list);
}

void Menu_4(struct info List[],int number_list){
    Edit_information(List,number_list);
}

void Menu_5(struct info List[],int number_list){
    
}