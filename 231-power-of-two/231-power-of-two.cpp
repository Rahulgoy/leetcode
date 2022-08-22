class Solution {
public:
    bool isPowerOfTwo(int num) {
        // return num > 0 && (num & (num - 1)) == 0;
        
        return fmod(log10(num)/log10(2), 1)==0;
    }
};