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
        if(!l1)
            return l2;
        
        if(!l2)
            return l1;
        
        ListNode* ans = new ListNode(-1);
        ListNode* final_ans = ans;
        int carry = 0;
        
        while(l1 || l2){
            
        }
        
        if(carry != 0){
            ListNode* tmp = new ListNode(carry);
            ans -> next = tmp;
            ans = ans->next;
        }
        
        return final_ans->next;
    }
};