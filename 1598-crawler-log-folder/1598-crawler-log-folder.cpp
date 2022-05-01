class Solution {
public:
    int minOperations(vector<string>& logs) {
        int n = logs.size();
        vector<string> res;
        for(int i=0;i<n;i++){
            if(logs[i]=="./");
            else if(logs[i]=="../" and res.size()>=1) res.pop_back();
            else if(logs[i]=="../");
            else res.push_back(logs[i]);
        }
        
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
        return res.size();
    }
};