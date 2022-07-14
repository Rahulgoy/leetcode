class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int temp=-1;
        int n = nums.size();
        // Method 1     465ms, 100 MB
        // Time and Space Complexity: O(N)
        /*unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        for(auto x:mp){
            if(x.second>1) temp = x.first;
        }
        return temp;
        */
        
        // Method 2      244ms,  61 MB
        // Time Complexity:O(Nlogn + N)
        // sort(nums.begin(),nums.end());
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]==nums[i-1]) temp = nums[i];
        // }
        // return temp;
        
        int slow = nums[0];
  int fast = nums[0];
  do {
    slow = nums[slow];
    fast = nums[nums[fast]];
  } while (slow != fast);
  fast = nums[0];
  while (slow != fast) {
    slow = nums[slow];
    fast = nums[fast];
  }
  return slow;
    }
};