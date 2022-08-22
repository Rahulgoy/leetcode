class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num==1) return true;
        long long n = num;
        int i=1;
        long long elem=1;
        if(n<0) return false;
        while(elem<n){
            elem = pow(4,i);
            i++;
        }
        if(elem==n) return true;
        return false;
    }
};