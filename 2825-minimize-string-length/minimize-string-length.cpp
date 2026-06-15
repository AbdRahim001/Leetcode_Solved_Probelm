class Solution {
public:
    int minimizedStringLength(string s) {
        vector<int> freq(26, 0);
        int count = 0;
        for (auto i : s) {
            freq[i - 'a']=1;
        }
        for (auto i : freq) {
            if (i > 0)
                count++;
        }
        return count;
    }
};