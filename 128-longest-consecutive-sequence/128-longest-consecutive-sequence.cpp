class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n==0) return 0;
        int count=0,max_count=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]+1==nums[i+1]) count++;
            else if(nums[i]==nums[i+1]) continue;
            else count=0;
            max_count=max(count,max_count);
        }
        return max_count+1;
    }
};