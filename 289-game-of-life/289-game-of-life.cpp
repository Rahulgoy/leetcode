class Solution {
public:
    int value(int i,int j,int m,int n,vector<vector<int>>& board){
        if(i<0 or j<0 or i>m-1 or j>n-1) return 0;
        return board[i][j];
    }
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        
        int top,bottom,left,right,lt,rt,lb,rb,sum=0;
        vector<vector<int>> res( m , vector<int> (n, 0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                sum=0;
                top = value(i-1,j,m,n,board);
                bottom = value(i+1,j,m,n,board);
                left = value(i,j-1,m,n,board);
                right = value(i,j+1,m,n,board);
                lt = value(i-1,j-1,m,n,board);
                rt = value(i-1,j+1,m,n,board);
                lb = value(i+1,j-1,m,n,board);
                rb = value(i+1,j+1,m,n,board);
                sum += top+bottom+left+right+lt+rt+lb+rb;
                cout<<sum<<" ";
                
                if(board[i][j]==0){
                     if(sum==3) res[i][j]=1;
                     else res[i][j]=0;
                }else{
                    if(sum<2) res[i][j]=0;
                    else if(sum==2 or sum==3) res[i][j]=1;
                    else res[i][j]=0;
                }
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                board[i][j]=res[i][j];
            }
        }
        
        
    }
};