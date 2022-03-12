class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        for(auto it:nums1){
            mp[it]=1;
        }
        set<int> s;
        for(auto it:nums2){
            if(mp[it]) s.insert(it);
        }
        
        vector<int> res;
        for(auto it:s){
            res.push_back(it);
        }
            
        return res;
    }
};