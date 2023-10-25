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
        Node *temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
    
    Linkedlist Add_two_ll( Linkedlist ll2)
    {
        Linkedlist temp;
        Node* l1 = head;
        Node* l2 = ll2.head;
        while(l1!=NULL && l2!=NULL)
        {
            int sum = l1->data + l2->data;
            temp.insert(sum);
            l1 = l1->next;
            l2 = l2->next;
        }
        return temp;
    }
};

int main()
{
    Linkedlist ll1,ll2;
    ll1.insert(90);
    ll1.insert(78);
    ll1.insert(23);
    ll1.display();
    
    ll2.insert(5);
    ll2.insert(2);
    ll2.insert(4);
    ll2.display();
    Linkedlist result = ll1.Add_two_ll(ll2);
    cout<<"Added Linked List: ";
    result.display();
}

// ------------------------------
//   OUTPUT:
    // 90->78->23->NULL
    // 5->2->4->NULL
    // Added Linked List: 95->80->27->NULL
