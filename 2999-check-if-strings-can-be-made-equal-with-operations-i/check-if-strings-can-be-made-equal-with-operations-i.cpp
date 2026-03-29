class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        string s2Cpy = s2;
        if (s1 != s2Cpy) {
            swap(s2Cpy[0], s2Cpy[2]);
        }
        if (s1 == s2Cpy) {
            return true;
        }
        s2Cpy = s2;
        if (s1 != s2Cpy) {
            swap(s2Cpy[1], s2Cpy[3]);
        }
        if (s1 == s2Cpy) {
            return true;
        }
        s2Cpy = s2;
        if (s1 != s2Cpy) {
            swap(s2Cpy[0], s2Cpy[2]);
            swap(s2Cpy[1], s2Cpy[3]);
        }
        if (s1 == s2Cpy) {
            return true;
        }
        return false;
    }
};