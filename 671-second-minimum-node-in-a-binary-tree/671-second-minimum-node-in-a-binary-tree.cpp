/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void inorder(TreeNode* root,set<int> &s){
        if(!root) return;
        inorder(root->left,s);
        s.insert(root->val);
        inorder(root->right,s);
    }
    
    int findSecondMinimumValue(TreeNode* root) {
        set<int> s;
        inorder(root,s);
        int second_smallest=-100;
        if(s.size()<2) return -1;
        
        auto x=s.begin();
        x++;
        return *x;
        
        
//         int count=0;
//         for(auto it:s){
//             if(count==1) second_smallest=it;
//             count++;
//         }
        
//         return second_smallest;
    }
};