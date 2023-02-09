#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* prev;
    struct node* next;
}*head = NULL;

void insertion_in_begin(int key)
{
    struct node *temp;
    temp = malloc(sizeof(struct node));
    if(temp!=NULL)
    {
        temp->data = key;
        temp->prev = NULL;
        temp->next = head;
        head = temp;
    }
}
void traversal()
{
    struct node *ptr;
    ptr = head;
    while(ptr)
    {
        printf("->%d",ptr->data);
        ptr = ptr->next;
    }
}
void main()
{
    insertion_in_begin(8);
    insertion_in_begin(9);
    insertion_in_begin(23);
    traversal();
}


// OUTPUT:
// ->23->9->8
