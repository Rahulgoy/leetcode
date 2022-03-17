class Solution {
public:
    int scoreOfParentheses(string s) {
        int count=0;
        stack<int> st;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(count);
                count=0;
            }else{
                count=st.top()+max(count*2,1);
                st.pop();
            }
        }
        return count;
    }
};