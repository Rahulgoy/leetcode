class Solution {
public:
    int find(int x,vector<int> &parent){
        if(parent[x]==x) return x;
        return parent[x]=find(parent[x],parent);
    }
    
    void unite(int x,int y,vector<int> &parent){
        int a = find(x,parent);
        int b = find(y,parent);
        if(a>b) swap(a,b);
        parent[b] = a;
    }
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        vector<int> parent(s.size());
        for(int i=0;i<s.size();i++){
            parent[i]=i;
            
        }
        
        string ans="";
        for(int i=0;i<pairs.size();i++){
            unite(pairs[i][0],pairs[i][1],parent);
        }
        
        vector<string> a(s.size());
        for(int i=0;i<s.size();i++){
            a[find(i,parent)]+=s[i];
        }
        
        for(auto &i:a){
            sort(i.rbegin(),i.rend());
        }
        for(int i=0;i<s.size();i++){
            s[i]=a[find(i,parent)].back();
            a[find(i,parent)].pop_back();
        }
        return s;
    }
};