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
    ListNode* reverseList(ListNode* head, int k, int groups) {

        if(groups == 0){
            // don't reverse just return 
            return head;
        }

        int rev = k;
        ListNode *temp, *prev = NULL, *curr = head;
        while(rev--){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        
        head->next = reverseList(curr,k,groups-1);

        return prev;
    }



    ListNode* reverseKGroup(ListNode* head, int k) {

        // find len
        // find number of groups
        // i.e. if len is 8 and k=3, then groups will be 2. last two nodes need not be reversed
        // rotate recursively

        ListNode* start = head;
        int len = 0;
        
        while(start){
            start = start->next;
            len++;
        }

        int groups = len/k;

        return reverseList(head,k,groups);;
    }
};