class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
//         if(nums.size()==1 and nums[0]==1) return 1;
//         int count=0,max_count=0;
//         for(int i=0;i<nums.size()-1;i++){
//             if(nums[i]==1 and nums[i]==nums[i+1]) {
//                 count++;
//                 max_count=max(count+1,max_count);
//             }else if(nums[i]==1 and nums[i]!=nums[i+1]){
//                 max_count=max(count+1,max_count);
//                 count=0;
//             }
//             else count=0;
            
//         }
//         return max_count;
        
        int count=0,max_count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }else{
                count=0;
            }
            max_count=max(max_count,count);
        }
        return max_count;
    }
};