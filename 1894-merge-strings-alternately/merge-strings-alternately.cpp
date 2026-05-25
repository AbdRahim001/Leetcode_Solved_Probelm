class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int left = 0, right = 0;
        string word3;
        int len1 = word1.size(), len2 = word2.size();
        while (left < len1 && right < len2) {
            word3.push_back(word1[left]);
            word3.push_back(word2[right]);
            left++;
            right++;
        }
        while (left < len1) {
            word3.push_back(word1[left]);
            left++;
        }
        while (right < len2) {
            word3.push_back(word2[right]);
            right++;
        }
        return word3;
    }
};