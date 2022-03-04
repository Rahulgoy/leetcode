class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
    
        if(s.length()%2==1) return false;
        // int i=1;
        // while(i<s.length()){
        //     if(s[i]==')' and s[i-1]=='('){
        //         i=i+2;
        //     }else if(s[i]=='}' and s[i-1]=='{'){
        //         i=i+2;
        //     }else if(s[i]==']' and s[i-1]=='['){
        //         i=i+2;
        //     }else{
        //         return false;
        //     }
        // }
        // return true;
        
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' or s[i]=='[' or s[i]=='{') st.push(s[i]);
            else{
                if(st.empty()) return false;
                if(s[i]==')' and st.top()=='('){
                    st.pop();
                }else if(s[i]==']' and st.top()=='['){
                    st.pop();
                }else if(s[i]=='}' and st.top()=='{'){
                    st.pop();
                }else return false;
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};