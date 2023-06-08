#include "../include/list.h"
#include "../include/edit.h"
#include "../include/search.h"

void Edit_Name(struct info List[],int location_edit){
    char name_edit[50];
    printf("\nEnter New Name to Edit %d: ",location_edit);
    fflush(stdin);
    //scanf("%s",List[location_edit].name);
    //insert_name(List[location_edit].name);
    fgets(List[location_edit].name,sizeof(List[location_edit].name),stdin);
}

void Edit_Number_phone(struct info List[],int location_edit){
    char phone_edit[15];
    printf("\nEnter New Name to Edit: ");
    fflush(stdin);
    insert_name(List[location_edit].number_phone);
}

void Edit_mail(struct info List[],int location_edit){
    char mail_edit[100];
    printf("\nEnter New Name to Edit: ");
    fflush(stdin);
    insert_name(List[location_edit].mail);
}

void Display_edit(){
    printf("\n\n\t   Choose information to edit");
    printf("\n\t1. Edit information Name");
    printf("\n\t2. Edit information Number Phone");
    printf("\n\t3. Edit information Email");
    printf("\n\t------------------------\n\tChoose a type of information to Edit: ");
}
int select_number_edit(int number_list){
    int location_edit;
    printf("\nEnter the number location in List to edit:");
            scanf("%d",&location_edit);
            while (location_edit>number_list){
                printf("please try again");
                scanf("%d",&location_edit);
            }
    return location_edit;
}
void Edit_information(struct info List[],int number_list){
    int value_choose;
    int location_edit;
    Display_edit();
    scanf("%d",&value_choose);
    
    switch(value_choose){
        case 1:
            location_edit=select_number_edit(number_list);
            printf("information before edit: ");
            show(List[location_edit-1]);

            Edit_Name(List,location_edit-1);

            printf("\nInformation after edit: ");
            show(List[location_edit-1]);
            break;

        case 2:
            location_edit=select_number_edit(number_list);
        
            printf("information before edit Number Phone: ");
            show(List[location_edit-1]);

            Edit_Number_phone(List,location_edit-1);

            printf("\nInformation after edit Number Phone: ");
            show(List[location_edit-1]);
            break;

        case 3:
            location_edit=select_number_edit(number_list);
        
            printf("information before edit mail: ");
            show(List[location_edit-1]);

            Edit_mail(List,location_edit-1);

            printf("\nInformation after edit mail: ");
            show(List[location_edit-1]);
            break;
        default:
            printf("Please!choose again");
            break;
    }
}