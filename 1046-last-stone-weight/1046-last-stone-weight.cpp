class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        while(stones.size()>1){
            sort(stones.begin(),stones.end());
            if(stones[stones.size()-1]==stones[stones.size()-2]){
                stones.pop_back();
                stones.pop_back();
            }else{
                int first = stones[stones.size()-1];
                int second = stones[stones.size()-2];
                int diff = first-second;
                stones.pop_back();
                stones.pop_back();
                stones.push_back(diff);
            }
        }
        if(stones.size()==0) return 0;
        return stones[0];
    }
};