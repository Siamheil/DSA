class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int cost = prices[0] + prices[1];
        if (cost <= money) {
            return money - cost;
        }
        return money;
    }
};
