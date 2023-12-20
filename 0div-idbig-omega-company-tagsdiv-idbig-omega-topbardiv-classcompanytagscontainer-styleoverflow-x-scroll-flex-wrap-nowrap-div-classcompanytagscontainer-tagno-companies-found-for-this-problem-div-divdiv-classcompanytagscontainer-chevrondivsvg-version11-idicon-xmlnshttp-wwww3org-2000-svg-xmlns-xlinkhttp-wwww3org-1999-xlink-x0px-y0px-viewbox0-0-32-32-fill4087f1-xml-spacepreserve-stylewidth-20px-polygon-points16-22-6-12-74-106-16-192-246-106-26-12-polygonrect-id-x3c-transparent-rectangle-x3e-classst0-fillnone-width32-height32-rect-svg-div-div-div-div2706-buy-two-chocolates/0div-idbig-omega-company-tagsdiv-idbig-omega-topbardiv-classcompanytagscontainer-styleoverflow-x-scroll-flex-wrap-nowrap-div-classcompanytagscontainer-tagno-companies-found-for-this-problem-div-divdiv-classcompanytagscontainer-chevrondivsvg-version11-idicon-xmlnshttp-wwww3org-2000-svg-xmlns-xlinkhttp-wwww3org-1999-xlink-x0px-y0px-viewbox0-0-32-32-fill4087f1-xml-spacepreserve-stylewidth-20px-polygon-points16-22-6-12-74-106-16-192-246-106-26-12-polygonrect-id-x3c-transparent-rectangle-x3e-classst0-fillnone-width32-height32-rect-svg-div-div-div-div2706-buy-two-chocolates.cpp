class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        auto it = min_element(prices.begin(),prices.end());
        int index = it - prices.begin();
        int mini1 = prices[index];
        // cout << mini1 << endl;
        prices.erase(prices.begin()+index);
        it = min_element(prices.begin(),prices.end());
        index = it - prices.begin();
        int mini2 = prices[index];
        // cout << mini2 << endl;
        
        int sum = mini1 + mini2;
        // cout << sum << endl;
        if(sum <= money) return money - sum;
        return money;
    }
};