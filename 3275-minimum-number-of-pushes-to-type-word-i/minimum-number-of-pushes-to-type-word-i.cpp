class Solution {
public:
    int minimumPushes(string word) {
        int count = 0;
        int len = word.length();
        for (int i = 0; i < len; i++) {
            count += floor(i / 8) + 1;
        }
        return count;
    }
};