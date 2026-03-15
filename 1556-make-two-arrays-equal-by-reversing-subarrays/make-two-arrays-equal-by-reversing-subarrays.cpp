class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int> freq(1001, 0);
        for (auto i : target) {
            freq[i]++;
        }
        for (auto i : arr) {
            freq[i]--;
            if (freq[i] < 0) {
                return false;
            }
        }
        return true;
    }
};