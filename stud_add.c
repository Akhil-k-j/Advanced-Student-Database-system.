#include"header.h"
void stud_add(SLL**ptr)
{
    SLL *new=malloc(sizeof(SLL));
    printf("Enter the name and marks\n");
    scanf("%s %f",new->name,&new->marks);__fpurge(stdin);
    sort_rollno(*ptr);
    if(*ptr==0 || 1!=(*ptr)->rollno)
    {
        new->next=*ptr;
        *ptr=new;
        new->rollno=1;
        return ;
    }
    SLL *temp=*ptr,*prev=*ptr;
    int i=1;
    while(temp)
    {
       if(temp->rollno!=i)
            break;
        i++;
          prev=temp;
        temp=temp->next;
    }
    new->next=prev->next;
    prev->next=new;
    new->rollno=i;
}

void sort_fun(SLL *ptr)
{
    char x;
    while(1)
    {
            printf("N/n - Sort with name\nP/p - Sort with percentage\nx/X - Go back\n");
    scanf("%c",&x);__fpurge(stdin);
        switch(x)
        {
        case 'n':sort_name(ptr);return;
        case 'N':sort_name(ptr);return;
        case 'p':sort_percentage(ptr);return;
        case 'P':sort_percentage(ptr);return;
        case 'x':return;
        case 'X':return;
        default:printf("wrong option\n");
        }
    }
}



void sort_name(SLL*ptr)
{
        if(ptr==0)
        {
                printf("No records found\n");
                return;
        }
        SLL *p1=ptr,*p2=ptr,temp;
        int i,j,c=count_node(ptr);
        for(i=0;i<c;i++)
        {
                p2=p1->next;
                for(j=i+1;j<c;j++)
                {
                        if(strcasecmp(p1->name,p2->name)>0)
                        {
                                temp.rollno=p1->rollno;
                                strcpy(temp.name,p1->name);
                                temp.marks=p1->marks;

                                p1->rollno=p2->rollno;
                                strcpy(p1->name,p2->name);
                                p1->marks=p2->marks;

                                p2->rollno=temp.rollno;
                                strcpy(p2->name,temp.name);
                                p2->marks=temp.marks;
                        }
                        p2=p2->next;
                }
                p1=p1->next;
        }
        printf("Sort succesfull\n");
}


void sort_percentage(SLL*ptr)
{
        if(ptr==0)
        {
                printf("No records found\n");
                return;
        }
        SLL *p1=ptr,*p2=ptr,temp;
        int i,j,c=count_node(ptr);
        for(i=0;i<c;i++)
        {
                p2=p1->next;
                for(j=i+1;j<c;j++)
                {
                        if(p1->marks>p2->marks)
                        {
                                temp.rollno=p1->rollno;
                                strcpy(temp.name,p1->name);
                                temp.marks=p1->marks;

                                p1->rollno=p2->rollno;
                                strcpy(p1->name,p2->name);
                                p1->marks=p2->marks;

                                p2->rollno=temp.rollno;
                                strcpy(p2->name,temp.name);
                                p2->marks=temp.marks;
                        }
                        p2=p2->next;
                }
                p1=p1->next;
        }
        printf("Sort succesfull\n");
}

void sort_rollno(SLL*ptr)
{
        if(ptr==0)
        {
                printf("No records found\n");
                return;
        }
        SLL *p1=ptr,*p2=ptr,temp;
        int i,j,c=count_node(ptr);
        for(i=0;i<c;i++)
        {
                p2=p1->next;
                for(j=i+1;j<c;j++)
                {
                        if(p1->rollno>p2->rollno)
                        {
                                temp.rollno=p1->rollno;
                                strcpy(temp.name,p1->name);
                                temp.marks=p1->marks;

                                p1->rollno=p2->rollno;
                                strcpy(p1->name,p2->name);
                                p1->marks=p2->marks;

                                p2->rollno=temp.rollno;
                                strcpy(p2->name,temp.name);
                                p2->marks=temp.marks;
                        }
                        p2=p2->next;
                }
                p1=p1->next;
        }
}
