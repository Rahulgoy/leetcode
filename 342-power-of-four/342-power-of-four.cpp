class Solution {
public:
    bool isPowerOfFour(int num) {
        // if(num==1) return true;
        // long long n = num;
        // int i=1;
        // long long elem=1;
        // if(n<0) return false;
        // while(elem<n){
        //     elem = pow(4,i);
        //     i++;
        // }
        // if(elem==n) return true;
        // return false;
        
        return num > 0 && (num & (num - 1)) == 0 && (num - 1) % 3 == 0;
    }
};