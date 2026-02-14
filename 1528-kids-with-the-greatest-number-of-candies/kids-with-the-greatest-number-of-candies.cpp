class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> results;
        cout << boolalpha;
        for (int i = 0; i < candies.size(); i++) {
            candies[i] += extraCandies;
            // max_element(candies.begin(),candies.end());
            if (candies[i] == *max_element(candies.begin(), candies.end())) {
                bool t = true;
                results.push_back(t);
            }

            else {
                bool f = false;
                results.push_back(f);
            }

            candies[i] -= extraCandies;
        }
        return results;
    }
};