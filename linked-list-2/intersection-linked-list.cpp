/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        /*
            Find lenA and lenB
            The difference between the two will give how much you need to traverse
            Once you travel that distance, both lists will have the same remaining length

            Move step by step in both lists and compare
        */
        
        if(headA == NULL || headB == NULL) return NULL;

        if( headA == headB) return headA;

        ListNode *h1 = headA, *h2 = headB;
        int l1 = 0, l2 = 0;
        while(headA){
            headA = headA->next;
            l1++;
        }
        
        while(headB){
            headB = headB->next;
            l2++;
        }

        if(l2 > l1){
            while(l2>l1){
                h2 = h2->next;
                l2--;
            }
        } else {
             while(l1>l2){
                h1 = h1->next;
                l1--;
            }
        }

        while(h1 && h2){
            if(h1 == h2) return h2;
            h1 = h1->next;
            h2 = h2->next;
        }
        
        return NULL;
        
    }
};