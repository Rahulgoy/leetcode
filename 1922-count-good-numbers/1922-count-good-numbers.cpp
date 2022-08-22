class Solution {
public:
    long long mod=1e9+7;
    long long solve(long long val,long long pow){ // calculatin pow in log(n) time
        if(pow==0) return 1;
        
        if(pow%2==0){
            return solve((val*val)%mod,pow/2)%mod;
        }
        else
            return (val*solve((val*val)%mod,pow/2))%mod;
        
    }
    int countGoodNumbers(long long n) {
        
        // if(n==1) return 5;
        
        // long long temp= (first)LL;
        // cout<<first<<endl;
        long long first,second;
        if(n%2==0){
            first = solve(4,n/2);
            second = solve(5,n/2);
        }else{
            first = solve(4,n/2);
            second = solve(5,1+(n/2));
        }
        
        
        long long ans =((first%mod)*(second%mod))%mod;
        // return 0;
        return ans%mod;
    }
};