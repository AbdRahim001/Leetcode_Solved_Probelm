class Solution {
public:
    string truncateSentence(string s, int k) {
        int j = 0;
        string S;
        for (auto i : s) {
            if (i == ' ') {
                j++;
                if (j == k)
                    break;
            }
            S.push_back(i);
        }
        return S;
    }
};