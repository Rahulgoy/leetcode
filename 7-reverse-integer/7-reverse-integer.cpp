class Solution {
public:
    int reverse(int x) {
        long long result=0;
        long long temp=x;
        long long multiplier=-1;
        if(x<0){
            temp=temp*multiplier;
        }
        while(temp>0){
            result=result*10 + temp%10;
            temp=temp/10;
            if(result>INT_MAX || result<INT_MIN) return 0;
        }
        // cout<<result;
        if(x<0) return (-1 * result);
        return result;
    }
};