class Solution {
public:
    void setZ(vector<vector<int>>& matrix,int i,int j){
        int m = matrix.size();
        int n = matrix[i].size();
        
        for(int a=0;a<m;a++){
            matrix[a][j]=0;
        }
        for(int a=0;a<n;a++){
            matrix[i][a]=0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> res(matrix.begin(),matrix.end());
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    setZ(res,i,j);
                }
            }
        }
        
        matrix=res;
    }
};