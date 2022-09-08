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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> res;
        if(!root) return res;
        // res.push_back({root->val});
        
        bool leftToright = true;
        
        while(!q.empty()){
            int s=q.size();
            vector<int> temp(s);
            for(int i=0;i<s;i++){
                TreeNode* curr=q.front();
                q.pop();
                
                int index=leftToright?i:s-i-1;
                temp[index]=curr->val;
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                
            }
            leftToright=!leftToright;
            if(temp.size()) res.push_back(temp);
        }
        return res;
    }
};