class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.length()%2==1) return false;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' or s[i]=='{' or s[i]=='[') st.push(s[i]);
            else{
                if(st.empty()) return false;
                if(s[i]==')' and st.top()=='(') st.pop();
                else if(s[i]=='}' and st.top()=='{') st.pop();
                else if(s[i]==']' and st.top()=='[') st.pop();
                else return false;
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};