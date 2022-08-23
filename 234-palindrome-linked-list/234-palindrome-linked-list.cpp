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
    ListNode *reverse(ListNode* head){
        ListNode *currNode=head,*prevNode=NULL,*nextNode=head;
        
        while(currNode){
            nextNode=currNode->next;
            currNode->next=prevNode;
            prevNode=currNode;
            currNode=nextNode;
        }
        return prevNode;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head,*fast=head;
        
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        fast = reverse(slow->next);
        slow=head;
        while(fast){
            if(slow->val!=fast->val) return false;
            slow=slow->next;
            fast=fast->next;
        }
        return true;
    }
    
};