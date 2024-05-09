#include "header.h"
int main()
{
        SLL *headptr=0;
        read_file(&headptr);
        char OP,c;
        while(1)
        {
                printf("__________STUDENT RECORD MENU__________\na/A  :Add new record\nd/D  :delete a record\ns/S  :show list\nm/M  :modify a record\nv/V  :save\ne/E  :exit\nt/T  :sort the list\nl/L  :delete all the records\nr/R  :reverse the list \nEnter your choice:\n");
                scanf("%c", &OP);__fpurge(stdin);
                switch (OP)
                {
                        case ('a'):stud_add(&headptr);break;
                        case ('d'):stud_del(&headptr);break;
                        case ('s'):print_node(headptr);break;
                        case ('m'):stud_mod(headptr);break;
                        case ('v'):save_node(headptr);break;
                        case ('e'):exit_function(headptr);break;
                        case ('t'):sort_fun(headptr);break;
                        case ('l'):delete_all(&headptr);break;
                        case ('r'):reverse_node(&headptr);break;
                        default:printf("Wrong option\n");
                }
        }
}