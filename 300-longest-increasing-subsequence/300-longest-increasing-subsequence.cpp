class Solution {
public:
    int rec(int parent, int next, vector<int> &nums,int &max_count,int count,vector<int> &dp){
        if(dp[parent]!=-1) return dp[parent];
        
        if(next==nums.size()-1){
            next=parent+1;
            parent++;
            
        }
        if(parent+1>=nums.size()) return 0;
        if(next+1>=nums.size()) return 0;
        if(nums[parent]<nums[next+1]){
            count++;
            max_count=max(max_count,count);
        }
        
        return dp[parent]=rec(parent,next,nums,max_count,count,dp);
    }
    int lengthOfLIS(vector<int>& nums) {
        
        vector<int> sub;
        for (int x : nums) {
            if (sub.empty() || sub[sub.size() - 1] < x) {
                sub.push_back(x);
            } else {
                auto it = lower_bound(sub.begin(), sub.end(), x); // Find the index of the smallest number >= x
                *it = x; // Replace that number with x
            }
        }
        return sub.size();

        
        
//         if(nums.size()<2) return 1;
//         int max_count=0;
//         vector<int> dp(nums.size(),-1);
//         rec(0,1,nums,max_count,0,dp);
//         return max_count;
    }
};