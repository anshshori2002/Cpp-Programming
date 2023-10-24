#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insert_at_begin(Node* &head, int data)
{
    Node* new_node = new Node(data);
    new_node->next = head;
    head =new_node;
}
 void insert_at_tail(Node* head, int data)
 {
    Node* new_node = new Node(data);
    Node* temp = head;
    while(temp->next)
    {
        temp = temp->next;
    }
    temp->next = new_node;
 }
 void min_max(Node* head)
 {
     int min, max;
     Node* temp = head;
     min = temp->data;
     max = temp->data;
     while(temp)
     {
        if(temp->data>max)
            max = temp->data;
        if(temp->data<min)
            min = temp->data;
        temp = temp->next;
     }
     cout<<"\nMaximum element: "<<max;
     cout<<"\nMinimum element: "<<min;
 }
 void display(Node *head)
 {
     Node* temp = head;
     while(temp)
     {
         cout<<temp->data<<"->";
         temp = temp->next;
     }
     cout<<"NULL";
 }
int main()
 {
     Node *head = NULL;
     insert_at_begin(head, 56);
     insert_at_tail(head, 45);
     insert_at_tail(head, 12);
     insert_at_tail(head,90);
     display(head);
     min_max(head);
 }
