class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int len = accounts.size();
        int highest = 0;
        for (int i = 0; i < len; i++) {
            highest = max(
                highest, accumulate(accounts[i].begin(), accounts[i].end(), 0));
        }
        return highest;
    }
};