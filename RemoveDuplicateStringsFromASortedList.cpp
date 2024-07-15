/**
 * Definition for singly-linked list.
 * struct ListNode {
    int 
 *     int val;
        ListNode *next ;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* temp = head ;
        if(head==NULL || head-> next == NULL){
            return head ;
        }
        while(temp != NULL){
            if( temp->next != NULL && temp-> val == temp->next->val  ){

                ListNode* newNode = temp -> next ;
                temp -> next = newNode -> next ;
                newNode -> next = NULL ;
                delete newNode ;
            }
            else{
                temp = temp -> next ;
            }
        }
        return head ;
        
    }
};
