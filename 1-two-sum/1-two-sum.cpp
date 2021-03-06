class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int ind1,ind2;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             ind1=i;ind2=j;
        //         }
        //     }
        // }
        // return {ind1,ind2};
        
        
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[target-nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]] and i!=mp[nums[i]]) return {i,mp[nums[i]]};
        }
        return {0,0};
        
        
    }
    
};