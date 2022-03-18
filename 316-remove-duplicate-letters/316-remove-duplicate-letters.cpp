class Solution {
public:
    string removeDuplicateLetters(string s) {
//         vector<int> cand(256, 0);
//         vector<bool> visited(256, false);

//         for(auto&k:s)
//             cand[k]++ ;
        
//         string res = "0" ;
            
//         for(auto&k:s)
//         {
//             cand[k]-- ;
//             if(visited[k])
//                 continue ;
//             while( k < res.back() && cand[res.back()] )
//             {
//                 visited[res.back()] = false ;
//                 res.pop_back() ;
//             }
//             res+=k ;
//             visited[k] = true ;
//         }
        
//         return res.substr(1) ;
        
        
        //Will use stack to store output string
        stack<char> st;
        //to check is the element is seen earlier
        vector<int> seen(26,0);
        //Map to store the last occurence index
        unordered_map<char,int> last_index;
        for(int i=0;i<s.length();i++){
            last_index[s[i]]=i;
        }
        
        //Iterating 
        for(int i=0;i<s.length();i++){
            char cur=s[i];
            //if char is not seen before
            if(!seen[cur-'a']){
                //We will check if current element is 
                //less than element at top of stack
                //and repeating then remove that element
                while(!st.empty() and cur<st.top() and last_index[st.top()]>i){
                    seen[st.top()-'a']=0;
                    st.pop();
                }
                st.push(cur);
                seen[cur-'a']++;
            }
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};