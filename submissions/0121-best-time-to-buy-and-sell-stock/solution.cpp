class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum = INT_MAX; 
        int profit = INT_MIN; 
        for(int i = 1; i<prices.size(); i++){
            minimum = min(minimum, prices[i-1]);
            profit = max(profit, prices[i]-minimum);
        }
        if (profit>0)return profit;
        else return 0;
        }
};
