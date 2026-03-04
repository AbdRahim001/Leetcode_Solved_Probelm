class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> result;
        for (int i = 0; i < prices.size() - 1; i++) {
            bool check = false;
            for (int j = i + 1; j < prices.size(); j++) {
                if (prices[i] >= prices[j]) {
                    check = true;
                    result.push_back(prices[i] - prices[j]);
                    break;
                }
            }
            if (!check) {
                result.push_back(prices[i]);
            }
        }
        result.push_back(prices[prices.size() - 1]);
        return result;
    }
};