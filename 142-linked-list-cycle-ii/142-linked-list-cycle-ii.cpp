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
    ListNode *detectCycle(ListNode *head) {
        if(!head or !head->next) return NULL;
        unordered_map<ListNode *,int> mp;
        ListNode *temp=head;
        while(temp){
            if(mp[temp]) return temp;
            else mp[temp]++;
            temp=temp->next;
        }
        return NULL;
    }
};