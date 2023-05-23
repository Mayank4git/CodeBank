/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* temp=new ListNode();
        temp->next=head;

        ListNode* fast=temp;
        ListNode* slow=temp;

        for(int i=1;i<=n;i++){
             fast=fast->next;
        }

        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }

        ListNode* gaya=slow->next;
        slow->next=slow->next->next;
        delete(gaya);
        
        return temp->next;
        
    }
};

/////////////////////////////

/*

using length of given linked list we can remove n node from the end.

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

    int getlength(ListNode* head){
        ListNode* curr = head;
        int length = 0;
        while(curr!=NULL){
            length++;
            curr = curr->next;
        }
        return length;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if (head == nullptr) {
            return nullptr;
        }

        int length = getlength(head);
        ListNode* node = NULL;
        if(length<=1) return node;

        ListNode* curr = head;
        ListNode* prev = NULL;

        int position = length - n;
        int count = 1;

        if(length==n){
           head = head->next;
           curr->next = NULL;
           delete curr;
           return head;
        }

        while(count<=position){
           prev = curr;
           curr = curr->next;
           count++;
        }

        if(curr==NULL){
            prev->next = NULL;
        }
        else{
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
        }     

        return head;
               
    }
};