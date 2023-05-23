/*
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.
Return the head of the merged linked list.
*/


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
    ListNode* mergeTwoLists(ListNode* left, ListNode* right) {
        
        if(left == 0) return right;
        if(right == 0)  return left;

        ListNode* ans =  new ListNode(-1);
        ListNode* mptr = ans;
        while(left && right){
            if(left->val <= right->val){
                mptr->next = left;
                mptr = left;
                left = left->next;
            } else{               
                mptr->next = right;
                mptr = right;
                right = right->next;         
            }
        }

        if(left){
            mptr->next = left;
        } 
        if(right){
            mptr->next = right;
        }
        return ans->next;
    }
};