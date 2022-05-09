class Solution {
public:
    
//     string helper(){
        
//     }
    
    vector<string> letterCombinations(string digits) {
//         map<char,vector<char>> mp;
//         mp['2']={"a','b','c'};
//         mp['3']={'d','e','f'};
//         mp['4']={'g','h','i'};
//         mp['5']={'j','k','l'};
//         mp['6']={'m','n','o'};
//         mp['7']={'p','q','r','s'};
//         mp['8']={'t','u','v'};
//         mp['9']={'w','x','y','z'};
        
        
//         int n=digits.size();
//         if(n==0) return {""};
//         if(n==1) return mp[digits[0]];
// //         for(int i=0;i<n;i++){
            
// //         }
        
        
//         return {""};
                 
                 
                 
        if(digits.empty()) 
            return {};
        vector<string> map = {"","","abc","def","ghi", "jkl","mno","pqrs","tuv","wxyz"};
        vector<string> cur(1,"");
        
        for(auto digit: digits)
        {
            string letters = map[digit-'0'];
            vector<string> next;
            for(auto ch : letters)
                for(auto elem : cur)
                    next.push_back(elem+ch);
            swap(cur,next);
        }
        
        return cur;  
                 
                 
                 
                 
    }
};