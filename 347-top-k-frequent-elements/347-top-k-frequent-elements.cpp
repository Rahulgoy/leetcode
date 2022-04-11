class Solution {
public:
    struct comp {
    template <typename T>
  
    // Comparator function
    bool operator()(const T& l,
                    const T& r) const
    {
        if (l.second != r.second) {
            return l.second > r.second;
        }
        return l.first > r.first;
    }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> M;
        for(int i=0;i<nums.size();i++)
        {
            M[nums[i]]++;
        }
        
        set<pair<int, int>, comp> S(M.begin(),
                                   M.end());
  
        // Print the sorted value
        vector<int> res;
        int t=k;
        for (auto& it : S) {
            if(t==0) return res;
            // cout << it.first;
            res.push_back(it.first);
            t--;
        }
        return res;
    }
};