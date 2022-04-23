/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* dfs(Node* node, unordered_map<Node*, Node*> &hash) {
    if(hash.find(node) == hash.end()) {
        hash[node] = new Node(node->val);
        for(Node* neighbor : node->neighbors) {
            hash[node] -> neighbors.push_back(dfs(neighbor, hash));
        }
    }
    return hash[node];
}
Node* cloneGraph(Node* node) {
    if(node == NULL) return node;
    unordered_map<Node*, Node*> hash;
    return dfs(node, hash);
}
};