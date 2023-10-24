// --------------------------------------Code For Reversing the Linked List---------------------------------------

#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
struct node
{
    int data;
    struct node *next;
}*head = NULL;
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

void traversal()
{
    struct node *ptr;
    ptr = head;
    while(ptr!=NULL)
    {
        printf("-> %d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

//Case 1:  For only Printing the data in the Reverse. This is done with the help of recursion.
void reverse_print(struct node *ptr)
{
    if(ptr)
    {
        reverse_print(ptr->next);
        printf("-> %d ",ptr->data);
    }
}  

//Case 2:  Reversing the whole Linked list and then Traverse the Linked list
void reverse_ll()
{
    struct node *curr,*prev,*nex;
    prev = NULL;
    curr = head;
    while(curr)
    {
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    head = prev;

}
void main()
{
    insert_at_begin(8);
    insert_at_begin(49);
    insert_at_begin(78);
    printf("The Linked List is: ");
    traversal();
    struct node *ptr;
    ptr = head;
    printf("The Reversed Linked List is: ");
    reverse_print(ptr);
    printf("\n");

    printf("Linked list after reversing the whole linked list: ");
    reverse_ll();
    traversal();
}


// ---------------------------------------Output--------------------------------------------------------

// The Linked List is: -> 78 -> 49 -> 8 
// The Reversed Linked List is: -> 8 -> 49 -> 78 
// Linked list after reversing the whole linked list: -> 8 -> 49 -> 78 

