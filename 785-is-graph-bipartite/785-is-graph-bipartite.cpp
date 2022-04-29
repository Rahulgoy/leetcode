class Solution {
public:
//     vector<int> col;
//     vector<bool> vis;
    
//     bool dfs(int i,int color,vector<vector<int>> &graph){
//         vis[i]=true;
//         col[i]=color;
        
//         for(auto x:graph[i]){
//             if(vis[x]==false){
//                 if(!dfs(x,color^1,graph)) return false;
//             }else{
//                 if(col[i]==col[x]) return false;
//             }
//         }
//         return true;
//     }
    
//     bool isBipartite(vector<vector<int>>& graph) {
//         int n = graph.size();
//         vis.resize(n);
//         col.resize(n);
        
//         for(int i=0;i<n;i++){
//             if(vis[i]==false and dfs(i,0,graph)==false) return false;
//         }
//         return true;
//     }
    
    
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>color(n,-1);
        
        for(int i=0;i<n;i++){
            if(color[i]==-1){
                //then we have to chceck there is no matching color;
                if(!dfs(i,color,graph)) return false;
            }   
        }
        return true;
    }
    
    bool dfs(int node,vector<int>&color,vector<vector<int>>&graph){
       
        if(color[node]==-1)color[node] =1;
        
        for(auto it:graph[node]){
            if(color[it]==-1){
                color[it] = 1- color[node];
               if(!dfs(it,color,graph))return false;
            }
            if(color[it]==color[node]) return false;
            
        }
        return true;
    }
};