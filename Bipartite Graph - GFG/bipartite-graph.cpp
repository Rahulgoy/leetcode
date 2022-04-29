// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
vector<int> vis,col;
    
    bool dfs(int i,int color,vector<int>graph[]){
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
    
    bool isBipartite(int V, vector<int>graph[]) {
        // int n = graph.size();
        vis.resize(V);
        col.resize(V);
        
        for(int i=0;i<V;i++){
            if(vis[i]==0 and dfs(i,0,graph)==false) return false;
        }
        return true;
    }
	

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends