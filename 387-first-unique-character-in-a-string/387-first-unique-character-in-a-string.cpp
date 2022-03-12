class Solution {
public:
    int firstUniqChar(string s) {
//         map<char,pair<int,int>> mp;
//         for(int i=0;i<s.length();i++){
//             if(mp.find(s[i]) != mp.end()){
//                 mp[s[i]] = make_pair(mp[s[i]].first+1, mp[s[i]].second);
//             }else mp[s[i]] = make_pair(mp[s[i]].first+1, i);
            
//         }
//         for(auto it:mp){
//             if(it.second.first==1) return it.second.second;
//         }
        
//         return -1;
        
        vector<int> alpha(26,0);
        for(int i=0;i<s.length();i++){
            alpha[s[i]-'a']++;
        }
        for(int i=0;i<s.length();i++){
            if(alpha[s[i]-'a']==1) return i;
        }
        return -1;
    }
};