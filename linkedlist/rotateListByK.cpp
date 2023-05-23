/*
Given the head of a linked list, rotate the list to the right by k places.

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

    int getLength(ListNode* head){
        int len = 0;
        while(head){
            len++;
            head = head->next;
        }
        return len;
    }

    ListNode* rotateRight(ListNode* head, int k) {

        if(!head){
            return 0;
        }
        int len = getLength(head);
        int rotatepos = k%len;
        if(rotatepos == 0){
            return head;
        }

        int actualrotate = len-rotatepos-1;
        ListNode* newLastNode = head;
        for(int i=0;i<actualrotate;i++){
            newLastNode = newLastNode->next;
        }
        ListNode* newHead = newLastNode->next;
        newLastNode->next = 0;

        ListNode* it = newHead;
        while(it->next){
            it = it->next;
        }
        it->next = head;
        return newHead;

    }
};