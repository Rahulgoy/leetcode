class Solution {
public:
    
    void solve(string digit,string output,int index,vector<string> &ans,string mapping[]){
        if(index>=digit.length()){
            ans.push_back(output);
            return;
        }
        
        string value = mapping[digit[index]-'0'];
        
        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
            solve(digit,output,index+1,ans,mapping);
            output.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
//         Method 1 Better and Clean
//         if(digits.empty()) 
//             return {};
//         vector<string> map = {"","","abc","def","ghi", "jkl","mno","pqrs","tuv","wxyz"};
//         vector<string> cur(1,"");
        
//         for(auto digit: digits)
//         {
//             string letters = map[digit-'0'];
//             vector<string> next;
//             for(auto ch : letters)
//                 for(auto elem : cur)
//                     next.push_back(elem+ch);
//             swap(cur,next);
//         }
        
//         return cur;  
        
        
//         Method 2 BackTracking
        
        vector<string> ans;
        if(digits.length() == 0)
            return ans;
        
        string output = "";
        int index = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, output, index, ans, mapping);
        return ans;
        
         
    }
};