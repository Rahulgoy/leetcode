class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string temp="";
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i]) or isdigit(s[i])){
                temp+=s[i];
            }
        }
        
        cout<<temp<<endl;
        for(int i=0;i<temp.length()/2;i++){
            if(temp[i]!=temp[temp.length()-i-1]) return false;
        }
        // cout<<s;
        return true;
    }
};