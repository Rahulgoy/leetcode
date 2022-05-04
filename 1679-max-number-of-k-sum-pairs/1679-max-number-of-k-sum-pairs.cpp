class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n= nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(mp[nums[i]]){
                int temp = k - nums[i];
                // cout<<mp[nums[i]]<<" "<<temp<<endl;
                mp[nums[i]]--;
                if(mp[temp]){
                    count++;
                    mp[temp]--;
                }else mp[nums[i]]++;
            }
            
        }
        
        return count;
    }
};