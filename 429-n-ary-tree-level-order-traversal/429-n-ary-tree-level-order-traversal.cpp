/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> q;
        q.push(root);
        vector<vector<int>> res;
        if(!root) return res;
        res.push_back({root->val});
        while(!q.empty()){
            int s=q.size();
            vector<int> temp;
            for(int i=0;i<s;i++){
                Node* curr=q.front();
                q.pop();
                for(auto node:curr->children){
                    temp.push_back(node->val);
                    q.push(node);
                }
            }
            if(temp.size()) res.push_back(temp);
        }
        return res;
    }
};