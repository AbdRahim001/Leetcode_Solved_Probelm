class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string concate_1;
        string concate_2;
        for (auto i : word1) {
            concate_1 += i;
        }
        for (auto i : word2) {
            concate_2 += i;
        }
        if (concate_1 == concate_2) {
            return true;
        }
        return false;
    }
};