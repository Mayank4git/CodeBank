/*
Given the head of a singly linked list, return true if it is a 
palindrome or false otherwise.

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
    ListNode* getmid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(slow!=NULL && fast != NULL){

             fast = fast->next;
             if(fast != NULL) {

                fast=fast->next;
                slow=slow->next;
            }
            return slow;
    }

    ListNode* reverse(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* forward=NULL;
        
        while(curr != NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {

        if(head->next == NULL) 
            return true;

        ListNode* middle= getmid(head);
        ListNode* temp = middle->next;
        middle->next   = reverse(temp);
        ListNode* head1 = head;
        ListNode* head2 = middle->next;

        while(head2 !=NULL){
            if(head1->val != head2->val){ 
                    return false;
            }
            
            head1 = head1->next;
            head2 = head2->next;
             
        }
        return true;       
    }
};