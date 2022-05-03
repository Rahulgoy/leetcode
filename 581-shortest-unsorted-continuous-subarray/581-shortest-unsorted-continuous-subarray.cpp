class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        if(n<=1) return 0;
        int start=0,end=0,maxm=INT_MIN,minm=INT_MAX;
        for(int i=0;i<n;i++){
            maxm = max(maxm,nums[i]);
            if(maxm>nums[i]){
                end=i;
            } 
        }
        for(int i=n-1;i>=0;i--){
            minm = min(minm,nums[i]);
            if(minm<nums[i]){
                start=i;
            } 
        }
        // if(start==0 and end==0) return n;
        if(start==end) return 0;
        
        return end-start+1;
        
        
        
        
        
//         vector<int> sortedVec(nums.begin(),nums.end());
//         sort(sortedVec.begin(),sortedVec.end());
//         int start=0,end=n-1;
//         while(start<n and nums[start]==sortedVec[start]){
//             start++;
//         }
//         while(end>start and nums[end]==sortedVec[end]){
//             end--;
//         }
        
//         return end-start+1;
    }
};