class Solution {
public:
    vector<int> col;
    vector<bool> vis;
    
    bool dfs(int i,int color,vector<vector<int>> &graph){
        vis[i]=true;
        col[i]=color;
        
        for(auto x:graph[i]){
            if(vis[x]==false){
                if(!dfs(x,color^1,graph)) return false;
            }else{
                if(col[i]==col[x]) return false;
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vis.resize(n);
        col.resize(n);
        
        for(int i=0;i<n;i++){
            if(vis[i]==false and dfs(i,0,graph)==false) return false;
        }
        return true;
    }
};