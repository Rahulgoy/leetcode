class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> cand(256, 0);
        vector<bool> visited(256, false);

        for(auto&k:s)
            cand[k]++ ;
        
        string res = "0" ;
            
        for(auto&k:s)
        {
            cand[k]-- ;
            if(visited[k])
                continue ;
            while( k < res.back() && cand[res.back()] )
            {
                visited[res.back()] = false ;
                res.pop_back() ;
            }
            res+=k ;
            visited[k] = true ;
        }
        
        return res.substr(1) ;
    }
};