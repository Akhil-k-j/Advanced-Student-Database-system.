#include"header.h"
void stud_mod(SLL *ptr)
{
    while(1)
    {
        printf("R/r -Search with Roll no\nN/n -Search with Name\nP/p -Search with Percentage\nX/x -Go back\n");char x;scanf("%c",&x);__fpurge(stdin);
    switch(x)
    {
        case 'R':search_rollno(ptr);return;
        case 'r':search_rollno(ptr);return;
        case 'N':search_name(ptr);return;
        case 'n':search_name(ptr);return;
        case 'P':search_percentage(ptr);return;
        case 'p':search_percentage(ptr);return;
        case 'X':return;
        case 'x':return;
        default:printf("Wrong option\n");
    }
    }
}
void search_rollno(SLL*ptr)
{
    if(ptr==0)
    {
        printf("No data\n");
        return;
    }
    printf("Enter the Roll no to modify\n");
    int x,c=0;scanf("%d",&x);__fpurge(stdin);
    SLL *temp=ptr;
    while(temp)
    {
        if(temp->rollno==x)
        {
            c++;
            printf("%d %s %f\n",temp->rollno,temp->name,temp->marks);
        }
        temp=temp->next;
    }
    if(c==1)
    {
        printf("Enter the data to be updated\nName marks:-\n");
        char a[100];float f;
        scanf("%s %f",a,&f);__fpurge(stdin);
        printf("confirm :- %s %f\n",a,f);
        temp=ptr;
        while(temp)
        {
            if(temp->rollno==x)
            break;
            temp=temp->next;
        }
        strcpy(temp->name,a);
        temp->marks=f;
        return ;
    }
    else if(c==0)
    {
    printf("Roll number not matched\n");
    return;
    }
    else if(c>=2)
    {
        printf("Multiple Roll number detected\n");
        return ;
    }
}

void search_name(SLL *ptr)
{
        printf("Enter the Name to modify\n");
    char a[100],c=0;scanf("%s",a);__fpurge(stdin);
    SLL *temp=ptr;
    while(temp)
    {
        if(strcasecmp(temp->name,a)==0)
        {
            c++;
            printf("%d %s %f\n",temp->rollno,temp->name,temp->marks);
        }
        temp=temp->next;
    }
    if(c==1)
    {
        printf("Enter the data to be updated\nName marks:-\n");
        char b[100];float f;
        scanf("%s %f",b,&f);__fpurge(stdin);
        printf("confirm :-%s %f\n",b,f);
        temp=ptr;
        while(temp)
        {
            if(strcasecmp(temp->name,a)==0)
            break;
            temp=temp->next;
        }
        strcpy(temp->name,b);
        temp->marks=f;
        return ;
    }
    else if(c==0)
    {
    printf("Name not matched\n");
    return;
    }
    else if(c>=2)
    {
        search_rollno(ptr);
        return ;
    }
}
void search_percentage(SLL*ptr)
{
    printf("Enter the percentage no to modify\n");
    float x,c=0;scanf("%f",&x);__fpurge(stdin);
    SLL *temp=ptr;
    while(temp)
    {
        if(temp->marks==x)
        {
            c++;
            printf("%d %s %f\n",temp->rollno,temp->name,temp->marks);
        }
        temp=temp->next;
    }
    if(c==1)
    {
        printf("Enter the data to be updated\nName   marks:-\n");
        char a[100];float f;__fpurge(stdin);
        scanf("%s %f",a,&f);
        printf("confirm :-%s %f\n",a,f);
        temp=ptr;
        while(temp)
        {
            if(temp->marks==x)
            break;
            temp=temp->next;
        }
        strcpy(temp->name,a);
        temp->marks=f;
        return ;
    }
    else if(c==0)
    {
    printf("Percentage not matched\n");
    return;
    }
    else if(c>=2)
    {
        search_rollno(ptr);
        return ;
    }
}
