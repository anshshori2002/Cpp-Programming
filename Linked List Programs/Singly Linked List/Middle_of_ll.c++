// Platform Leetcode
// Problem Link - https://leetcode.com/problems/linked-list-cycle/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *ptr = head;
        int c = 0;
        while(ptr)
        {
            c++;
            ptr = ptr->next;
        }
        ListNode *t = head;
        for(int i = 0; i < ceil(c/2); i++)
        {
            t = t->next;
        }
        return t;
    }
};
