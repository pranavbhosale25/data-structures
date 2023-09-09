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
    bool isPalindrome(ListNode* head) {

        int len = 0;
        ListNode* h = head;
        while(head){
            head = head->next;
            len++;
        }

        int mid = len/2;
        ListNode *start = h;

        while(mid--){
            h = h->next;
        }

        ListNode *prev, *curr, *temp;
        prev = NULL;
        curr = h;

        while(curr->next){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        curr->next = prev;

        while(curr && start){
            if(curr->val != start->val) return false;
            curr = curr->next;
            start = start->next;
        } 
        return true;
    }
};