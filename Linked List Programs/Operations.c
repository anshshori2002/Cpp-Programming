#include<stdio.h>
#include<stdlib.h>
#include <stddef.h>

//Self Referential Structure
struct node{
    int data;
    struct node *next;
}*head = NULL;
// struct node *head = NULL;

void insert_at_begin(int key)
{
    struct node *temp;
    temp = malloc(sizeof(struct node));
    if(temp!=NULL)
    {
        temp->data = key;
        temp->next = NULL;
        temp->next = head;
        head = temp;
    }
}
void insert_at_end(int key)
{
    struct node *temp,*ptr;
    temp = malloc(sizeof(struct node));
    ptr = head;
    if(temp!=NULL)
    {
        temp->data = key;
        temp->next = NULL; 
        if(head==NULL)
        {
            head = temp;
        }
        while(ptr->next)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
void insert_at_address
void traversal()
{
    struct node *ptr;
    ptr = head;
    while(ptr!=NULL)
    {
        printf("-> %d ",ptr->data);
        ptr=ptr->next;
    }
}

void main()
{
   insert_at_begin(5);
   insert_at_begin(9);
   insert_at_end(8);
   insert_at_end(7);
   traversal();
}
