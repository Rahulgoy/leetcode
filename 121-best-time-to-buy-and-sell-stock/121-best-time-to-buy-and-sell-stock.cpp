class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int maxi=prices[0],mini=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]<mini){
                mini=maxi=prices[i];
            }else if(prices[i]>mini and prices[i]>maxi){
                maxi=prices[i];
            }
            profit=max(profit, maxi-mini);
        }
        return profit;
    }
};
