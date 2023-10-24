#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};
    
    void display(Node* head)                                    //Time Complexity: O(n)
    {
        Node* temp = head;
        while(temp)
        {
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
    
    void insert_at_begin(Node* &head, int data)                 //Time Complexity: O(1)
    {
        Node* newnode = new Node(data); 
        newnode->next = head;
        head = newnode;
    }
    
    void insert_at_end(Node* &head, int data)                   //Time Complexity: O(1)
    {
        Node* newNode = new Node(data);
        Node* temp = head;
        while(temp->next!=NULL)
        {   
            temp = temp->next; 
        }
        //temp has reach last node
        temp->next = newNode;
    }
    
    void insert_at_position(Node* &head, int data, int pos)     //Time Complexity: O(pos), worst case:O(n)
    {
        if(pos==0) 
        {
            insert_at_begin(head, data);
            return;
        }
        Node* temp = head;
        int curr_pos = 0;   
        Node* new_node = new Node(data);
        while(curr_pos!=pos-1)
        {
            temp = temp->next;
            curr_pos++;
        }
        //temp is pointing to the node at pos-1 
        new_node->next = temp->next;
        temp->next = new_node;
    }
    
    void update_at_pos(Node* head,int data, int k)              //Time Complexity: O(k), worst case: O(n)
    {
        Node* temp = head;
        int curr_pos = 0;
        while(curr_pos!=k)
        {
            temp = temp->next;
            curr_pos++;
        }
        //temp will be poiting to the kth node
        temp->val = data;
    }
    
    void count(Node* head)                                      //Time Complexity: O(n)
    {
        int c = 0;
        Node* temp = head;
        while(temp)
        {
            temp = temp->next;
            c++;
        }
        cout<<"Total Element in Linked List: "<<c<<endl;
    }
    
    void print_alternate_node(Node *head)                       //Time Complexity: O(n)
    {
        int count = 0;
        Node* temp = head;
        cout<<"ALternate Elements in a Node: ";
        while(temp!=NULL)
        {
            if(count%2==0)
                cout<<temp->val<<"->";
            temp = temp->next;
            count++;
        }
        cout<<"NULL"<<endl;
    }
    
    void print_second_last_node(Node *head)                     //Time Complexity: O(n)
    {
        Node* temp = head;
        while(temp->next->next)
        {
            temp = temp->next;
        } 
        cout<<"The Second Last Node is: "<<temp->val<<endl;
    }
    
    void delete_at_head(Node* &head)                            //TIme Complexity: O(1)
    {
        Node* temp = head;      //Node to be deleted
        head = head->next;
        free(temp);
    }
    
    void delete_at_tail(Node *head)                             //Time Complexity: O(n)
    {
        Node* temp = head;
        while(temp->next->next)
            temp = temp->next;
        Node* ptr = temp->next;
        temp->next = NULL;
        free(ptr);
    }

    void delete_at_pos(Node *head, int pos)                     //Time Complexity: O(n)
    {
        Node* temp = head;
        int curr_pos = 0;

        if(pos ==0)
        {
            delete_at_head(head);
            return;
        }
        while(curr_pos!=pos-1)
        {
            temp = temp->next;
            curr_pos++;
        }
        Node* ptr = temp->next;
        temp->next = temp->next->next;
        free(ptr);
        
    }

    void middle_element(Node *head)                             //Time Complexity: O(n)
    {
        Node  *slow = head,*fast = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        cout<<"Middle ELement: "<<slow->val<<endl;
    }

    void reverse_print(Node *head)
    {
        //base condition
        if(head == NULL)
            return;
        //recursive condition
        Node* temp = head;
        reverse_print(temp->next);
        cout<<temp->val<<"->";
    }
int main()
{
    Node * head = NULL;
    insert_at_begin(head, 1);
    display(head);
    insert_at_begin(head, 2);
    display(head);
    insert_at_end(head, 3);
    display(head);
    insert_at_end(head, 9);
    display(head);
    insert_at_end(head, 56);
    display(head);
    insert_at_position(head, 5, 1);
    display(head);
    update_at_pos(head, 8, 2);
    display(head);
    count(head);
    print_alternate_node(head);
    print_second_last_node(head);
    delete_at_head(head);
    display(head);
    delete_at_tail(head);
    display(head);
    delete_at_pos(head,2);
    display(head);
    middle_element(head);
    reverse_print(head);
    cout<<"NULL";
return 0;
}

----------------------------------------------------------

// OUTPUT: 
    // 1->NULL
    // 2->1->NULL
    // 2->1->3->NULL
    // 2->1->3->9->NULL
    // 2->1->3->9->56->NULL
    // 2->5->1->3->9->56->NULL
    // 2->5->8->3->9->56->NULL
    // Total Element in Linked List: 6
    // ALternate Elements in a Node: 2->8->9->NULL
    // The Second Last Node is: 9
    // 5->8->3->9->56->NULL
    // 5->8->3->9->NULL
    // 5->8->9->NULL
    // Middle ELement: 8
    // 9->8->5->NULL
