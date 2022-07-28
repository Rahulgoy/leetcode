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
        if(!head->next and n==1) return NULL;
        
        
        ListNode* temp=head;
        int count=1;
        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        count=count-n-1;
        if(count<0){
            head=head->next;
            return head;
        } 
        temp=head;
        while(count>0){
            temp=temp->next;
            count--;
        }
        if(n==1) temp->next=NULL;
        else temp->next=temp->next->next;
        return head;
    }
};