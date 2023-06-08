
#include "../include/list.h"
#include "../include/menu.h"
#include "../include/search.h"

int number_delete;
int main(){
    int choose;
    int number_list=10;
    struct info*List;
    List  = (struct info*)malloc(number_list*sizeof(struct info));
    while(1){
        display_menu();
        printf("\t\tEnter [1-6] the choose: ");
        scanf("%d",&choose);
        switch(choose){
            case 1:
                Menu_1(List,number_list);
                printf("\nDone!");
                break;
            case 2:
                Menu_2(List,number_list);
                break;
            case 3:
                Menu_3(List,number_list);
                break;
            case 4:
                Menu_4(List,number_list);
                break;
            case 5:
                printf("\n\n\t   Choose information to Delete: ");
                scanf("%d", &number_delete);

                struct info *temp=(struct info*)malloc(1*sizeof(struct info));
                for(int i=number_delete-1;i<number_list-1;i++){
                    *temp=List[i];
                    List[i]=List[i+1];
                    List[i+1]=*temp;
                }
                List = (struct info*)realloc(List,(number_list-1)*sizeof(struct info));
                number_list--;
                printf("Done Delete a information!");
                break;
            case 6:
                printf("\nExit Program.");
                exit(0);
            default:
                printf("Please try again!!!");
                break;
        }
    }
    getchar();
    return 0;
}