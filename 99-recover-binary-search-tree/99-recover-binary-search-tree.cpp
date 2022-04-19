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
    TreeNode *first,*second,*pre;
    void inorder(TreeNode* root){
        if(!root) return;
        
        inorder(root->left);
        
        if(pre != NULL && root->val < pre->val){
            
            //Storing previous node
            if(first == NULL){
                first = pre;
            }
            
            //If both nodes are adjacent, save the current node in that case
            second = root;
            
        }
        
        //Making current node as previous node
        pre = root;

        
        inorder(root->right);
    
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
        swap(first->val,second->val);
    }
};