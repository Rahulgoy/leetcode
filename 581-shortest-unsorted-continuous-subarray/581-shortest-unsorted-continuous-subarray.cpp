class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        if(n<=1) return 0;
//         int start=0,end=0;
//         for(int i=0;i<n-1;i++){
//             if(nums[i]>nums[i+1]){
//                 start=i;
//                 break;
//             } 
//         }
//         for(int i=0;i<n-1;i++){
//             if(nums[i]<nums[i+1]){
//                 end=i;
//             } 
//         }
//         if(start==0 and end==0) return n;
//         end++;
//         cout<<start<<" "<<end<<endl;
//         if(start==0 and end==n-1) return 0;
        
//         return end-start;
        
        
        
        
        
        vector<int> sortedVec(nums.begin(),nums.end());
        sort(sortedVec.begin(),sortedVec.end());
        int start=0,end=n-1;
        while(start<n and nums[start]==sortedVec[start]){
            start++;
        }
        while(end>start and nums[end]==sortedVec[end]){
            end--;
        }
        
        return end-start+1;
    }
};