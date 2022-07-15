class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Method 1
        unordered_map<int,int> mp;
        for(auto num:nums) mp[num]++;
        for(auto it:mp){
            if(it.second>ceil(nums.size()/2)) return it.first;
        }
        return 0;
    }
};