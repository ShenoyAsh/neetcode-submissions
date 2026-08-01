class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int curr_price=prices[0];

        for(int price:prices){
            curr_price=min(curr_price,price);
            max_profit=max(max_profit,price-curr_price);
        }
        return max_profit;
    }
};
