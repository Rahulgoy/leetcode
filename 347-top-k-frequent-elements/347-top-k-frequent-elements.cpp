class Solution {
public:
    struct comp {
    template <typename T>
  
    // Comparator function
    bool operator()(const T& l, const T& r) const
    {
        if (l.second != r.second) {
            return l.second > r.second;
        }
        return l.first > r.first;
    }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
//         map<int, int> M;
//         for(int i=0;i<nums.size();i++)
//         {
//             M[nums[i]]++;
//         }
        
//         set<pair<int, int>, comp> S(M.begin(),
//                                    M.end());
  
//         // Print the sorted value
//         vector<int> res;
//         int t=k;
//         for (auto& it : S) {
//             if(t==0) return res;
//             // cout << it.first;
//             res.push_back(it.first);
//             t--;
//         }
//         return res;
        
        
//         Method 2 using priority queue and faster as well
        
        unordered_map<int,int>mapp;
        for(int i=0;i<nums.size();i++)
        {
            mapp[nums[i]]++;
        }
        
        vector<int> ans;
        priority_queue<pair<int,int>>pq;
        for(auto mp:mapp){
            pq.push({mp.second,mp.first});
        }
        
        int i = 0;
        while(i++<k){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};