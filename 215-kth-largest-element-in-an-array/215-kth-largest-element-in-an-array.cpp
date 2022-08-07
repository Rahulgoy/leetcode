class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // int n=nums.size();        
        // sort(nums.begin(),nums.end());
        // return nums[n-k];
        
        // Method 2
        priority_queue<int,vector<int>,greater<int>> min_heap;
        for(auto num:nums){
            min_heap.push(num);
            if(min_heap.size()>k) min_heap.pop();
        }
        return min_heap.top();
    }
};