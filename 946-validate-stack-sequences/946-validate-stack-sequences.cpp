class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        if(pushed.size()!=popped.size()) return false;
       
        stack<int> st;
        int i=0;
        
        for(int j=0;j<pushed.size();j++){
            st.push(pushed[j]);
            
            while(st.size() && st.top()==popped[i]){
                st.pop();
                i++;
            }
        }
        
        return st.size()==0;
    }
};