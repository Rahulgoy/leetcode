class Solution {
public:
    int fib(int n) {
//         vector<int> res(n+1,0);
//         res[0]=0;
//         res[1]=1;
//         for(int i=2;i<=n;i++){
//             res[i] += res[i-1]+res[i-2]; 
//         }
        
//         return res[n];
        if(n==1 or n==2) return 1;
        if(n==0) return 0;
        
        
        return fib(n-1)+fib(n-2);
    }
};