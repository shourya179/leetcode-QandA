class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int bestbuy =prices[0];
     int maxprofit =0;
     int n = prices.size();

     for(int i =0;i<n;i++){
        if(bestbuy<prices[i])
            maxprofit = max(maxprofit,prices[i]-bestbuy);

        bestbuy = min(prices[i],bestbuy);
     }   
     return maxprofit;
    }
};