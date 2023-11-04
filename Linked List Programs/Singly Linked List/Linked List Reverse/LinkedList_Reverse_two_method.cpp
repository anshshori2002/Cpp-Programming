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

class Linkedlist
{
    public:
    Node* head;
    Linkedlist()
    {
        head = NULL;
    }
    void insert(int data)
    {
        Node* new_node = new Node(data);
        if(head == NULL)
        {
            head = new_node;
            return;
        }
        Node* temp = head;
        while(temp->next)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void display()
    {
        Node* temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
Node* reverse(Node* &head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *nextptr;
    while(curr!=NULL)
    {
        nextptr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextptr;
    }
    //when this loops ends, then the prev is pointing to thw last node which is new head
    return prev;
}
//Function of reverse linkedlist using recursion
Node* reverseLLRecursion(Node* &head)
{
    //Base Case
    if(head == NULL || head->next == NULL)
        return head;

    //Recursive case
    Node* new_head = reverseLLRecursion(head->next);
    head->next->next = head;
    head->next = NULL;//head is pointing to last node in reversed ll
    return new_head;

}
int main()
{
    Linkedlist ll;
    ll.insert(23);
    ll.insert(90);
    ll.insert(78);
    ll.display();
    ll.head = reverseLLRecursion(ll.head);
    ll.display();
    

return 0;
}
