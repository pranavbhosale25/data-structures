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
        if(head == NULL) return head;

        ListNode* res = head;
        ListNode* start = head;
        
        int size = 0;
        while(head){
            size++;
            head = head->next;
        }

        int pos = size-n;
        if(pos == 0) return start->next;

        while(--pos){
            start = start->next;
        }

        if(start->next != NULL){
            start->next = start->next->next;
        } else{
            start->next = NULL;
        }
        
        return res;
        
    }
};