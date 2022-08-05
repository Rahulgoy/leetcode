class Solution {
public:
    vector<int> dp;
    int solve(vector<int>& nums,int target){
        if(target==0){
            return 1;
        }
        int ans=0;
        if(dp[target]!=-1) return dp[target];
        
        for(int j=0;j<nums.size();j++){
            if(nums[j]<=target)
                ans+=solve(nums,target-nums[j]);
        }
        return dp[target]=ans;
    }
    int combinationSum4(vector<int>& nums, int target) {
        int count=0;
        dp.resize(target+1,-1);
        return solve(nums,target);
    
    }
};