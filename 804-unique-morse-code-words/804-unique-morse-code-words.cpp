class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse={
            ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
        };
        
        set<string> s;
        
        for(auto word:words){
            string code="";
            for(int i=0;i<word.length();i++){
                code+=morse[word[i]-'a'];
            }
            s.insert(code);
        }
        return s.size();
    }
};