class Solution {
public:
    bool isPossible(vector<int>& nums) {
        if(nums.size() < 3)
        return false;
    
    //map with key as a element at the end of seq and value as size of each such seq.
    unordered_map<int, priority_queue<int, vector<int>, greater<int>>> mp;
    
    //update map as per key availibility
    for(auto num : nums){
        if(mp.count(num-1)){
            mp[num].push((!mp[num-1].empty())?mp[num-1].top()+1:1);
            if(!mp[num-1].empty())
                mp[num-1].pop();
        }
        else{
                mp[num].push(1); 
        }
    }
    
    for(auto [t,q]: mp){
        if(!q.empty() && q.top() < 3)
            return false;
    }
    return true;
    }
};