class Solution {
public:
    bool isPalindrome(int x) {
        // Method 1 Converting to string
//         if (x<0) return false;
        
//         string s = to_string(x);
//         int n = s.length();
//         for(int i=0;i<n/2;i++){
//             if(s[i]!=s[n-i-1]) return false;
//         }
//         return true;
        
        // Method 2
        long temp=x;
        long result=0;
        while(temp>0){
            result=result*10 + temp%10;
            temp=temp/10;
            
        }
        
        if(result==x) return true;
        return false;
    }
};