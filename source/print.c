
#include "../include/list.h"
void output_name(char*name){
    printf("%s",name);
}

void output_Number_Phone(char *number_phone){
    printf("   \t\t%s",number_phone);
}

void output_Mail(char *mail){
    printf("\t%s",mail);
}
void show(struct info List){
    output_name(List.name);
    output_Number_Phone(List.number_phone);
    output_Mail(List.mail);
}

void show_list(struct info List[], int number_list){
    printf("\n\t\t\tDISPLAY LIST\n\t\t----------------------------------");
    for (int i=0;i<number_list;i++){
        printf("\n%d: ",i+1);
        output_name(List[i].name);
        output_Number_Phone(List[i].number_phone);
        output_Mail(List[i].mail);
    }
}