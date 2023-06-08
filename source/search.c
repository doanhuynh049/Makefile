#include "../include/list.h"
#include "../include/search.h"

void search_number_list(struct info List[], int number_search){
    printf("%d: ",number_search);
    show(List[number_search-1]);
}
void find_info_name(struct info List [], int number_list,char *name_ser){
    for(int i=0;i<number_list;i++){
        if(strcmp(name_ser,List[i].name)==0){
            output_name(List[i].name);
            output_Number_Phone(List[i].number_phone);
            output_Mail(List[i].mail);
        }
    }
}
void search_Name(struct info List[], int number_list ){
    char *name_ser;
    printf("\nEnter the Name to Search: ");
    scanf("%s",name_ser);

    for(int i=0;i<number_list;i++){
        char *temp=List[i].name;
        // int value=strcmp(name_ser,temp);
        //printf("%d",value);
        if(strcmp(name_ser,temp)==0){
            output_name(List[i].name);
            output_Number_Phone(List[i].number_phone);
            output_Mail(List[i].mail);
        }
    }
}

void display_search(){
    printf("\n\n\tChoose search type");
    printf("\n\t1. Search for Number");
    printf("\n\t2. Search for Name");
    printf("\n\t------------------------\n\tChoose type to Search: ");

}

void search(struct info List[],int number_list){
    int choose_search;
    display_search();
    scanf("%d",&choose_search);
    while((choose_search > 3) && (choose_search <= 0)){
        printf("\nPlease Try again: ");
        scanf("%d",&choose_search);
    }
    if(choose_search == 1){
        int number_search;
        printf("\nEnter the number in List to Search: ");
        scanf("%d",&number_search);

        printf("\nSearch Result List Number:\n\t---> ");
        search_number_list(List,number_search);
    }
    if(choose_search == 2){
        search_Name(List,number_list);
    }
}
