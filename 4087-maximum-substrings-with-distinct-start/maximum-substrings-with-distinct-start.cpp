class Solution {
public:
    int maxDistinct(string s) {
        vector<int> freq(26, 0);
        for (auto i : s) {
            freq[i - 97]++;
        }
        int count = 0;
        for (auto i : freq) {
            if (i > 0)
                count++;
        }
        return count;
    }
};