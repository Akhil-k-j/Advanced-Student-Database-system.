#ifndef SLL_H
#define SLL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdio_ext.h>

typedef struct student
{
        int rollno;
        char name[20];
        float marks;
        struct student *next;
}SLL;

int count_node(SLL*);
void save_node(SLL*);
void print_node(SLL*);
void read_file(SLL**);
void delete_all(SLL**);
void reverse_node(SLL**);
void exit_function(SLL *ptr);

void sort_data(SLL*);
void sort_name(SLL*ptr);
void sort_percentage(SLL*ptr);
void sort_fun(SLL *ptr);

void stud_add(SLL **ptr);
void sort_rollno(SLL*ptr);

void stud_del(SLL **ptr);
void del_rollno(SLL**ptr);
void del_name(SLL**ptr);

void stud_mod(SLL *ptr);
void search_rollno(SLL *ptr);
void search_name(SLL *ptr);
void search_percentage(SLL *ptr);

#endif