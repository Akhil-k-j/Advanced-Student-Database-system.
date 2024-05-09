#include"header.h"

void read_file(SLL **ptr)
{
        SLL *new;
        FILE *fp=fopen("student.dat","r");
        if(fp==0)
        {
                printf("No file found\n");
                return;
        }
        while(1)
        {
                new=malloc(sizeof(SLL));
                if(fscanf(fp," %d %s %f", &new->rollno,new->name,&new->marks)==-1)
                        break;
                new->next=0;
                if(*ptr==0)
                        *ptr=new;
                else
                {
                        SLL *last=*ptr;
                        while(last->next)
                                last=last->next;
                        last->next=new;
                }
        }
}

void print_node(SLL *ptr)
{
        if(ptr==0)
        {
                printf("No records found\n");
                return ;
        }
        else
        {
                printf("**********************************\n");
                while(ptr)
                {
                        printf("%d %s %g\n",ptr->rollno,ptr->name,ptr->marks);
                        ptr=ptr->next;
                }
                printf("**********************************\n");
        }
}

void reverse_node(SLL**ptr)
{
        if(*ptr==0)
        {
                printf("No records found\n");
                return ;
        }
        int c=count_node(*ptr);
        if(c>1)
        {
                SLL *a[c],*temp=*ptr;         //using dynamic memory allocation also possible.
                int i=0;
                while(temp)
                {
                        a[i++]=temp;
                        temp=temp->next;
                }
                for(i=1;i<c;i++)
                a[i]->next=a[i-1];
                a[0]->next=NULL;
                *ptr=a[c-1];
        }
}
int count_node(SLL *ptr)
{
        int c=0;
        SLL *temp=ptr;
        while(ptr)
        {
                c++;
                ptr=ptr->next;
        }
        return c;
}