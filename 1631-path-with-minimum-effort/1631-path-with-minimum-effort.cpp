class Solution {
public:
//     int absMin = 1000;
//     void dfs(int i,int j,vector<vector<int>>& heights,int n,int m,int maxDiff,int mini,vector<vector<bool>> &vis){
//         if(i<0 or j<0 or i>n-1 or j>m-1) return;
//         if(vis[i][j]) return;
//         vis[i][j]=true;
        
        
//         int diff = abs(mini-heights[i][j]);
//         maxDiff = max(diff,maxDiff);
//         if(i==n-1 and j==m-1){
//             absMin = min(maxDiff,absMin);
//         }
//         dfs(i+1,j,heights,n,m,maxDiff,heights[i][j],vis);
//         dfs(i,j+1,heights,n,m,maxDiff,heights[i][j],vis);
//         dfs(i,j-1,heights,n,m,maxDiff,heights[i][j],vis);
//         dfs(i-1,j,heights,n,m,maxDiff,heights[i][j],vis);
        
//         vis[i][j]=false;
        
        
//     }
//     int minimumEffortPath(vector<vector<int>>& heights) {
//         int n = heights.size();
//         int m = heights[0].size();
//         vector<vector<bool>> vis(n, vector<bool> (m,false));
        
//         dfs(0,0,heights,n,m,0,heights[0][0],vis);
        
        
//         // for(int i=0;i<n;i++){
//         //     for(int j=0;j<m;j++){
//         //         dfs(i,j,heights,n,m,absMin,heights[i][j],vis);
//         //     }
//         // }
//         return absMin;
//     }
    
    
    priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        int dis[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dis[i][j]=INT_MAX;
            }
        }
        pq.push({0,{0,0}});
        dis[0][0]=0;
        while(!pq.empty()){
            int currd=pq.top().first;
            int x=pq.top().second.first;
            int y=pq.top().second.second;
            pq.pop();
            if(x==n-1 && y==m-1)
                return currd;
            for(int i=0;i<4;i++){
                int xx=x+dx[i];
                int yy=y+dy[i];
                if(xx>=0 && yy>=0 && xx<n && yy<m){
                    int newd=max(currd,abs(heights[xx][yy]-heights[x][y]));
                    if(newd<dis[xx][yy]){
                        dis[xx][yy]=newd;
                        pq.push({newd,{xx,yy}});
                    }
                }
            }
        }
        return 0;
    }
};