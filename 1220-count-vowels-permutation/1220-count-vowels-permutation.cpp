class Solution {
public:
    int countVowelPermutation(int n) {
//         unordered_map<char,vector<char>> mp;
//         mp['a']={'e'};
//         mp['e']={'a','i'};
//         mp['i']={'a','e','o','u'};
//         mp['o']={'i','u'};
//         mp['u']={'a'};
        
        int mod=1e9+7;
        vector<vector<long long>> res(n+1,vector<long long>(5,0));
        res[1]={1,1,1,1,1};
        for(int i=2;i<=n;i++){
            res[i][0]=(res[i-1][1]%mod+res[i-1][2]%mod+res[i-1][4]%mod)%mod;
            res[i][1]=(res[i-1][0]+res[i-1][2])%mod;
            res[i][2]=(res[i-1][1]+res[i-1][3])%mod;
            res[i][3]=(res[i-1][2])%mod;
            res[i][4]=(res[i-1][3]+res[i-1][2])%mod;
        }
        
        long long sum=0;
        for(int i=0;i<5;i++){
            sum+=res[n][i]%mod;
        }
        return sum%mod;
    }
};