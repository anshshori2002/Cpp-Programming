https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1


This is code of Geeks for Geeks Preblem.

Code:-

struct Node* reverse(struct Node *ptr)
{
    struct Node *curr,*prev,*nex;
    curr = ptr;
    prev = NULL;
    while(curr)
    {
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    return prev;
}
class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        struct Node *ptr;
        ptr = head;
        ptr = reverse(ptr);
        struct Node *ptr1;
        ptr1 = ptr;
        while(ptr1->next!=NULL)
        {
            if(ptr1->data<9)
            {
                ptr1->data = ptr1->data+1;
                ptr = reverse(ptr);
                return ptr;
            }
            else
            {
                ptr1->data = 0;
            }
            ptr1 = ptr1->next;
        }
        if(ptr1->data<9)
        {
            ptr1->data = ptr1->data+1;
            ptr = reverse(ptr);
            return ptr;
        }
        else
        {
            ptr1->data = 0;
            struct Node *temp;
            temp = (struct Node *)malloc(sizeof(struct Node));
            temp->next = NULL;
            temp->data = 1;
            ptr1->next = temp;
            ptr = reverse(ptr);
            return ptr;
        }
    }
};
