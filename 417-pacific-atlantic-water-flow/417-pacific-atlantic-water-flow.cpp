class Solution {
public:
    vector<vector<bool>> atlantic,pacific;
    vector<vector<int>> res;
    void solve(int i, int j, int m, int n, vector<vector<int>> &heights,vector<vector<bool>> &visited){
        if(visited[i][j]) return;
        visited[i][j]=true;
        
        if(atlantic[i][j] && pacific[i][j]) res.push_back(vector<int>{i, j}); 
        
        if(i+1<m and heights[i+1][j]>=heights[i][j]){
            solve(i+1,j,m,n,heights,visited);
        }
        if(j+1<n and heights[i][j+1]>=heights[i][j]){
            solve(i,j+1,m,n,heights,visited);
        }
        if(i-1>=0 and heights[i-1][j]>=heights[i][j]){
            solve(i-1,j,m,n,heights,visited);
        }
        if(j-1>=0 and heights[i][j-1]>=heights[i][j]){
            solve(i,j-1,m,n,heights,visited);
        }
       
    }
    
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        
        int m = heights.size();
        int n = heights[0].size();
        
        atlantic = pacific = vector<vector<bool> >(m, vector<bool>(n, false));
        
        for(int i=0;i<m;i++) {
            solve(i,0,m,n,heights,atlantic);
            solve(i,n-1,m,n,heights,pacific);
        }
        for(int i=0;i<n;i++) {
            solve(0,i,m,n,heights,atlantic);
            solve(m-1,i,m,n,heights,pacific);
        }
        return res;
    }
};