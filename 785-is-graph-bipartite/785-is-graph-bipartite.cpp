class Solution {
public:
    vector<int> vis,col;
    
    bool dfs(int i,int color,vector<vector<int>> &graph){
        vis[i]=1;
        col[i]=color;
        
        for(auto x:graph[i]){
            if(vis[x]==0){
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
            if(vis[i]==0 and dfs(i,0,graph)==false) return false;
        }
        return true;
    }
};