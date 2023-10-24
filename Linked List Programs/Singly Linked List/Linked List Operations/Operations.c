//__________________________________________________Code For Operations in Linked List___________________________________________________________________

#include<stdio.h>
#include<stdlib.h>
#include <stddef.h>

struct node{
    int data;
    struct node *next;
}*head = NULL;


// Insertion in Linked List From Begining
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


//Insertion In Linked List From The End
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


//Insertion in Linked list after Index
void insert_after_index(int key,int index)
{
    struct node *temp,*ptr;
    temp = malloc(sizeof(struct node));
    temp->data = key;
    temp->next = NULL;
    ptr = head;
    index = index-1;
    while(index--)
    {
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    ptr->next = temp;
}


//Function For Traversal of Linked List
void traversal()
{
    struct node *ptr;
    ptr = head;
    while(ptr!=NULL)
    {
        printf("-> %d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}


//Function for Deletion in Linked List from Begining 
void delete_from_begin()
{
    struct node *ptr;
    ptr = head;
    head = ptr->next;
    free(ptr);
}


//Deletion in Linked List from the End
void delete_from_end()
{
    struct node *ptr;
    ptr = head;
    while(ptr->next->next!=NULL)
    {
        ptr = ptr->next;
    }
    free(ptr->next);
    ptr->next = NULL;
}

//Delete at Index
void delete_at_index(int index)
{
    struct node *ptr;
    ptr = head;
    while(index--)
    {
        ptr = ptr->next;
    }
    ptr->next = NULL;
    while(ptr!=NULL)
    {
        free(ptr);
    }
}
//Function to count the number of Nodes in a Linked List
int count_nodes()
{
    int count = 0;
    struct node *ptr;
    ptr = head;
    while(ptr)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}


//Function to find the Middle of linked List
int middle_data()
{
    struct node *fast,*slow;
    fast = slow = head;
    if(head==NULL)
    {
        return -1;
    }
    while(fast&&fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}


void main()
{
    // Function Calling For Insertion At Begin
   insert_at_begin(5);
   insert_at_begin(9);
   // Function Calling for Insertion At End
   insert_at_end(8);
   insert_at_end(7);
   traversal();
   // Function Calling for Insertion After Index
   insert_after_index(16,1);
   insert_after_index(67,3);
   traversal();
   // Function Calling for Deletion at Begin
   delete_from_begin();
   traversal();
   // Function Calling for Deletion at End 
   delete_from_end();
   traversal();
   int c = count_nodes();
   printf("No. of Nodes in the Linked List : %d",c);
   printf("\n");
   int m = middle_data();
   printf("The Middle of the linked list is: %d",m);
   //Function Calling for Deletion at Index
   delete_at_index(1);
   traversal();
}


____________________________________________________________________________________________________________________________________________________________________
    
    
// OUTPUT:
// -> 9 -> 5 -> 8 -> 7 
// -> 9 -> 16 -> 5 -> 67 -> 8 -> 7
// -> 16 -> 5 -> 67 -> 8 -> 7
// -> 16 -> 5 -> 67 -> 8
// No. of Nodes in the Linked List : 4
// The Middle of the linked list is: 67
