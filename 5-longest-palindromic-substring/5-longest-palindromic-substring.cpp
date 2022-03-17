class Solution {
public:
    void solve(string str, int i, int j, set<string> &s) {
    while(i>=0 and j<str.size() and str[i]==str[j]) {
        s.insert(str.substr(i, j-i+1));
        i--;
        j++;
    }
}

string longestPalindrome(string str) {
    // set<string> s;
    // for(int i=0; i<str.size(); i++) {
    //     solve(str, i, i, s);
    //     solve(str, i, i+1,s); // Covers even odd case i.e a-odd , aa-even
    // }
    // int n = s.size();
    // int max=0,i=0,max_in=0;
    // for(auto it:s){
    //     // cout<<max_in<<endl;
    //     if(max<it.length()){
    //         max = it.length();
    //         max_in=i;
    //     }
    //     i++;
    // }
    // int j=0;
    // string res;
    // for(auto it:s){
    //     if(j==max_in) res=it;
    //     j++;
    // }
    // return res;
    // }
    
    
    int start=0;
    int end=0;
    
    int n = str.length();
    vector<vector<bool>> dp(n,vector<bool>(n,false));
    int l=0;
    string s="";
    for(int g=0;g<n;g++){
        for(int i=0,j=g;j<n;i++,j++){
            if(g==0){
                dp[i][j] = true;
            }else if(g==1){
                if(str[i]==str[j]){
                    dp[i][j] = true;
                }else dp[i][j] = false;
            }else{
                if(str[i]==str[j] and dp[i+1][j-1]==true){
                    dp[i][j]=true;
                }else dp[i][j]=false;
            }
            
            if(dp[i][j]){
            l=g+1;
            // s=str.substr(i,j-i+1);
            start=i;
            end=j-i+1;
            }
        }
        
    }
    cout<<l;
    s=str.substr(start,end);
    return s;
    
}
    
};