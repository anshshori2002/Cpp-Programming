
//  Problem of Leetcode of adding Two linked list.
//  Link of this problem - https://leetcode.com/problems/add-two-numbers/submissions/892052957/

//  Description of the problem - 
//  You are given two non-empty linked lists representing two non-negative integers. 
//  The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
//  You may assume the two numbers do not contain any leading zero, except the number 0 itself.

// Code:-
  class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* node = new ListNode();
        ListNode* temp = node;
        int carry = 0;
        while(l1!=NULL ||l2!=NULL ||carry)
        {
            int sum = 0;
            if(l1!=NULL)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            carry = sum/10;
            ListNode* newnode = new ListNode(sum%10);
            temp->next = newnode;
            temp = temp->next;
        }
        return node->next;
    }
};



// Explaination of the code:-
//   1. Firstly create a new linked list (as address of first node come in node pointer and we copy the address to the temp pointer)
//   2. After that we create a while statement and run that loop upto-
//     (i)  First linked list is not NULL;
//     (ii) Second linked list is not NULL;
//     (iii) if linked list first and second become empty then to add carry at end we also have check for carry.
//   3. At last we return the adresss of first Node. 
