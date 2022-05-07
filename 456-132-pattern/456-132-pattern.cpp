class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        
//         Method 1 O(n^3)
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         for(int k=j+1;k<n;k++){
        //             if(nums[i]<nums[k] and nums[k]<nums[j]) return true;
        //         }
        //     }
        // }
        // return false;
        
//         Method 2 O(n^2)
        // int minm = nums[0];
        // for(int j = 0; j < n - 1; j++){
        //     for(int k = j + 1; k < n; k++){
        //         if(minm<nums[k] and nums[k]<nums[j]) return true;
        //         minm = min(minm, nums[j]);
        //     }
        // }
        // return false;
        
//         Method 3 O(n)
        stack<int> st;        
        int thirdElement = INT_MIN;
        
        for(int i = n - 1; i >= 0; i--){
            if(nums[i] < thirdElement) return true;
            while(!st.empty() && st.top() < nums[i]) {
                thirdElement = st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};