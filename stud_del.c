#include"header.h"

void stud_del(SLL **ptr)
{
    while(1)
    {
        printf("R/r :Based on Roll no\nN/n :Based on Name\nX/x :Go back\n");char x;scanf("%c",&x);__fpurge(stdin);
    switch(x)
    {
        case 'R':del_rollno(ptr);return;
        case 'r':del_rollno(ptr);return;
        case 'N':del_name(ptr);return;
        case 'n':del_name(ptr);return;
        case'X':return;
        case'x':return;
        default:printf("Wrong option\n");
    }
    }
}
void del_rollno(SLL**ptr)
{
    if(*ptr==0)
    {
        printf("No data\n");
        return;
    }
    printf("Enter the roll no to delete\n");int x;scanf("%d",&x);__fpurge(stdin);
    SLL *temp=*ptr,*prev=*ptr;
    while(temp)
    {
        if(temp->rollno==x)
        break;
        prev=temp;
        if(temp->next)
        temp=temp->next;
        else
        {
            printf("Roll no didn't match\n");
            return;
        }
    }
    if(temp==*ptr)
    {
        *ptr=temp->next;
        free(temp);
            printf("deleted the element\n");
        return;
    }
    prev->next=temp->next;
    free(temp);
        printf("deleted the element\n");
}

void del_name(SLL**ptr)
{
    if(*ptr==0)
    {
        printf("No data present\n");
        return;
    }
    printf("Enter the name to delete\n");
    char a[100];scanf("%s",a);__fpurge(stdin);
    SLL *temp=*ptr,*del,*prev=*ptr;
    int c=0;
    while(temp)
    {
        if(strcasecmp(temp->name,a)==0)
        {
            c++;
            printf("%d %s %f\n",temp->rollno,temp->name,temp->marks);
        }
        prev=temp;
        temp=temp->next;
    }
    if(c==0)
    {
            printf("No name match found\n");
            return ;
    }
    if(c==1)
    {
        temp=prev=*ptr;
    while(temp)
    {
        if(strcasecmp(temp->name,a)==0)
        break;
        prev=temp;
        temp=temp->next;
    }
    if(temp==*ptr)
    {
        *ptr=temp->next;
        free(temp);
        printf("Deleted the element\n");
        return;
    }
    prev->next=temp->next;
    free(temp);
    printf("deleted the element\n");
    }
    else
    del_rollno(ptr);
}

void delete_all(SLL**ptr)
{
        SLL *temp=*ptr;
        SLL *delete=*ptr;
        if(*ptr==0)
        {
                printf("No records found\n");
                return ;
        }
        while(temp)
        {
                delete=temp->next;
                free(temp);
                temp=delete;
        }
        *ptr=0;
        printf("All nodes deleted\n");
}