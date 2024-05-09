#include"header.h"
void save_node(SLL*ptr)
{
        if(ptr==0)
        {
                printf("No data fount to save\n");
                return ;
        }
        FILE *fp=fopen("student.dat","w");
        if(fp==0)
        {
                printf("File not found\n");
                return;
        }
        while(ptr)
        {
                fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
                ptr=ptr->next;
        }
        fclose(fp);
        printf("All data saved succefully\n");
}

void exit_function(SLL *ptr)
{
    char x;
    while(1)
    {
            printf("S/s - Save and exit\nE/e - Exit without saving\nX/x - Go back\n");
    scanf("%c",&x);__fpurge(stdin);
        switch(x)
        {
        case 'S':save_node(ptr);exit(0);
        case 's':save_node(ptr);exit(0);
        case 'E':exit (0);
        case 'e':exit (0);
        case 'X':return;
        case 'x':return;
        default:printf("wrong option\n");
        }
    }
}
