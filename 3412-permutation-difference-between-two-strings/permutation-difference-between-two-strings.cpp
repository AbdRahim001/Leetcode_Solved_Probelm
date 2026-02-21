class Solution {
public:
    int findPermutationDifference(string s, string t) {
        map<char, int> S;
        map<char, int> T;
        for (int i = 0; i < s.size(); i++) {
            S[s[i]] += i;
        }
        for (int i = 0; i < t.size(); i++) {
            T[t[i]] += i;
        }
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            sum += abs(S[s[i]] - T[s[i]]);
        }
        return sum;
    }
};