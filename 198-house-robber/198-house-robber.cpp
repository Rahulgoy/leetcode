class Solution {
public:
    int rob(vector<int>& nums) {
        int even=0,odd=0,next=0,temp;
        for(int i=0;i<nums.size();i++){
            temp=max(odd,next)+nums[i];
            next=odd;
            odd=even;
            even=temp;
        }
        return max(even,odd);
    }
};