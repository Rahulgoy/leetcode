class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        if(tops.size()!=bottoms.size()) return -1;
        
        int count=0;
        map<int,int> top;
        for(int i=0;i<tops.size();i++){
            top[tops[i]]++;
        }
        map<int,int> bottom;
        for(int i=0;i<bottoms.size();i++){
            bottom[bottoms[i]]++;
        }
        
        pair<int,int> top_freq;
        top_freq.first=0;
        top_freq.second=0;
        for(auto it:top){
            if(it.second>top_freq.second){
                top_freq.first=it.first;
                top_freq.second=it.second;
            }
        }
        pair<int,int> bottom_freq;
        bottom_freq.first=0;
        bottom_freq.second=0;
        for(auto it:bottom){
            if(it.second>bottom_freq.second){
                bottom_freq.first=it.first;
                bottom_freq.second=it.second;
            }
        }
        
        if(top_freq.second>=bottom_freq.second){
            for(int i=0;i<tops.size();i++){
                int temp = top_freq.first;
                if(tops[i]==temp) continue;
                else{
                    if(bottoms[i]==temp) count++;
                    else return -1;
                }
            }
        }else{
            for(int i=0;i<tops.size();i++){
                int temp = bottom_freq.first;
                if(bottoms[i]==temp) continue;
                else{
                    if(tops[i]==temp) count++;
                    else return -1;
                }
            }
        }
        
        return count;
    }
};