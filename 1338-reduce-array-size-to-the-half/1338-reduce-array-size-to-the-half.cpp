class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mp;
        int n=arr.size();
        for(int element:arr){
            mp[element]++;
        }
        vector<pair<int,int>> pr;
        for(auto it:mp){
            pr.push_back(make_pair(it.second,it.first));
        }
        sort(pr.begin(),pr.end());
        
        int reduced_size=0;
        for(int i=pr.size()-1;i>=0;i--){
            pair<int,int> temp=pr[i];
            reduced_size+=temp.first;
            cout<<temp.first<<" ";
            if((n-reduced_size)<=(n/2)){
                return pr.size()-i;
            }
        }
        return -1;
    }
};