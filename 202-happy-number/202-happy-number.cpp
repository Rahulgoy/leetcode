class Solution {
public:
    bool isHappy(int n) {
        if(n==1) return true;
        int num=n;
        while(num>4){
            int sum=0;
            while(num>0){
                sum = sum+(num%10)*(num%10);
                num=num/10;
            }
            num=sum;
            if(num==1) return true;
        }
        return false;
    }
};