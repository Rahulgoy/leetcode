class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int> (n,0));
        int count=1;
        int dir=0;
        int left=0,right=n-1,bottom=n-1,top=0;
        while(left<=right and top<=bottom){
            if(dir==0){
                for(int i=left;i<=right;i++){
                    matrix[top][i]=count;
                    count++;
                }
                top++;
            }else if(dir==1){
                for(int i=top;i<=bottom;i++){
                    matrix[i][right]=count;
                    count++;
                }
                right--;
            }else if(dir==2){
                for(int i=right;i>=left;i--){
                    matrix[bottom][i]=count;
                    count++;
                }
                bottom--;
            }else if(dir==3){
                for(int i=bottom;i>=top;i--){
                    matrix[i][left]=count;
                    count++;                
                }
                left++;
            }
            dir=(dir+1)%4;
        }
        
        return matrix;
    }
};