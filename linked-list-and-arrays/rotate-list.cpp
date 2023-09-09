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
    ListNode* rotateRight(ListNode* head, int k) {

        /*
        find length
        take k = k modulo len
        remember start 
        connect end to start
        remember end
        from start move len-k steps ahead 
        disconnect the next connection
        */

        if(head == NULL) return NULL;
        if(head->next == NULL) return head;

        ListNode *start = head;
        int len = 0;
        ListNode *prev;
        while(head){
            prev = head;
            head = head->next;
            len++;
        }

        k = k%len;

        if( k == 0 ) return start;

        head = start;
        prev->next = head;

        int travel = len - k ;

        while(travel-- && travel >0){
            head = head->next;
        }
        
        ListNode *newHead = head->next;
        head->next = NULL;

        return newHead;
    }
};