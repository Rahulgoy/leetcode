class Solution {
    
public:
    
    
    
//     void make_set(int v,vector<int> &parent,vector<int> &sz){
//         parent[v]=v;
//         sz[v]=1;
//     }

//     int find_set(int v,vector<int> parent){
//         if(v==parent[v]) return v;
//         return parent[v]=find_set(parent[v],parent);
//     }
//     void union_sets(int a,int b,vector<int> &parent,vector<int> &sz){
//         a = find_set(a,parent);
//         b = find_set(b,parent);

//         if(a!=b){
//             if(sz[a]<sz[b]) swap(a,b);
//             parent[b] = a;
//             sz[a]+=sz[b];
//         }
//     }


//     int kruskal(vector<vector<int>> &adj,int V,int E,vector<int> &parent,vector<int> &sz){
//         sort(adj.begin(),adj.end());
//         int cost=0;
//         for(auto edge:adj){
//             int w=edge[0];
//             int x=edge[1];
//             int y=edge[2];

//             if(find_set(x,parent)==find_set(y,parent)) continue;
//             else{
//                 cout<<x<<" "<<y<<"\n";
//                 cost+=w;
//                 union_sets(x,y,parent,sz);

//             }
//         }
//         return cost;
// }

//     int calManhatten(int x1,int y1,int x2,int y2){
//         return abs(x2-x1)+abs(y2-y1);
//     }
//     int minCostConnectPoints(vector<vector<int>>& points) {
    
//         vector<vector<int>> adj;
//         int V = points.size();
        
//         // const int N = 1e5+6;
//         vector<int> parent(V,0);
//         // vector<int> sz(V);
        
//         // for(int i=0;i<V;i++){
//         //     make_set(i,parent,sz);
//         // }

        
//         for(int i=0;i<points.size();i++){
//             for(int j=i+1;j<points.size();j++){
//                 int x1=points[i][0];
//                 int y1=points[i][1];
//                 int x2=points[j][0];
//                 int y2=points[j][1];
//                 int w = calManhatten(x1,y1,x2,y2);
//                 adj.push_back({w,i,j});
//             }            
//         }
//         int E = adj.size();
        
//         return kruskal(adj,V,E,parent);
//     }
    
    
    
    
    
    int getParent(vector<int>& parents, int idx){
        
        if(parents[idx]==idx){
            return idx;
        }
        
        parents[idx] = getParent(parents, parents[parents[idx]]);
        
        return parents[idx];
        
        
    }
    
    int minCostConnectPoints(vector<vector<int>>& points) {
        
        int n = points.size();
        vector<int> parents(n);        
        iota(parents.begin(), parents.end(), 0);
        int ans = 0;
        int edges = 0;
        priority_queue<vector<int>> pq;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(i!=j){
                     pq.push({-1*(abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1])), i, j});
                }
            }
        }
        
        
        while(edges!=n-1){
            
            vector<int> edge = pq.top();
            
            int p1 = getParent(parents, edge[1]);
            int p2 = getParent(parents, edge[2]);
            
            if(p1!=p2){
                
                ans += -1*edge[0];
                
                parents[p1] = p2;
                
                edges++;
                
                
            }
            
            pq.pop();
            
        }
        
        
        
        return ans;
        
        
    }
};