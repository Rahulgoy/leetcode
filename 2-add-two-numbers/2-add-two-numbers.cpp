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
//         ListNode *head=NULL;
//         ListNode *temp = NULL;
//         int carry=0;
//         while(l1 and l2){
//             int sum = l1->val + l2->val;
//             int num = sum%10;
//             ListNode *node = new ListNode((num+carry)%10);
//             carry = (sum+carry)/10;
//             if(temp==NULL){temp=node;head=node;}
//             else{
//                 temp->next = node;
//                 temp=temp->next;
//             }
//             l1=l1->next;
//             l2=l2->next;
//         }
        
//         while(l1){
//             int sum=l1->val;
//             int num = sum%10;
//             ListNode *node = new ListNode((num+carry)%10);
//             carry = (sum+carry)/10;
//             if(temp==NULL){temp=node;head=node;}
//             else{
//                 temp->next = node;
//                 temp=temp->next;
//             }
//             l1=l1->next;
//         }
//         while(l2){
//             int sum=l2->val;
//             int num = sum%10;
//             ListNode *node = new ListNode((num+carry)%10);
//             carry = (sum+carry)/10;
//             if(temp==NULL){temp=node;head=node;}
//             else{
//                 temp->next = node;
//                 temp=temp->next;
//             }
//             l2=l2->next;
//         }
//         if(carry!=0){
//             ListNode *node = new ListNode((carry)%10);
//             temp->next=node;
//         }
        
//         return head;
        
        
        
        ListNode *ptr = new ListNode();     //new list;
        ListNode *temp = ptr;
        
        int c = 0;
        while (l1 != NULL ||  l2 != NULL || c)
        {
            int sum = 0;
			if(l1 != NULL){
                sum += l1->val;
                l1 = l1 -> next;
            }
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2 -> next;
            }
            sum += c;
			c = sum/10;
			ListNode *node = new ListNode(sum%10);
            temp -> next = node;
            temp = temp -> next;
        }
        return ptr -> next;
    }
};