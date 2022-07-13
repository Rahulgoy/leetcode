class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        set<int> s;
        
        for(auto v:arr) mp[v]++;
        
        for(auto val:mp)
            if(s.insert(val.second).second==false) return false;
        return true;
        
        //set.insert returns a pair: (first) pointer to the inserted element, and (second) a boolean - false if an element was already in the set, and true otherwise. So, as we inserting occurances, we return false if we find a duplicate.
    }
};