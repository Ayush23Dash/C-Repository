class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sz = prices.size();
        if(sz==1) return 0;
        int profit=0,maxSoFar=prices[0];
        for(int i=1;i<sz;i++){
            if(prices[i]>prices[i-1]){
                profit+=(prices[i]-prices[i-1]);
            }
        }
        return profit;
    }
};