class Solution {
    vector<vector<int>> res;
public:
    void solve(int i,int k,int n,vector<int>& temp){
        if(k<=0)
        {
            if(n==0) res.push_back(temp);
            return;
        }
        
        for(int t=i;t<=9;t++){
            temp.push_back(t);
            solve(t+1,k-1,n-t,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp;
        solve(1,k,n,temp);
        return res;
    }
};