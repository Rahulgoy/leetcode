class Solution {
public:
    string originalString(string s){
        string temp="";
        for(char i:s){
            if(temp.size() && i=='#') temp.pop_back();
            else if(i=='#');
            else temp.push_back(i);
        }
        return temp;
    }
    bool backspaceCompare(string s, string t) {
             return originalString(s)==originalString(t);
        
    }
};