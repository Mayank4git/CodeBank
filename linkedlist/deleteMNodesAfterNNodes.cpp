/*
Given a linked list and two integers M and N. Traverse the linked list such that you retain M nodes then delete next N nodes, continue the same till end of the linked list.

Input:
M = 2, N = 2
Linked List: 1->2->3->4->5->6->7->8
Output:
Linked List: 1->2->5->6

Input:
M = 3, N = 2
Linked List: 1->2->3->4->5->6->7->8->9->10
Output:
Linked List: 1->2->3->6->7->8

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

    void deleteLink(ListNode* head, int M, int N) {

        if(!head){
            return 0;
        }

        ListNode* it = head;
        for(int i=0;i<M-1;i++){
            if(!it){
                return 0;
            }
            it = it->next;
        }

        if(!it) return 0;

        ListNode* Mth = it;
        it = Mth->next;

        for(int i=0;i<N;i++){
            if(!it) break;
            ListNode* temp = it->next;
            delete it;
            it = temp;
        }

        Mth->next = it;
        deleteLink(it, M, N);// recursive call for doing same thing
    }
};