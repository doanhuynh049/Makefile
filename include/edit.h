#ifndef EDIT_H
#define EDIT_H

#include "list.h"
#include "edit.h"
#include "search.h"

void Edit_Name(struct info List[],int location_edit);
void Edit_Number_phone(struct info List[],int location_edit);
void Edit_mail(struct info List[],int location_edit);
void Display_edit();
int select_number_edit(int number_list);
void Edit_information(struct info List[],int number_list);

#endif