class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int k = -1;
        for (auto i : sentences) {
            int count = 1;
            for (auto j : i) {
                if (j == ' ') {
                    count++;
                }
            }
            k = max(count, k);
        }
        return k;
    }
};