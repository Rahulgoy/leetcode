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
    vector<int> arr;
    void inorder(TreeNode* root,int &count,int k,int &ans){
        if(!root) return;
        inorder(root->left,count,k,ans);
        // arr.push_back(root->val);
        count++;
        if(count==k) ans=root->val;
        inorder(root->right,count,k,ans);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        int count=0;
        int ans=-1000;
        inorder(root,count,k,ans);
        return ans;
        
    }
};