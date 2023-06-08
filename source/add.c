#include "../include/list.h"
#include "../include/menu.h"


void insert_name(char *name){
    //scanf("\n%s",name);
    fflush(stdin);
    scanf("\n%s",name);
    // fgets(name,sizeof(name),stdin);
}


void insert_numberphone(char *number_phone){
    fflush(stdin);
    scanf("\n%s",number_phone);
    //fgets(List->number_phone,sizeof(List->number_phone),stdin);
}


void insert_mail(char *mail){
    scanf("\n%s",mail);
    //fgets(List->mail, sizeof(List->mail), stdin);
}


void add_List(struct info List[], int number_list){
    for (int i=0;i<number_list;i++){
        printf("Number: %d",i+1);
        //printf("%x",List[i]);
        insert_name(List[i].name);
        
        insert_numberphone(List[i].number_phone);
        insert_mail(List[i].mail);
    }
}


void add_new_contact_info(char data_address[],struct info List[],int number_list){
    char temp[100];
    FILE* file =fopen(data_address,"r");
    if(file==NULL){
        printf("Cannot open file");
        return;
    }
    for(int i=0;i<number_list;i++){
        fgets(temp,100,file);
        sscanf(temp,"%[^,],%[^,],%[^,]",List[i].name,List[i].number_phone,List[i].mail);
    }
    fclose(file);
}