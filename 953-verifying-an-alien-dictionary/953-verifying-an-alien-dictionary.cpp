class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> mp;
        for(int i=0;i<order.length();i++){
            mp[order[i]]=i;
        }
        for(int i=0;i<words.size()-1;i++){
            string words1=words[i];
            string words2=words[i+1];
          
            
            int j=0;
            while(j<min(words1.length(),words2.length())){
                if(mp[words1[j]]==mp[words2[j]]){
                    j++;
                    if(j==min(words1.length(),words2.length()) && (words1.length()-j)>words2.length()-j) return false;
                }else if(mp[words1[j]]<mp[words2[j]]) break;
                else return false;
            }
            // if((words1.length()-j)>words2.length()-j) return false;
        }
        return true;
    }
};