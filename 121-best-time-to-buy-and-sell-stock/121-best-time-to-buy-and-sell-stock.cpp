class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int profit=0;
        // int maxi=prices[0],mini=prices[0];
        // for(int i=0;i<prices.size();i++){
        //     if(prices[i]<mini){
        //         mini=maxi=prices[i];
        //     }else if(prices[i]>mini and prices[i]>maxi){
        //         maxi=prices[i];
        //     }
        //     profit=max(profit, maxi-mini);
        // }
        // return profit;
        
        
        //   Iterating from Backwards      
        int n = prices.size();
        int mx = prices[n - 1];
        int mx_profit = 0, price = 0;
        // in a reversive order, make sure max is behind now
        for (int i = n - 1; i >= 0; i--){
            price = prices[i];
            mx = mx > price? mx:price;
            mx_profit = mx - price > mx_profit? mx - price : mx_profit;
        }
        return mx_profit;
    }
};
