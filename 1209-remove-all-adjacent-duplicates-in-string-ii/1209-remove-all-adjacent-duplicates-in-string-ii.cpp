class Solution {
public:
    string removeDuplicates(string s, int k) {
//         stack<char> st;
//         unordered_map<char,int> mp;
//         int n = s.size();
//         if(n<k) return s;
//         int count=1;
//         for(int i=0;i<n;i++){
//             mp[s[i]]=1;
//         }
//         for(int i=0;i<n;i++){ 
//             if(not st.empty() and s[i]==st.top()) mp[s[i]]++;
//             // else count=1;
//             if(mp[s[i]]==k and s[i]==st.top()){
//                 cout<<s[i]<<" ";
//                 while(mp[s[i]]>1){
//                     st.pop();
//                     mp[s[i]]--;
//                 }
//             }else st.push(s[i]);
//         }
//         cout<<endl;
        
//         string res="";
//         while(!st.empty()){
//             res+=st.top();
//             st.pop();
//         }
        
//         reverse(res.begin(),res.end());
        
//         return res;
        
        
        
        
        stack<pair<char,int>> st;
        int n=s.size();
        if(n<k) return s;
        for(int i=0;i<n;i++){
            if(st.empty() or st.top().first!=s[i]) st.push({s[i],1});
            else{
                auto temp = st.top();
                st.pop();
                st.push({temp.first,temp.second+1});
            }
            if(st.top().second==k) st.pop();
            
        }
        string res="";
        while(!st.empty()){
            auto cur = st.top();
            st.pop();
            while(cur.second--){
                res.push_back(cur.first);
            }
        }
        
        reverse(res.begin(),res.end());
        
        return res;
    }
};