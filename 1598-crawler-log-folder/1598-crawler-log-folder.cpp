class Solution {
public:
    int minOperations(vector<string>& logs) {
//         int n = logs.size();
//         vector<string> res;
//         for(int i=0;i<n;i++){
//             if(logs[i]=="./");
//             else if(logs[i]=="../" and res.size()>=1) res.pop_back();
//             else if(logs[i]=="../");
//             else res.push_back(logs[i]);
//         }
        
        
//         return res.size();
        
        
        stack<string> st;
        int n=logs.size();
        int i=0;
        while(i<n)
        {
            if(logs[i]=="./")
            {
                i++;
                continue;
            }
            else if((logs[i]=="../")&&(!st.empty()))
                st.pop();
            else if((logs[i]=="../")&&(st.empty()))
            {
                i++;
                continue;
            }
            else
                st.push(logs[i]);
            i++;
        }
        return st.size();
    }
};