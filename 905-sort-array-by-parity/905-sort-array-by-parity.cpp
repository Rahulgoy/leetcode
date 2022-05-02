class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
              
        int n = nums.size();
        if(n<=1) return nums;
        int i=0,j=n-1;
        while(i<n and i<j){
            // cout<<i<<" "<<nums[i]<<endl;
            if(nums[i]%2==1){
                swap(nums[i],nums[j]);
                j--;
            }else i++;
        }
        return nums;
    }
};