class Solution {
public:
    bool isPowerOfThree(int n) {
        // return n > 0 && 1162261467 % n == 0;
        
        // if((log10(n)%log10(3)==0) return true;
        // return false;
        
        return fmod(log10(n)/log10(3), 1)==0;
    }
};