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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int sum = 0;

        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        while( (l1 != NULL || l2 != NULL) || carry){
            sum = 0;
            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }

            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            // previous carry value;
            sum += carry;

            // carry for next one
            carry = sum/10;

            ListNode* curr = new ListNode(sum%10);
            temp->next = curr;
            temp = curr;
        }

        ListNode* result = dummy->next;
        delete dummy;
        return result;
    }
};