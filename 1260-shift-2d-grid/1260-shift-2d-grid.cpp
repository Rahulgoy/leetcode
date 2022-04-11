class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        while(k>0){
            int first=0,last=0;
            int m = grid.size();
            int n = grid[0].size();

            first = grid[0][0];
            int elem=first,temp;
            last = grid[m-1][n-1];

            
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    
                    if(i==m-1 and j==n-1){
                        continue;
                    }else if(j==n-1){
                        temp=grid[i+1][0];
                        grid[i+1][0]=elem;
                        elem=temp;

                    }else{
                        temp=grid[i][j+1];
                        grid[i][j+1]=elem;
                        elem=temp;
                    }

                }
            }
            grid[0][0]=last;

            k--;
        }
        
        return grid;
        
              
    }
};