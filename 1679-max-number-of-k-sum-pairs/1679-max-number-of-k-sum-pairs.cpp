class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        int n= nums.size();
//      unordered_map<int,int> mp;
//         for(int i=0;i<n;i++){
//             mp[nums[i]]++;
//         }
//         int count=0;
//         for(int i=0;i<n;i++){
//             if(mp[nums[i]]){
//                 int temp = k - nums[i];
//                 // cout<<mp[nums[i]]<<" "<<temp<<endl;
//                 mp[nums[i]]--;
//                 if(mp[temp]){
//                     count++;
//                     mp[temp]--;
//                 }else mp[nums[i]]++;
//             }
            
//         }
        
//         return count;
        
        sort(nums.begin(),nums.end());
        int i=0,j=n-1,ans=0;
        while(i<j){
            if(nums[i]+nums[j]==k){
                ans++;i++;j--;
            }else if(nums[i]+nums[j]>k) j--;
            else i++;
        }
        return ans;
    }
};