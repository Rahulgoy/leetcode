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
        ListNode* temp=head,*tmp_head=head;
        
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        // calculating length and taking mod of k with n
        ListNode * leng = head;
        int length =0;
        while(leng!= NULL){
            leng = leng->next;
            length++;
        }
        if ( k%length == 0){
            return head;
        }
        int n ;
        n = k%length;
        
        for(int i=0;i<n;i++){
            while(temp->next && temp->next->next!=NULL){
                temp = temp->next;
            }
            temp->next->next=tmp_head;
            tmp_head = temp->next;
            temp->next=NULL;
            temp = tmp_head;
        }
        return tmp_head;
    }
    
};