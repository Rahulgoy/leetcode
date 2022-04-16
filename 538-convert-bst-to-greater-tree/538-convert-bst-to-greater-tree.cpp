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
    unordered_map<int,int> mp;
    int maxi=0;
    
    void findMax(TreeNode* root){
        if(root==NULL) return;
        maxi=max(maxi,root->val);
        mp[root->val]=root->val;
        
        findMax(root->left);
        findMax(root->right);
    }
    TreeNode* convertBST(TreeNode* root) {
        if(root==NULL) return root;
        
        
        findMax(root);
        
        convertBST(root->left);
        convertBST(root->right);
        
        int sum=root->val;
        for(int i=sum+1;i<=maxi;i++){
            if(mp[i]) sum+=i;
        }
        root->val = sum;
        sum=0;
        return root;
    }
};