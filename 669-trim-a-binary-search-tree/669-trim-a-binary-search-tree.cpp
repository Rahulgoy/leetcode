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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(root == NULL) return root;
        root->left = trimBST(root->left, low, high);    // reach the leaf nodes
        root->right = trimBST(root->right, low, high);
		
        if(root->val < low) return root->right;         // if root.val is less than low than all the values in its left would also be less so simply return right
        else if(root->val > high) return root->left;
        return root;
        
    }
};