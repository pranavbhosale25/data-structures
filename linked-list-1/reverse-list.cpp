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
    ListNode* reverseList(ListNode* head) {
        // Iterative
        if(head == NULL || head->next == NULL) return head;

        ListNode *temp, *prev;
        prev = NULL;
        while( head->next != NULL){
            temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }
        head->next = prev;
        return head;

        // Recursive
        // if(head == NULL || head->next == NULL) return head;
        //     ListNode* h2 = reverseList(head->next);
        //     head->next->next = head;
        //     head->next=NULL;
        //     return h2;
        // }
};