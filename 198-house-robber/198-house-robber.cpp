class Solution {
public:
    int solve(vector<int>&dp,int k,vector<int> nums){
        if(k>=nums.size()) return 0;
        
        if(dp[k]!=-1) return dp[k];
        
        int incCurrent = nums[k]+solve(dp,k+2,nums);
        int withoutCurrent = solve(dp,k+1,nums);
        
        return dp[k]=max(incCurrent,withoutCurrent);
    }
    
    int rob(vector<int>& nums) {
        // Method 1
        // int even=0,odd=0,next=0,temp;
        // for(int i=0;i<nums.size();i++){
        //     temp=max(odd,next)+nums[i];
        //     next=odd;
        //     odd=even;
        //     even=temp;
        // }
        // return max(even,odd);
        
        // Method 2
        vector<int> dp(nums.size(),-1);
        return solve(dp,0,nums);
    }
};