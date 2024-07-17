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
        if(head==NULL || head->next==NULL) return true;

        stack<int>s;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast){
            s.push(slow->val);
            if(fast==NULL || fast->next==NULL){
                break;
            }
            fast=fast->next->next;
            slow=slow->next;
        }
        while(!s.empty()){
            if(s.top()!=slow->val)
                return false;
            else{
                s.pop();
                slow=slow->next;
            }
        }
        return true;
    }
};
